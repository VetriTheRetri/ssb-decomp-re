/* AnimJoint data for relocData file 1146 (FTLinkAnimDamaged4) */
/* 2256 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimDamaged4_joint1[28];
extern u16 dFTLinkAnimDamaged4_joint2[46];
extern u16 dFTLinkAnimDamaged4_joint4[38];
extern u16 dFTLinkAnimDamaged4_joint5[88];
extern u16 dFTLinkAnimDamaged4_joint6[36];
extern u16 dFTLinkAnimDamaged4_joint9[8];
extern u16 dFTLinkAnimDamaged4_joint10[82];
extern u16 dFTLinkAnimDamaged4_joint11[40];
extern u16 dFTLinkAnimDamaged4_joint12[8];
extern u16 dFTLinkAnimDamaged4_joint13[8];
extern u16 dFTLinkAnimDamaged4_joint16[8];
extern u16 dFTLinkAnimDamaged4_joint17[12];
extern u16 dFTLinkAnimDamaged4_joint18[30];
extern u16 dFTLinkAnimDamaged4_joint20[18];
extern u16 dFTLinkAnimDamaged4_joint21[116];
extern u16 dFTLinkAnimDamaged4_joint23[36];
extern u16 dFTLinkAnimDamaged4_joint25[132];
extern u16 dFTLinkAnimDamaged4_joint26[150];
extern u16 dFTLinkAnimDamaged4_joint28[186];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimDamaged4_joints[] = {
	(u32)dFTLinkAnimDamaged4_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimDamaged4_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimDamaged4_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimDamaged4_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimDamaged4_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimDamaged4_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimDamaged4_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimDamaged4_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimDamaged4_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimDamaged4_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimDamaged4_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimDamaged4_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimDamaged4_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimDamaged4_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimDamaged4_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimDamaged4_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimDamaged4_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimDamaged4_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimDamaged4_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF01F3, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimDamaged4_joint1[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 901,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -509,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), 921, -76,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 7), 720, -233,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 658, 289,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 901, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimDamaged4_joint2[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 53, 181, 83, -143, -23, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 490, 33, -201, -21, -385, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 490, -11, -201, 16, -385, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 305, -59, 55, 47, 2, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimDamaged4_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 534, 15, -84, -4, 73, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 306, -3, 152, -12, 78, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 472, -2, -306, 0, -287, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimDamaged4_joint5[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -301, -326, 75, -86, 451,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -292, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, -184, 365, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -88, -70, 412, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -730, -15, 358, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -743, -10, 359, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -750, 6, 347, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -321, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -431, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -742, 94, 336, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 187, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 479, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -448, 28, 246, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -373, 60, 8, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 92, -326, 46, -86, -94,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimDamaged4_joint6[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -516,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -561, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -543, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -712, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -590, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimDamaged4_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimDamaged4_joint10[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 157, 123, -144, -50, 393,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 571, -3, -12, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -160, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 566, -6, -2, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 295, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 376, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 362, 15, -191, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 86, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 464, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 325, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 163, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 431, -24, -12, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, -14, 123, -40, -50, -38,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimDamaged4_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -348,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -936, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -372, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -317, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -563, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimDamaged4_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimDamaged4_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimDamaged4_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimDamaged4_joint17[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -163,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 19), 143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -163,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimDamaged4_joint18[30] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 143, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 202, 541, 25,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 14, 264, 6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -302, 247, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimDamaged4_joint20[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 327, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), -134, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimDamaged4_joint21[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1850, 690, -1364, -291, 1717, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1160, 241, -1655, 8, 1521, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1367, -117, -1346, 300, 1105, -366,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1336, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1055, 125, 787, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1094, -43, 798, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1256, 23, 1080, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1314, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1384, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1466, -229, -1210, 128, 1012, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1843, -424, -1000, 118, 1028, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2315, -219, -973, -12, 1343, 154,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1167, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1308, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -2114, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1823, 228,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1790, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1204, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1575, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -60, -1364, -56, 1717, 141,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimDamaged4_joint23[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 290,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 811, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 759, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 745, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 483, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -234,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimDamaged4_joint25[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, -604, -1446, 336, 1573, 760,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1883, -73, -1110, 51, 2334, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1427, 338, -1342, -249, 1806, -337,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1635, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1206, 67, -1608, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1293, -82, -1619, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1339, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1653, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1632, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1698, -111,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1316, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1275, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1617, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1442, 260, -1330, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1784, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1096, 258, 1572, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1102, -138, 1406, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1799, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1483, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1236, -80, 1383, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1258, -8, 1497, 78,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1466, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1279, -20, -1446, 20, 1573, 76,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimDamaged4_joint26[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -236, 269, -13, -125, -367,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -558, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 34, -166, 256, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -61, -288, -67, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -541, -265, -257, -31, -246, 199,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -141, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -592, -46, -130, 72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 12, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -393, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -149, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -118, 42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 68, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 438, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -347, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -94, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -55, 108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 298, 74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 93, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, -224, 423, -83, 247, -353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -355, -218, 272, -272, -409, -548,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -245, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -107, -848, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, 182, -750, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -50, 208, 244, 121, -560, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, 160, 298, 12, -271, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 99, 269, -28, -125, 146,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimDamaged4_joint28[186] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 602,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1027, 323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1072, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 804, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 842, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1067, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1423, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 902, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -154,
	ftAnimEnd(),
	0x0000, 0x200E, 0x049C, 0xFFCC, 0x0692, 0x0067, 0xF972, 0x0029, 0x2803, 0x0002, 0x04B9, 0x00E3, 0x2809, 0x0003, 0xF9CC, 0x0049, 0x2005, 0x0001, 0x06FA, 0xFFE5, 0x2005, 0x0001, 0x065B, 0xFF39, 0x2007, 0x0001, 0x062E, 0x00A5, 0x056A, 0xFF76, 0x2803, 0x0002, 0x05D7, 0xFFEE, 0x200D, 0x0001, 0x0547, 0xFFEF, 0xFA09, 0x0020, 0x2809, 0x0008, 0xF95A, 0xFFEA, 0x2805, 0x000D, 0x06C2, 0xFFE3, 0x0801, 0x0001, 0x2003, 0x0001, 0x05E0, 0xFFF8, 0x2803, 0x000A, 0x03A4, 0xFFDA, 0x0801, 0x0006, 0x2009, 0x0001, 0xF943, 0xFFE9, 0x2809, 0x0004, 0xF8C4, 0xFFAD, 0x0801, 0x0003, 0x2003, 0x0001, 0x038C, 0xFF19, 0x200F, 0x0001, 0x01D5, 0xFE9C, 0x068E, 0xFF92, 0xF842, 0xFFBF, 0x2805, 0x0002, 0x051B, 0xFFE3, 0x200B, 0x0001, 0x00C2, 0x026A, 0xF841, 0x0072, 0x200B, 0x0001, 0x06A9, 0x025E, 0xF926, 0x0069, 0x2809, 0x0002, 0xF8FE, 0x0011, 0x2007, 0x0001, 0x057E, 0xFF2F, 0x05AA, 0x008A, 0x2807, 0x0002, 0x04B9, 0xFFCC, 0x067D, 0x0031, 0x0801, 0x0001, 0x2009, 0x0001, 0xF938, 0x0039, 0x200F, 0x0001, 0x049C, 0xFFE4, 0x0692, 0x0015, 0xF972, 0x003A, 0x0000, 0x0000, 0x0000,
};
