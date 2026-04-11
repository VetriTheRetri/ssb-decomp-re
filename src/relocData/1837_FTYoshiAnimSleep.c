/* AnimJoint data for relocData file 1837 (FTYoshiAnimSleep) */
/* 1696 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimSleep_joint2[64];
extern u16 dFTYoshiAnimSleep_joint3[40];
extern u16 dFTYoshiAnimSleep_joint4[42];
extern u16 dFTYoshiAnimSleep_joint6[32];
extern u16 dFTYoshiAnimSleep_joint7[76];
extern u16 dFTYoshiAnimSleep_joint10[30];
extern u16 dFTYoshiAnimSleep_joint11[88];
extern u16 dFTYoshiAnimSleep_joint12[32];
extern u16 dFTYoshiAnimSleep_joint13[10];
extern u16 dFTYoshiAnimSleep_joint14[20];
extern u16 dFTYoshiAnimSleep_joint15[22];
extern u16 dFTYoshiAnimSleep_joint17[22];
extern u16 dFTYoshiAnimSleep_joint18[56];
extern u16 dFTYoshiAnimSleep_joint20[32];
extern u16 dFTYoshiAnimSleep_joint22[78];
extern u16 dFTYoshiAnimSleep_joint23[58];
extern u16 dFTYoshiAnimSleep_joint25[94];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimSleep_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTYoshiAnimSleep_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimSleep_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimSleep_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimSleep_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimSleep_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimSleep_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimSleep_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimSleep_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimSleep_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimSleep_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimSleep_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimSleep_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimSleep_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimSleep_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimSleep_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimSleep_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimSleep_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0185, /* [25] END */
};

/* Joint 2 */
u16 dFTYoshiAnimSleep_joint2[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY), 134,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 39), -134,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 14,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), -242, -115,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -44, 81, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 50), 133, -51,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 25), -120, -4, 93, 15,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 61), 134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 25), -30, 33, 180, -7,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 36), 38, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 50), -242, -115,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 32), 120, 4,
	ftAnimSetValRateT(FT_ANIM_TRAX, 18), 0, -44,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 39), -134,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 14), 81, 11,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimSleep_joint3[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -157, -8, -148, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -178, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), 223, 0,
	ftAnimBlock(0, 25),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 61), -178, -4,
	ftAnimBlock(0, 25),
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -157, -8,
	ftAnimBlock(0, 36),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -148, 9,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimSleep_joint4[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 37), -178,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 24,
	ftAnimSetValRate(FT_ANIM_TRAZ), 360, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 600,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 56), 360, 6,
	ftAnimBlock(0, 13),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 63), 178,
	ftAnimBlock(0, 43),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 18), 420,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 26), 360, -5,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 37), -178,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -82),
};

/* Joint 6 */
u16 dFTYoshiAnimSleep_joint6[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 491,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 376,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 376,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 376,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 491,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 376,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 491,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimSleep_joint7[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 318, 11, -3136, 8, 307, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 57), -23, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 61), -393, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 50), -2897, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2900, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), -3154, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 256, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 298, 6,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 266, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 304, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3151, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -3139, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, 13, -3133, 5, 303, 5,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimSleep_joint10[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 33), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimSleep_joint11[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2725, -8, -316, 9, 294, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 40), -276, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -133, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 31), 3100, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3105, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 2851, -20,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), 20, 21,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -137, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), -335, 0,
	ftAnimBlock(0, 33),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 42, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 288, 10,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2831, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2731, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -318, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2725, -6, -316, 2, 294, 6,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimSleep_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 30), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimSleep_joint13[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 100,
	ftAnimBlock(0, 100),
	ftAnimLoop(0x6800, -18),
};

/* Joint 14 */
u16 dFTYoshiAnimSleep_joint14[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 156, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, -223, 107,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -1399, -165, 15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), -1072, -223, 107,
	ftAnimLoop(0x6800, -38),
};

/* Joint 15 */
u16 dFTYoshiAnimSleep_joint15[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 53), -223,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 43,
	ftAnimBlock(0, 10),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 47), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 53), -223,
	ftAnimBlock(0, 43),
	ftAnimLoop(0x6800, -42),
};

/* Joint 17 */
u16 dFTYoshiAnimSleep_joint17[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 51), -285,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 32,
	ftAnimBlock(0, 19),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 49), 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 51), -285,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -42),
};

/* Joint 18 */
u16 dFTYoshiAnimSleep_joint18[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 4, -6, -4, -18, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -249, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 87), 56, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 76), -126, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -131, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 2, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -30, 13,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 11), -1, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 5, -6, -4, -18, 12,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimSleep_joint20[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 816, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), 759, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 853, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 823, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -7,
	ftAnimLoop(0x6800, -62),
};

/* Joint 22 */
u16 dFTYoshiAnimSleep_joint22[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1600, -12, -258, -11, -554, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -588, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -415, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), 1541, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1550, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), 1708, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), -554, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -406, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), -211, -12,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1715, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1613, -13,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -223, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -247, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1600, -12, -258, -11, -554, 0,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimSleep_joint23[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 7, 3, -10, -3, 89, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -312, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 83), 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 43), 55, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), 4, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), 95, -4,
	ftAnimBlock(0, 35),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 87, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), -6, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, 3, -10, -4, 89, -5,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimSleep_joint25[94] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 739, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 82), 692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 734, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 4,
	ftAnimLoop(0x6800, -46),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1603, -11, 361, -11, -602, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), 1566, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -612, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 41), 164, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 174, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 57), 372, -11,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1566, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 38), 1696, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -559, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1678, -17, -570, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1616, -13, -600, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1603, -12, 361, -11, -602, -2,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
	0x0000, 0x0000,
};
