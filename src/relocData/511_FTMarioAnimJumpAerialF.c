/* AnimJoint data for relocData file 511 (FTMarioAnimJumpAerialF) */
/* 2032 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimJumpAerialF_joint1[8];
extern u16 dFTMarioAnimJumpAerialF_joint2[8];
extern u16 dFTMarioAnimJumpAerialF_joint4[28];
extern u16 dFTMarioAnimJumpAerialF_joint5[170];
extern u16 dFTMarioAnimJumpAerialF_joint6[76];
extern u16 dFTMarioAnimJumpAerialF_joint7[22];
extern u16 dFTMarioAnimJumpAerialF_joint10[18];
extern u16 dFTMarioAnimJumpAerialF_joint11[176];
extern u16 dFTMarioAnimJumpAerialF_joint12[72];
extern u16 dFTMarioAnimJumpAerialF_joint13[18];
extern u16 dFTMarioAnimJumpAerialF_joint15[10];
extern u16 dFTMarioAnimJumpAerialF_joint16[80];
extern u16 dFTMarioAnimJumpAerialF_joint18[30];
extern u16 dFTMarioAnimJumpAerialF_joint20[82];
extern u16 dFTMarioAnimJumpAerialF_joint21[70];
extern u16 dFTMarioAnimJumpAerialF_joint23[100];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimJumpAerialF_joints[] = {
	(u32)dFTMarioAnimJumpAerialF_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimJumpAerialF_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimJumpAerialF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimJumpAerialF_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimJumpAerialF_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimJumpAerialF_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimJumpAerialF_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimJumpAerialF_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimJumpAerialF_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimJumpAerialF_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimJumpAerialF_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimJumpAerialF_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimJumpAerialF_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimJumpAerialF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimJumpAerialF_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimJumpAerialF_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	0xFFFF01DD, /* [23] END */
};

/* Joint 1 */
u16 dFTMarioAnimJumpAerialF_joint1[8] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX), -3216, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 60), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimJumpAerialF_joint2[8] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY), 9650, -144,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 60), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimJumpAerialF_joint4[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 60), 134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 48), 0, 0, 0, -1, 0, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -14, -92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimJumpAerialF_joint5[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1436, -14, -332, 6, -1051, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 842, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -204, 20, -975, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -25, -961, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -322, 6, -971, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -311, 15, -929, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -588, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -254, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 797, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 663, -9,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -613, -12,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -402, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1257, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 642, 92, -619, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 848, 54, -857, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 750, -57, -784, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 796, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -660, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1286, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1036, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 850, 65, -927, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1196, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -979, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -723, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -972, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1155, 40, -920, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1781, 88, -1589, -111,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1013, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1114, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1838, 37, -1669, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1855, 16, -1133, -19, -1696, -27,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimJumpAerialF_joint6[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -256, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -741, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -717, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -717, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -835, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1274, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1154, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -229, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -438, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -485, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -405, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 21,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimJumpAerialF_joint7[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -1608,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -1072, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), -1072, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1251, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTMarioAnimJumpAerialF_joint10[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -368, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), -425, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 17), 127,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimJumpAerialF_joint11[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 194, 13, 1273, 8, 552, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 787, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 1461, 5, 561, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1447, -33, 534, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 644, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 1765, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 812, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 777, -57,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 517, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1761, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1204, -148,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 706, -118, 428, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 540, -389, 1042, -123, 242, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -71, -504, 958, 27, -381, -502,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -682, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1097, 130, -761, -208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1036, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -798, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -775, -97,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -729, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1243, -214,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 926, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1007, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -874, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1480, -22, -1291, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1288, 53, -1086, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1373, -112, -1170, -116,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1794, -31, -1662, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1042, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1129, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1809, -14, 1146, 16, -1686, -24,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimJumpAerialF_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -414, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -491, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -490, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1147, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1234, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -242, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -400, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimJumpAerialF_joint13[18] = {
	ftAnimSetVal(FT_ANIM_ROTX), 1608,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 1072,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 1072,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 1340,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 18), 625,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTMarioAnimJumpAerialF_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimJumpAerialF_joint16[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 0, 1624, 3, 1822, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), 1601, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 56), 1634, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 44), 2412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2412, 129, 1579, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1469, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2671, 348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3109, -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1612, -710,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1688, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1714, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1634, -7, 1468, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1613, -4, 1369, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1717, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1718, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1718, 0, 1611, -1, 1361, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimJumpAerialF_joint18[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 211, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimJumpAerialF_joint20[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2612, 6, 2092, -2, -648, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), -1915, 10, -1205, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 1647, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1626, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 1565, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1908, 2, -1210, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -1172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -2122, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2125, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2179, 572,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -981, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1757, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1809, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1867, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1640, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1868, -1, 1642, 1, -1172, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimJumpAerialF_joint21[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1599, 0, 1588, 0, -1394, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), -1398, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), 1579, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 49), -1599, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1599, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1434, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1434, 0, -1408, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1528, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1537, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1571, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1448, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1701, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1936, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1542, -5, 1445, -2, -1954, -18,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimJumpAerialF_joint23[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 126, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 698, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 18,
	ftAnimEnd(),
	0x200E, 0x0050, 0x0000, 0xFFEC, 0x0000, 0x0146, 0x0000, 0x280D, 0x0032, 0xFFEC, 0xFFFB, 0x0146, 0xFFF9, 0x2003, 0x0031, 0x004F, 0x0000, 0x2003, 0x0001, 0x0050, 0xFFD8, 0x2803, 0x0003, 0x0012, 0x0010, 0x200D, 0x0001, 0xFFE4, 0xFFF5, 0x013C, 0xFFF1, 0x280D, 0x0008, 0xFF7C, 0xFFFD, 0x00A7, 0xFFFB, 0x0801, 0x0002, 0x2003, 0x0001, 0x0025, 0x0010, 0x2003, 0x0005, 0x0037, 0x0003, 0x200F, 0x0001, 0x0039, 0x0002, 0xFF7A, 0xFFFF, 0x00A4, 0xFFFE, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
