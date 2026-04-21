/* AnimJoint data for relocData file 540 (FTMarioAnimDamaged) */
/* 2144 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimDamaged_joint1[14];
extern u16 dFTMarioAnimDamaged_joint2[24];
extern u16 dFTMarioAnimDamaged_joint4[16];
extern u16 dFTMarioAnimDamaged_joint5[118];
extern u16 dFTMarioAnimDamaged_joint6[32];
extern u16 dFTMarioAnimDamaged_joint7[12];
extern u16 dFTMarioAnimDamaged_joint8[24];
extern u16 dFTMarioAnimDamaged_joint10[12];
extern u16 dFTMarioAnimDamaged_joint11[138];
extern u16 dFTMarioAnimDamaged_joint12[82];
extern u16 dFTMarioAnimDamaged_joint13[16];
extern u16 dFTMarioAnimDamaged_joint15[12];
extern u16 dFTMarioAnimDamaged_joint16[158];
extern u16 dFTMarioAnimDamaged_joint18[72];
extern u16 dFTMarioAnimDamaged_joint20[68];
extern u16 dFTMarioAnimDamaged_joint21[110];
extern u16 dFTMarioAnimDamaged_joint23[48];
extern u16 dFTMarioAnimDamaged_joint24[68];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimDamaged_joints[] = {
	(u32)dFTMarioAnimDamaged_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimDamaged_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimDamaged_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimDamaged_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimDamaged_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimDamaged_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimDamaged_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimDamaged_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimDamaged_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimDamaged_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimDamaged_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimDamaged_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimDamaged_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimDamaged_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimDamaged_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimDamaged_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimDamaged_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimDamaged_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimDamaged_joint1[14] = {
	ftAnimSetVal(FT_ANIM_ROTX), 2412,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -6, -19, 5, 360, 54,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 29), -804,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTMarioAnimDamaged_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -66, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTMarioAnimDamaged_joint4[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -356,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 75, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), -616,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -356,
	ftAnimLoop(0x6800, -30),
};

/* Joint 5 */
u16 dFTMarioAnimDamaged_joint5[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1167, 18, -1438, 15, -858, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1079, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -715, 48, -1420, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -665, 63, -1484, -83,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 114, 76, -2485, -108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1042, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1314, 65,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 182, 68, -2581, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -3217, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 313, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 366, 592,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, 803,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1973, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1987, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1976, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1761, -102,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3256, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1662, 19, -1247, 41, -3283, -170,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1967, 124, -1309, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3597, -308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3899, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2049, 81, -1438, -129, -4075, -176,
	ftAnimLoop(0x6800, -232),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimDamaged_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, -313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 345,
	ftAnimLoop(0x6800, -62),
};

/* Joint 7 */
u16 dFTMarioAnimDamaged_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimDamaged_joint8[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 341,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -34, 153, 0, 288, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 341, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 7), 341,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimDamaged_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -18,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimDamaged_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -908, -3, -84, 113, 2743, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2030, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -872, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 121, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 9, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 103, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, 66, 1978, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1713, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 235, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -850, 139, 517, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -594, 121, 641, -20, 1561, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -607, -13, 475, -101, 1124, -315,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 366, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -904, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 931, -147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 436, -119,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 335, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 329, -103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -333, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 197, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -26, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -43, -32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -412, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -908, -3, -80, -37, -474, -12,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimDamaged_joint12[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -233,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -326, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 196,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -180, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -411, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -299, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -148, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 81,
	ftAnimLoop(0x6800, -162),
};

/* Joint 13 */
u16 dFTMarioAnimDamaged_joint13[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), 625,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 5), 1350,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 1626,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 625,
	ftAnimLoop(0x6800, -30),
};

/* Joint 15 */
u16 dFTMarioAnimDamaged_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 29),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimDamaged_joint16[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -73, 77, -508, 38, -664, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -198, 18, -1128, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 102, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 38, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -177, 16, -920, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -367, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -920, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1128, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -981, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 102, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -469, -70, -773, 158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -929, -172,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -207, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 138, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1095, -128,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1095, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 125, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -54, 54,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -195, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -367, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -873, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -885, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, -121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1194, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 38, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -773, 158,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -469, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, -77, -508, -38, -664, 109,
	ftAnimLoop(0x6800, -312),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimDamaged_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 996, 27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 547, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1018, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 463, -364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 93, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 822, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1024, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 996, -27,
	ftAnimLoop(0x6800, -142),
};

/* Joint 20 */
u16 dFTMarioAnimDamaged_joint20[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 363, -20, 91, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 206,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 28), 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 183, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 18, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 261, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -77, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -73, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 18, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 183, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 343, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 363, 20, 91, 0, 206, 0,
	ftAnimLoop(0x6800, -134),
};

/* Joint 21 */
u16 dFTMarioAnimDamaged_joint21[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3063, 1, -17, 32, 147, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -3049, -15, 101, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 95, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 58, 66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3059, -6, 73, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 38, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2996, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 73, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 95, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2984, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3061, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 36, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 58, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 45, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 15, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3063, -1, -16, -31, 143, 85,
	ftAnimLoop(0x6800, -216),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimDamaged_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 207,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 663, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 663, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 207, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 652, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 207, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -199,
	ftAnimLoop(0x6800, -94),
};

/* Joint 24 */
u16 dFTMarioAnimDamaged_joint24[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -185, 2, 14, 0, 235, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 28), 235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -131, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -187, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -123, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -89, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -187, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -183, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -185, -2, 14, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 235,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
