/* AnimJoint data for relocData file 984 (FTSamusAnimDamaged4) */
/* 2656 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged4_joint1[80];
extern u16 dFTSamusAnimDamaged4_joint2[54];
extern u16 dFTSamusAnimDamaged4_joint4[86];
extern u16 dFTSamusAnimDamaged4_joint5[120];
extern u16 dFTSamusAnimDamaged4_joint6[48];
extern u16 dFTSamusAnimDamaged4_joint7[32];
extern u16 dFTSamusAnimDamaged4_joint8[10];
extern u16 dFTSamusAnimDamaged4_joint9[58];
extern u16 dFTSamusAnimDamaged4_joint11[10];
extern u16 dFTSamusAnimDamaged4_joint12[144];
extern u16 dFTSamusAnimDamaged4_joint14[60];
extern u16 dFTSamusAnimDamaged4_joint15[128];
extern u16 dFTSamusAnimDamaged4_joint17[68];
extern u16 dFTSamusAnimDamaged4_joint19[134];
extern u16 dFTSamusAnimDamaged4_joint20[108];
extern u16 dFTSamusAnimDamaged4_joint22[142];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamaged4_joints[] = {
	(u32)dFTSamusAnimDamaged4_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamaged4_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamaged4_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamaged4_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamaged4_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamaged4_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamaged4_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamaged4_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamaged4_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamaged4_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamaged4_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamaged4_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamaged4_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamaged4_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamaged4_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamaged4_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF026C, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged4_joint1[80] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, -903,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1723, 430, -498, -2440,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -28,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -113,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -28, -225, 1708, -287, -610, -1011,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -95, -111, 1637, -281, -799, -339,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -92, -170, 1547, -61, -804, 455,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -270, -106, 1574, 16, -333, 281,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -270, 1574, -333,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 230, 31, 129,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 32, 565, 1616, 53, -162, 696,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1600, -903,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDamaged4_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 54, 0, 14, 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 595, 25, 159, 9, 126, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 595, 1, 159, 0, 126, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 605, -108, 158, -41, 82, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, -158, 0, -41, 0, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamaged4_joint4[86] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 239, 178, -328, 10, -217, 7, -22, -65, -23, -359, 71, 576,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 357, -23, 21, 51, 15, 32, -16, -25, -89, 3, 144, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -104, -18, 411, 7, 245, -2, -67, 32, -17, 55, -57, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 15, 27, 165, -52, -21, -40, 56, 112, 36, 43, -51, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 78, -4, 59, -43, -24, 5, 26, -118, 18, -75, 36, 106,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamaged4_joint5[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 475, -164, 115, -433, -234, -435,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 184, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -318, -149, -669, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 99, -536, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -528, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -152, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 193, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 121, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -376, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 165, 108,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -156, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -178, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 287, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 245, -61,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 152, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 226, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -95, -108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 244, -106, -186, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 14, 8, -15, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, 230, -181, 65, -260, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 475, 214, 115, 296, -234, 26,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged4_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -745, 52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -309, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -934, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1007, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1001, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -795, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamaged4_joint7[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -236, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -236, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -236, 245,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 701,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDamaged4_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged4_joint9[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 23, 0, -61, 0, -37, 0, 1, 480, 31, 0, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 186, 10, -489, -28, -299, -17, 1, 0, 511, 14, -54, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 186, -11, -489, 30, -299, 18, 1, 0, 511, -15, -54, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 480, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged4_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged4_joint12[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1666, -115, 1737, -160, 1392, -427,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1510, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1551, -40, 965, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1585, -237, 881, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1233, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1076, -163, 1341, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1184, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1258, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1482, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1509, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1515, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1317, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1393, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1093, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 899, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1421, -262, 1310, -259,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 634, -202, 505, -208,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1033, 132,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1197, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 584, -40, 457, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 724, 80, 484, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 812, 178, 591, 235,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1403, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1080, 400, 1211, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1614, 215, 1600, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1511, 26, 1541, 68, 1434, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1666, 155, 1737, 195, 1392, -41,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged4_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 150,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -444, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -373, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -455, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -466, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1061, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -957, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -891, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamaged4_joint15[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -180, -29, -186, -376, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -96, -49, -216, -29, -595, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 80, -89, 71, -132, 186,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -7, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 50, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -223, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -173, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -296, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -99, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 239, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -483, -166,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1137, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 48, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 46, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 77, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1244, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1298, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 31, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -35, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 98, -19, -1244, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -7, 19, -409, 248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 76, 45, -351, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 7, -29, 5, -376, -25,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged4_joint17[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 456, 181,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 638, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 288, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1080, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1137, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 996, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 964, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 736, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 659, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 260, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 195,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamaged4_joint19[134] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, 90, -29, -81, -44, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, 8, -110, 23, 233, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -57, 5, 17, 65, -60, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 182, 173,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -36, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 375, -156, -113, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, -242, 48, 68, -118, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 152, 144,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -102, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -236, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -170, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -138, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -28, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -92, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -76, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -48, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 71, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -37, 30, 292, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -32, -17, 57, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -40, -29, 19, -44, -101,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged4_joint20[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -333, 160, -140, -49, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -106, -94, 20, -54, -305, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 38, 82, 51, 12, -335, -82,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 122, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 63, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -598, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -640, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 198, -18,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 67, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 42, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -588, 152,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 16, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 134, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 165, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -354, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -130, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 61, 160, 26, -49, 80,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged4_joint22[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -296,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 429, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 395, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 47,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0xFF85, 0x00C1, 0xFF98, 0xFF2B, 0x00EE, 0x2809, 0x0008, 0x00F1, 0xFFDC, 0x2803, 0x0009, 0xFFD8, 0xFFE9, 0x2005, 0x0003, 0xFFBD, 0xFFEF, 0x2005, 0x0001, 0xFFA8, 0xFFEF, 0x2805, 0x000D, 0xFFCD, 0x0009, 0x0801, 0x0004, 0x2009, 0x0001, 0x00C7, 0xFFC2, 0x2809, 0x000A, 0x0076, 0x0003, 0x2003, 0x0001, 0xFFBD, 0xFFE3, 0x2803, 0x0009, 0xFFAA, 0xFFE5, 0x0801, 0x0007, 0x2005, 0x0001, 0xFFD8, 0x0010, 0x2805, 0x0004, 0x0080, 0x004B, 0x0801, 0x0001, 0x200B, 0x0001, 0xFF8F, 0x0028, 0x0073, 0xFFA1, 0x2803, 0x0003, 0x00A6, 0x0004, 0x2009, 0x0002, 0xFF6C, 0xFFD1, 0x200D, 0x0001, 0x00BC, 0x0020, 0xFF5A, 0xFFE0, 0x200F, 0x0001, 0x008E, 0xFFE9, 0x00C1, 0x0004, 0xFF2B, 0xFFD2, 0x0000, 0x0000, 0x0000,
};
