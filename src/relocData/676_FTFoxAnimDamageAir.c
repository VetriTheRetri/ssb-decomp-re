/* AnimJoint data for relocData file 676 (FTFoxAnimDamageAir) */
/* 2448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDamageAir_joint1[60];
extern u16 dFTFoxAnimDamageAir_joint2[28];
extern u16 dFTFoxAnimDamageAir_joint4[48];
extern u16 dFTFoxAnimDamageAir_joint5[106];
extern u16 dFTFoxAnimDamageAir_joint6[38];
extern u16 dFTFoxAnimDamageAir_joint7[10];
extern u16 dFTFoxAnimDamageAir_joint8[58];
extern u16 dFTFoxAnimDamageAir_joint10[10];
extern u16 dFTFoxAnimDamageAir_joint11[104];
extern u16 dFTFoxAnimDamageAir_joint12[44];
extern u16 dFTFoxAnimDamageAir_joint13[32];
extern u16 dFTFoxAnimDamageAir_joint15[10];
extern u16 dFTFoxAnimDamageAir_joint16[92];
extern u16 dFTFoxAnimDamageAir_joint18[48];
extern u16 dFTFoxAnimDamageAir_joint20[100];
extern u16 dFTFoxAnimDamageAir_joint21[106];
extern u16 dFTFoxAnimDamageAir_joint23[46];
extern u16 dFTFoxAnimDamageAir_joint24[132];
extern u16 dFTFoxAnimDamageAir_joint25[100];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimDamageAir_joints[] = {
	(u32)dFTFoxAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDamageAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDamageAir_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDamageAir_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDamageAir_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDamageAir_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDamageAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDamageAir_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDamageAir_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDamageAir_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDamageAir_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDamageAir_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDamageAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDamageAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDamageAir_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDamageAir_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDamageAir_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimDamageAir_joint25, /* [24] joint 25 */
	0xFFFF024D, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimDamageAir_joint1[60] = {
	ftAnimSetVal(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 960, -274,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 144, -2032,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 36, 143, 960, 572, -508, -1356,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1103, 114, -613, -84,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 35,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 9), 35,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 1103, -613,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -76, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 35, -23, 960, -95, -566, 408,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 960, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimDamageAir_joint2[28] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 390,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 631, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 631, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDamageAir_joint4[48] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -268, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 306, 171, 149,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -95, 91, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, 80, -84, -299, 40, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 467, 20, -427, -26, -433, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 138, -22, -508, 7, -39, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -268, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDamageAir_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 557, -270, -338, 221, -731, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, -138, -116, 7, -971, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 281, -171, -322, -51, -1150, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, -179, -219, 57, -713, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, -22, -207, 10, -647, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 29, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -435, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -444, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -507, -53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -467, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 44, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -452, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -51, 118,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -377, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 139, -332, -31, -60, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 260, -441, -2, -342, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 557, 330, -338, 103, -731, -389,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDamageAir_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -436,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -964, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -894, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -440, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 440,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimDamageAir_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimDamageAir_joint8[58] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 178, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 234, -47,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 276, 163,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -90, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -27, 240, 68, -94, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 222, 10, 301, 2, 128, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 195, 1, 283, -9, -12, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 255, -5, 123, -5, -60, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 268, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimDamageAir_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDamageAir_joint11[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 727, -422, 567, 542, 451, -413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, 285, 1110, 412, 37, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1297, 590, 1392, 327, 610, 706,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1446, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1765, 181, 1451, 434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1756, -11, 1480, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1642, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1612, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1409, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1460, 64,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1653, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1353, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1547, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1884, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1651, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1576, -154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1323, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2052, 225, 1319, -267, 1634, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2336, 283, 1040, -278, 2059, 425,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDamageAir_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -389, 381,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -634, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -711, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -462, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 320,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimDamageAir_joint13[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 0, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 403, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 403, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimDamageAir_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDamageAir_joint16[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 9, -1601, 0, -1583, -525,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1477, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1550, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2109, -359,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2302, -119,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2391, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1479, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1461, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2403, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -2477, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2475, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1881, 266,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1446, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1581, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1674, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1596, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1488, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 65, -1601, -20, -1583, -94,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDamageAir_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 566, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 698, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 757, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 514, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 232, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimDamageAir_joint20[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1547, 0, -1514, -35, 2102, -190,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1613, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1638, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1911, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2073, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1728, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1610, 2, 1734, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1611, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1633, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1637, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1658, 5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1562, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1387, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1642, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1547, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1639, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1559, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1351, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1769, 314,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1580, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1547, 11, -1514, 66, 2102, 333,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDamageAir_joint21[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -15, 9, 1, 5, 2453, 408,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 112, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, -54, 2862, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -124, -567, 2307, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1141, -590, 2326, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1305, -125, 2314, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1508, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2334, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 144, 33,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1505, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1295, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1080, 328, 2385, 86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2586, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -639, 332, 184, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 37, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -415, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -144, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2545, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2541, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -15, 128, 1, -36, 2453, -87,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDamageAir_joint23[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1013, -324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 689, -503,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -341,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 910, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, 102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDamageAir_joint24[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1604, -54, 1486, 33, -1811, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1659, 9, 1520, 62, -1767, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1585, -101, 1612, -559, -1216, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1862, -68, 402, -668, -1994, -342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1723, 98, 274, -101, -1901, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1779, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 86, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1596, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1596, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1603, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1766, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1718, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 290, 156,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1609, -93, -1705, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1790, -559, 508, 94, -1903, -559,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2727, -516, 479, -179, -2824, -592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2824, -133, 150, -222, -3088, -255,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 29, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2995, -162, -3336, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3149, -108, -3431, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3213, -63, 121, 92, -3419, 11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimDamageAir_joint25[100] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -125, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, -172, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -166, -173,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -167, 9, 0, -3, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 16, -63, 1, -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 163, 35, 29, 12, 11, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 178, 0, 0,
	ftAnimEnd(),
	0x400E, 0x0138, 0x0000, 0x0000, 0x48E0, 0x0000, 0x0040, 0xFE3E, 0x2803, 0x0001, 0x0000, 0xFF98, 0x380D, 0x0001, 0x0000, 0x0000, 0x200F, 0x0002, 0x0000, 0x0006, 0x0000, 0x0001, 0x0000, 0xFFFF, 0x2803, 0x000A, 0x004B, 0x0019, 0x380D, 0x000A, 0x000F, 0xFFF4, 0x200F, 0x0009, 0x01E5, 0x0015, 0x0000, 0xFFFF, 0x0000, 0x0001, 0x380F, 0x0002, 0x0138, 0x0000, 0x0000, 0x0000,
};
