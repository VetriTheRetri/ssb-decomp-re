/* AnimJoint data for relocData file 1540 (FTCaptainAnimDamageX2) */
/* 2336 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamageX2_joint1[42];
extern u16 dFTCaptainAnimDamageX2_joint2[48];
extern u16 dFTCaptainAnimDamageX2_joint4[86];
extern u16 dFTCaptainAnimDamageX2_joint5[92];
extern u16 dFTCaptainAnimDamageX2_joint6[48];
extern u16 dFTCaptainAnimDamageX2_joint7[46];
extern u16 dFTCaptainAnimDamageX2_joint8[32];
extern u16 dFTCaptainAnimDamageX2_joint10[52];
extern u16 dFTCaptainAnimDamageX2_joint11[94];
extern u16 dFTCaptainAnimDamageX2_joint12[48];
extern u16 dFTCaptainAnimDamageX2_joint13[20];
extern u16 dFTCaptainAnimDamageX2_joint14[10];
extern u16 dFTCaptainAnimDamageX2_joint16[48];
extern u16 dFTCaptainAnimDamageX2_joint17[84];
extern u16 dFTCaptainAnimDamageX2_joint19[40];
extern u16 dFTCaptainAnimDamageX2_joint21[88];
extern u16 dFTCaptainAnimDamageX2_joint22[98];
extern u16 dFTCaptainAnimDamageX2_joint24[142];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDamageX2_joints[] = {
	(u32)dFTCaptainAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDamageX2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDamageX2_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDamageX2_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDamageX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDamageX2_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDamageX2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDamageX2_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDamageX2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDamageX2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDamageX2_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDamageX2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0215, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimDamageX2_joint1[42] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 110,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1433, -912, -468, -3863,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -35,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1372, -965,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 17), 103, 1266, -912,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 103, 1248, -742,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamageX2_joint2[48] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 249, 100, 78, -54, 3, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 300, -20, -56, -7, 123, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -139, -14, -56, 7, 123, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamageX2_joint4[86] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -240, 38, -515, 96, 97, 50, 2, 92, 17, 47, -106, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 305, 42, 290, 46, 151, 12, 34, 12, -14, -12, 50, 62,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 34, -1, -14, 6, 50, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 580, 384, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 305, -120, 290, -130, 151, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 233, -40, 9, -101, -43, -52,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 29, -96, 0, -49, 77, -7,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -31, 47,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDamageX2_joint5[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, -648, -1614, 611, 1084, 746,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2017, -186, -1002, -11, 1830, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1741, 104, -1637, -318, 1630, -106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1630, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1808, -27, -1639, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1796, 13, -1632, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1454, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1386, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1637, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1731, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1708, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1479, -35, 1498, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1574, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1399, 0, 1433, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1381, 9, 1376, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 13, -1614, -39, 1084, -292,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamageX2_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -342,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1140, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -965, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -449, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -492, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -881, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamageX2_joint7[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -515, -2, -333, 420, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -158, 0, -69, -1, 75, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -25, 2, 27, -17,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 420, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -518, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -313, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -515, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamageX2_joint8[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 360,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), 0, -100,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, -108,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 23), 0, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -402, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 30, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamageX2_joint10[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 72, 0, 186, 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 217, 7, 559, 20, 21, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 123, -11, 334, -30, -97, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -18, 0, -49, 0, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamageX2_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, -361, 1464, 212, -1016, -1388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2099, -517, 1677, 71, -2405, -967,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2772, -248, 1607, 13, -2951, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2595, 94, 1705, 48, -2255, 374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2584, 12, 1704, -1, -2202, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1998, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -2338, 18, 1532, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2319, 43, 1515, -97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2101, 265, 1271, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1958, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1808, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1719, 191, 1486, 101, -1379, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, -8, 1475, -10, -1109, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -18, 1464, -11, -1016, 93,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamageX2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 695,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -541, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -610, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -606, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -788, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -987, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1073, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamageX2_joint13[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 388, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 445, 126, 324,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDamageX2_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamageX2_joint16[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 19, -210, -28, -39, -16, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -632, -57, -119, -10, -68, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -632, 31, -119, 6, -68, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 249, 45, -5, 8, -2, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimDamageX2_joint17[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -247, 70, -94, -472, -159,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 36, 36, -766, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -407, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -399, 1, 49, 5, -730, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 30, 0, -396, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -404, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -428, 2,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -80, -382, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -414, 34, -131, -80, -492, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -163, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -132, 10, -484, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -68, 90, -519, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 354, 70, 138, -472, 46,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamageX2_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, -441,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 459, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimDamageX2_joint21[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 167, -42, 167, 80, 409,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 61, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 40, 205, 489, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 284, 31, 490, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 102, -92, 260, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 99, -3, 244, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -16, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 8, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 40, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -68, 11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, 52, -44, 46, -263, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 65, -119, 81, -33, -16, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -191, -42, -123, 80, 96,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamageX2_joint22[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -171, 110, -60, -76, -613,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -285, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 90, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -690, -390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -837, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -293, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -302, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -824, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -579, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 94, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 171, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 56, -551, 66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -208, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -271, 58, 283, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 69, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 224, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 146, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 90, 110, -36, -76, 79,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamageX2_joint24[142] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 116,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 658, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 574, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1008, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 699, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -157,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFF70, 0x016D, 0xFF18, 0xFEE9, 0x006C, 0x200F, 0x0001, 0x0011, 0xFFF1, 0x0084, 0xFF8C, 0xFF55, 0x00B1, 0x200F, 0x0001, 0x0083, 0x0049, 0x0083, 0xFFF7, 0x004B, 0x005A, 0x2803, 0x0006, 0x00CB, 0x0006, 0x2805, 0x0010, 0x002B, 0x0004, 0x2009, 0x0001, 0x000A, 0xFFDA, 0x2009, 0x0001, 0x0000, 0xFFF5, 0x2809, 0x000E, 0xFF24, 0xFFF2, 0x0801, 0x0004, 0x2003, 0x0001, 0x00D1, 0x0005, 0x2803, 0x000B, 0x0119, 0xFFF4, 0x0801, 0x0009, 0x200D, 0x0001, 0x0032, 0xFFF0, 0xFF16, 0xFFC0, 0x2809, 0x0002, 0xFEA4, 0x0007, 0x2005, 0x0001, 0x000A, 0x003F, 0x2007, 0x0001, 0x00EE, 0xFF84, 0x00B0, 0x007E, 0x2805, 0x0002, 0x014B, 0x0032, 0x200B, 0x0001, 0x0020, 0xFF96, 0xFEB1, 0x0010, 0x200B, 0x0001, 0x0019, 0x0040, 0xFEC5, 0x001B, 0x200F, 0x0001, 0x00A1, 0x0087, 0x016D, 0x0021, 0xFEE9, 0x0023, 0x0000, 0x0000, 0x0000,
};
