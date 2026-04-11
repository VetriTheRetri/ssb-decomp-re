/* AnimJoint data for relocData file 1606 (FTCaptainAnimItemDrop) */
/* 1344 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemDrop_joint1[10];
extern u16 dFTCaptainAnimItemDrop_joint2[16];
extern u16 dFTCaptainAnimItemDrop_joint4[40];
extern u16 dFTCaptainAnimItemDrop_joint5[74];
extern u16 dFTCaptainAnimItemDrop_joint6[32];
extern u16 dFTCaptainAnimItemDrop_joint7[8];
extern u16 dFTCaptainAnimItemDrop_joint8[16];
extern u16 dFTCaptainAnimItemDrop_joint10[8];
extern u16 dFTCaptainAnimItemDrop_joint11[98];
extern u16 dFTCaptainAnimItemDrop_joint12[48];
extern u16 dFTCaptainAnimItemDrop_joint13[16];
extern u16 dFTCaptainAnimItemDrop_joint14[10];
extern u16 dFTCaptainAnimItemDrop_joint16[14];
extern u16 dFTCaptainAnimItemDrop_joint17[46];
extern u16 dFTCaptainAnimItemDrop_joint19[24];
extern u16 dFTCaptainAnimItemDrop_joint21[64];
extern u16 dFTCaptainAnimItemDrop_joint22[46];
extern u16 dFTCaptainAnimItemDrop_joint24[52];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimItemDrop_joints[] = {
	(u32)dFTCaptainAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimItemDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimItemDrop_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimItemDrop_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimItemDrop_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimItemDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimItemDrop_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimItemDrop_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimItemDrop_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimItemDrop_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimItemDrop_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimItemDrop_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimItemDrop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimItemDrop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimItemDrop_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimItemDrop_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF013E, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimItemDrop_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1600, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimItemDrop_joint2[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 4, -76, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 6), -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 18), 107,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimItemDrop_joint4[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, -31, 47,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 49, -17, -107, -13, 12, 12, 0, 31, 0, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 49, 7, -107, 5, 12, -5, 0, -14, 0, 21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 189, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemDrop_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, -2, -1614, 3, 1084, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1343, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1395, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1430, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1539, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1489, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1391, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1155, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1318, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1367, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1417, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1610, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1138, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1086, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, -1, -1614, -3, 1084, -1,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemDrop_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1122, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1092, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -891, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -798, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemDrop_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -781, -89, -388,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimItemDrop_joint8[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 157, -183, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimItemDrop_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimItemDrop_joint11[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, 7, 1464, -3, -1016, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1675, -3, 1317, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1250, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1329, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1376, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1679, -59, 1309, 28, -1381, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1381, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1795, -44, -1603, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1767, 24, -1536, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1663, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1399, 10, -1466, 121,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1463, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1292, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1083, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1662, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1735, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1052, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1014, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -2, 1464, 1, -1016, -2,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemDrop_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1000, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -649, 461,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -236, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1018, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimItemDrop_joint13[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 5, 0, 189,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 270, 275, 62,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimItemDrop_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemDrop_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 18, 0, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 24), 0, 18, 0, -3,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimItemDrop_joint17[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -21, 70, -17, -472, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -76, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -472, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 71, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 93, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 190, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -71, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 69, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 0, 70, 1, -472, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemDrop_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 483, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 479, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 446, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemDrop_joint21[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 11, -42, 7, 80, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -90, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 69, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -49, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -106, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -101, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -126, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -98, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -43, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 72, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 79, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, 0, -42, 1, 80, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemDrop_joint22[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -25, 110, -5, -76, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -163, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 110, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -56, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 158, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -158, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -77, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 1, 110, 0, -76, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemDrop_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 541, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0x0000, 0x016D, 0x0006, 0xFEE9, 0x0001, 0x280B, 0x0017, 0x00A1, 0x0000, 0xFEE9, 0x0000, 0x2005, 0x0005, 0x014A, 0xFFE3, 0x2005, 0x0001, 0x0137, 0xFFF5, 0x2005, 0x0011, 0x016C, 0x0001, 0x200F, 0x0001, 0x00A1, 0x0000, 0x016D, 0x0000, 0xFEE9, 0x0000, 0x0000, 0x0000, 0x0000,
};
