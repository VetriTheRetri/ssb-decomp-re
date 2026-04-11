/* AnimJoint data for relocData file 983 (FTSamusAnimDamaged3) */
/* 1680 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged3_joint1[40];
extern u16 dFTSamusAnimDamaged3_joint2[38];
extern u16 dFTSamusAnimDamaged3_joint4[46];
extern u16 dFTSamusAnimDamaged3_joint5[74];
extern u16 dFTSamusAnimDamaged3_joint6[40];
extern u16 dFTSamusAnimDamaged3_joint7[42];
extern u16 dFTSamusAnimDamaged3_joint8[10];
extern u16 dFTSamusAnimDamaged3_joint9[10];
extern u16 dFTSamusAnimDamaged3_joint11[10];
extern u16 dFTSamusAnimDamaged3_joint12[60];
extern u16 dFTSamusAnimDamaged3_joint14[32];
extern u16 dFTSamusAnimDamaged3_joint15[82];
extern u16 dFTSamusAnimDamaged3_joint17[36];
extern u16 dFTSamusAnimDamaged3_joint19[76];
extern u16 dFTSamusAnimDamaged3_joint20[74];
extern u16 dFTSamusAnimDamaged3_joint22[124];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamaged3_joints[] = {
	(u32)dFTSamusAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamaged3_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamaged3_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamaged3_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamaged3_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamaged3_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamaged3_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamaged3_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamaged3_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamaged3_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamaged3_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamaged3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamaged3_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamaged3_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0178, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged3_joint1[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, -903,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1732, 429, 7, 2,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -28,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -7,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -7, 20, 1866, -96, 2, -5,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 1600, -903,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamaged3_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 149, 246, 0, 142, 0, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 492, 61, 285, 51, 332, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 492, -49, 285, -28, 332, -33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamaged3_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 122, 129, 0, 0, 0, 16, 0, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 258, 1, 0, 0, 4, 18, 96, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 136, -25, 0, 0, 19, -3, 64, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimDamaged3_joint5[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, -659, 114, -283, -231, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -307, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, -139, -148, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 197, 205, -443, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 260, 36, -339, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -315, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -245, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 301, 44, -282, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 429, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -166, -60,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -238, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 286, 23, -409, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 190, 114, 523, -231, -64,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged3_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -224,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -283, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 297,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamaged3_joint7[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 701, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -460, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -460, 92, 0, -4, 0, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 298, 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 150,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamaged3_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged3_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged3_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged3_joint12[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -33, 1737, -445, 1392, 274,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1067, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1291, -250, 1667, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1237, -36, 1629, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 1056, -20, 1955, 20,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1020, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1062, -267, 1037, 236, 1940, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1554, -243, 1529, 349, 1506, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 4, 1737, 207, 1392, -113,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged3_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -422,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1017, -189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1136, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1153, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1049, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 454,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamaged3_joint15[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, -266, -1581, 311, -1998, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1787, -122, -1269, 65, -2055, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1765, 97, -1450, -136, -2312, -160,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2400, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1595, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1482, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1448, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1544, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2419, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2147, 123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1584, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1559, -17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1551, 11, -2016, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 30, -1581, -21, -1998, 18,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged3_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 544,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 992, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 779, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 678, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 584, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 470, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamaged3_joint19[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 43, -28, 173, -41, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -55, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, 64, 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 100, -69, -42, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 261, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -94, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -225, 97,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 208, -75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -14, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -134, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 91, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 44, -83, -66, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -120, -28, 38, -41, -27,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged3_joint20[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -118, 160, -125, -49, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, 30, 35, 74, -38, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 286, 99, 310, 166, -292, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 336, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 418, 16, -333, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 433, 10, -321, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 393, -164, -130, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 350, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 330, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 430, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 466, -101, 164, -116, 31, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -239, 160, -3, -49, -81,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged3_joint22[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -438,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 289, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 844, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 618, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 217, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 224,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA46, 0xFF47, 0xF8F6, 0x006F, 0x0572, 0x00A9, 0x280D, 0x0002, 0xF9C9, 0x009C, 0x066B, 0x0076, 0x2003, 0x0001, 0xF98D, 0xFFDE, 0x2003, 0x0001, 0xFA02, 0x0042, 0x2803, 0x0005, 0xF95E, 0xFFEA, 0x200D, 0x0001, 0xFAA0, 0x0068, 0x0709, 0x003F, 0x2809, 0x0005, 0x0645, 0x005D, 0x2005, 0x0003, 0xFA62, 0xFFDC, 0x2005, 0x0001, 0xFA3F, 0xFFED, 0x2805, 0x0002, 0xFA10, 0x000F, 0x2003, 0x0001, 0xF952, 0xFFEF, 0x2803, 0x0002, 0xF969, 0x0013, 0x2009, 0x0001, 0x06F7, 0xFFDE, 0x200D, 0x0001, 0xFA59, 0xFFCB, 0x0601, 0xFF78, 0x200F, 0x0001, 0xF963, 0x006E, 0xF9A5, 0xFF4F, 0x05E7, 0xFFB9, 0x200F, 0x0001, 0xFA46, 0x00E3, 0xF8F6, 0xFF52, 0x0572, 0xFF8C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
