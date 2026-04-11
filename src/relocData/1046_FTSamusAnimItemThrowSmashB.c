/* AnimJoint data for relocData file 1046 (FTSamusAnimItemThrowSmashB) */
/* 1664 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowSmashB_joint1[24];
extern u16 dFTSamusAnimItemThrowSmashB_joint2[36];
extern u16 dFTSamusAnimItemThrowSmashB_joint4[46];
extern u16 dFTSamusAnimItemThrowSmashB_joint5[128];
extern u16 dFTSamusAnimItemThrowSmashB_joint6[60];
extern u16 dFTSamusAnimItemThrowSmashB_joint7[26];
extern u16 dFTSamusAnimItemThrowSmashB_joint8[16];
extern u16 dFTSamusAnimItemThrowSmashB_joint11[10];
extern u16 dFTSamusAnimItemThrowSmashB_joint12[76];
extern u16 dFTSamusAnimItemThrowSmashB_joint14[40];
extern u16 dFTSamusAnimItemThrowSmashB_joint15[78];
extern u16 dFTSamusAnimItemThrowSmashB_joint17[36];
extern u16 dFTSamusAnimItemThrowSmashB_joint19[58];
extern u16 dFTSamusAnimItemThrowSmashB_joint20[72];
extern u16 dFTSamusAnimItemThrowSmashB_joint22[78];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimItemThrowSmashB_joints[] = {
	(u32)dFTSamusAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimItemThrowSmashB_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimItemThrowSmashB_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimItemThrowSmashB_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimItemThrowSmashB_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimItemThrowSmashB_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimItemThrowSmashB_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimItemThrowSmashB_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimItemThrowSmashB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimItemThrowSmashB_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimItemThrowSmashB_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimItemThrowSmashB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF018B, /* [22] END */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemThrowSmashB_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemThrowSmashB_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1600, -59, 0, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1540, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowSmashB_joint2[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 9, 344, -11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -89, -19, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, -1, 0, 1, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 58), 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimItemThrowSmashB_joint4[46] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -107, 22, 131, -15, 33, -5, 0, -32, 0, -14, -36, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 179, 5, -125, -7, -45, -1, -32, 0, 48, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowSmashB_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2740, -71, 114, -380, 2985, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -3077, -437, -503, -100, 3129, 351,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3687, -495, -466, 108, 3626, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4361, -196, 3527, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -376, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4461, 199, -439, -285, 3601, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3961, 162, -946, -534, 3558, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4136, -120, -1509, -291, 3804, 173,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 4140, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4344, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1530, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1668, -30,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4167, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 4457, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4357, -6, -1701, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4355, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1619, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1638, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1724, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4493, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4565, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4349, 6, -1722, 2, 4594, 28,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowSmashB_joint6[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1070, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -949, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -790, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -459, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -767, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowSmashB_joint7[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 391, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 18), 701,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowSmashB_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemThrowSmashB_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowSmashB_joint12[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -10, -128, 17, -215, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 96, 67, 205, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -8, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, 151,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 458, 73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 146, 17, 163, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -7, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -40, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -208, -13,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 55, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -68, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -126, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 3, -128, -2, -215, -7,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemThrowSmashB_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -765, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -993, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -633, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowSmashB_joint15[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 20, 1635, -17, -1998, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1494, 83, -2057, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1298, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1335, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1497, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1612, 66, -2120, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1657, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2052, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1511, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1520, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1656, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1636, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2041, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -2000, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 0, 1635, 0, -1998, 2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemThrowSmashB_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 554, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 608, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 592, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 481, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemThrowSmashB_joint19[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -3, -1579, 0, 1566, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1754, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1545, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1638, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1635, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1484, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1731, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1685, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1490, -5, 1542, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1576, -3, 1566, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 0, -1579, -2, 1566, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowSmashB_joint20[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1831, 18, 1445, 4, 1554, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1565, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 2045, -41, 1538, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1945, -152, 1443, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1417, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1740, -112, 1416, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1412, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1719, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1830, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1550, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1417, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 1444, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 0, 1445, 1, 1554, 3,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemThrowSmashB_joint22[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 499, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 522, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 455, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0091, 0x0001, 0x00C1, 0x000C, 0xFF2A, 0xFFFF, 0x280B, 0x0017, 0x008F, 0x0001, 0xFF2A, 0x0000, 0x2005, 0x0005, 0x015B, 0x000C, 0x2005, 0x0001, 0x0159, 0xFFB7, 0x2005, 0x0002, 0x0083, 0xFFE0, 0x2005, 0x0001, 0x0087, 0x0003, 0x2005, 0x000E, 0x00BE, 0x0004, 0x200F, 0x0001, 0x0091, 0x0001, 0x00C1, 0x0003, 0xFF2A, 0x0000, 0x0000,
};
