/* AnimJoint data for relocData file 1590 (FTCaptainAnimCliffSlow) */
/* 2448 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCliffSlow_joint1[34];
extern u16 dFTCaptainAnimCliffSlow_joint2[98];
extern u16 dFTCaptainAnimCliffSlow_joint3[44];
extern u16 dFTCaptainAnimCliffSlow_joint5[26];
extern u16 dFTCaptainAnimCliffSlow_joint6[166];
extern u16 dFTCaptainAnimCliffSlow_joint7[80];
extern u16 dFTCaptainAnimCliffSlow_joint8[80];
extern u16 dFTCaptainAnimCliffSlow_joint11[18];
extern u16 dFTCaptainAnimCliffSlow_joint12[164];
extern u16 dFTCaptainAnimCliffSlow_joint13[48];
extern u16 dFTCaptainAnimCliffSlow_joint14[64];
extern u16 dFTCaptainAnimCliffSlow_joint15[10];
extern u16 dFTCaptainAnimCliffSlow_joint17[44];
extern u16 dFTCaptainAnimCliffSlow_joint18[56];
extern u16 dFTCaptainAnimCliffSlow_joint20[40];
extern u16 dFTCaptainAnimCliffSlow_joint22[34];
extern u16 dFTCaptainAnimCliffSlow_joint23[82];
extern u16 dFTCaptainAnimCliffSlow_joint25[84];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimCliffSlow_joints[] = {
	(u32)dFTCaptainAnimCliffSlow_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCliffSlow_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCliffSlow_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimCliffSlow_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimCliffSlow_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCliffSlow_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCliffSlow_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCliffSlow_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimCliffSlow_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCliffSlow_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCliffSlow_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCliffSlow_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimCliffSlow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimCliffSlow_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimCliffSlow_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimCliffSlow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimCliffSlow_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimCliffSlow_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF024E, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimCliffSlow_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -303,
	ftAnimSetValRate(FT_ANIM_TRAY), -2907, 437,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 51), -303, 42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), -2542, -31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 203,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), -2274, 226,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 639,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 19), -1398, -78,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), -1358, -44,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCliffSlow_joint2[98] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 430, 1632, -2, 0, -14,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 1583, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 25), -41, -5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), 40, -299,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -299,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 6), -418, -147,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -147,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), -411, 85,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 85,
	ftAnimSetValRateT(FT_ANIM_TRAX, 13), -4, 31,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 1558, -49,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -49,
	ftAnimSetValRateT(FT_ANIM_TRAY, 14), 1634, 211,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -5,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 25, 162,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 3), -1, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 24), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 162,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 9), 281, 6,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 211,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 6,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 13), 247, -25,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 1658, -31,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -31,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 1644, 155,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimCliffSlow_joint3[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 357,
	ftAnimSetValRate(FT_ANIM_ROTY), -241, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 24, 0, -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 312, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -8, 0, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 408, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 87, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimCliffSlow_joint5[26] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 26), 0, 8,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 25), 134, 3, 54, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimCliffSlow_joint6[166] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -991, 259, -1306, 121, -67, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -171, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1045, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -661, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -619, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -306, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -248, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 144, 37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -349, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -705, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1037, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1396, -89,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 187, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 60, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -693, 9, -1445, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -705, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1223, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 47, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 278, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -760, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -899, -66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 275, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 462, 112,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1181, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -1505, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 583, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1403, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -971, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1582, -4,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1409, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1489, 4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1522, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1546, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -4, -1554, -8, 1491, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimCliffSlow_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -336,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -524, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -774, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -594, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -486, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -803, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1032, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1037, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -991, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1057, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1047, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -945, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -921, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimCliffSlow_joint8[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 453, -125,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 277, 293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 120, -129, 276, -9, 292, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -126, -5, 235, -13, 274, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 214, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 28, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 69, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 18, -2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -479, -1, 109, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -17, 26, -140, -8, -136, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -88, -29, -103, 11, -138, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -203, 47, -69, 5, -78, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 727, 33, -9, 6, 69, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimCliffSlow_joint11[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), -178, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -178, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimCliffSlow_joint12[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1152, 155, 1167, -93, 1521, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2104, 131, 1205, 76, 2268, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2230, 129, 1275, 44, 2216, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 3151, 144, 1113, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 2208, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2356, 148,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 3031, 63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3274, 100, 1143, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3440, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1179, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1152, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 954, -67,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3101, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3569, 317, 3252, 335,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4541, 337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 893, -13, 3771, 500,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1010, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4252, 358,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4750, 192, 4487, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 4940, -94, 4743, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4806, -130, 1012, 15, 4609, -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 4589, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 4778, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 1265, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1286, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1566, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4619, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4744, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4802, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 4854, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4866, 11, 1582, 15, 4744, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimCliffSlow_joint13[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1070, -24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1044, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -997, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1069, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1116, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1212, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1253, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1204, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1182, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -981, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, 38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimCliffSlow_joint14[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 269, -9, 298, -8, -12, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -250, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 178, 7, 223, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 391, -2, 413, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -32, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 149, 0, 593, -5,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 365, 17, 361, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 373, -28, -135, 8, 423, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -176, -1, 135, 10, -49, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimCliffSlow_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 51),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCliffSlow_joint17[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -89, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 28, 3, -98, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 178, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 159, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -133, -20, 89, 0, 42, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -353, 2, 19, -3, -12, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -78, 27, 6, 0, -13, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimCliffSlow_joint18[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -251, 1, 121, 0, -67, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -279, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -55, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -125, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -136, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -57, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -44, 35,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -61, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -117, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -125, -8, -50, 5, -8, 35,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimCliffSlow_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 338, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 584, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 420, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 414, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 222, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 166, -56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimCliffSlow_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1601, 0, -1656, 0, 1868, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -1656, 0, 1828, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -1528, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1536, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), -1579, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, -1, -1656, 0, 1827, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimCliffSlow_joint23[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, 14, 173, 3, -276, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 269, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 19), 62, 5, -281, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 58, -16, -344, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -701, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 34, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 260, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 84, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -686, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -362, 37,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 81, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 49, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 36, 2, -321, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 58, 1, -11, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 59, 0, 50, 0, 0, 11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimCliffSlow_joint25[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 341, 18,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 574, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 347, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 376, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 335, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, 23,
	ftAnimEnd(),
	0x0000, 0x200E, 0x068E, 0xFFFE, 0x05F6, 0x0000, 0xFAED, 0x0000, 0x280D, 0x0032, 0x0667, 0x0002, 0xFA20, 0xFFF6, 0x2003, 0x0016, 0x06A9, 0xFFE2, 0x2003, 0x0001, 0x068D, 0xFFEA, 0x2003, 0x0010, 0x0686, 0xFFFC, 0x2003, 0x0001, 0x0681, 0xFFFB, 0x2003, 0x000A, 0x0644, 0xFFFB, 0x200F, 0x0001, 0x063E, 0xFFFB, 0x066A, 0x0002, 0xFA16, 0xFFF6, 0x0000, 0x0000, 0x0000,
};
