/* AnimJoint data for relocData file 658 (FTFoxAnimCrouch) */
/* 1344 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCrouch_joint1[24];
extern u16 dFTFoxAnimCrouch_joint2[24];
extern u16 dFTFoxAnimCrouch_joint4[10];
extern u16 dFTFoxAnimCrouch_joint5[64];
extern u16 dFTFoxAnimCrouch_joint6[32];
extern u16 dFTFoxAnimCrouch_joint7[10];
extern u16 dFTFoxAnimCrouch_joint8[72];
extern u16 dFTFoxAnimCrouch_joint10[8];
extern u16 dFTFoxAnimCrouch_joint11[66];
extern u16 dFTFoxAnimCrouch_joint12[32];
extern u16 dFTFoxAnimCrouch_joint13[16];
extern u16 dFTFoxAnimCrouch_joint15[10];
extern u16 dFTFoxAnimCrouch_joint16[50];
extern u16 dFTFoxAnimCrouch_joint18[24];
extern u16 dFTFoxAnimCrouch_joint20[50];
extern u16 dFTFoxAnimCrouch_joint21[42];
extern u16 dFTFoxAnimCrouch_joint23[24];
extern u16 dFTFoxAnimCrouch_joint24[34];
extern u16 dFTFoxAnimCrouch_joint25[28];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimCrouch_joints[] = {
	(u32)dFTFoxAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCrouch_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimCrouch_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimCrouch_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCrouch_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCrouch_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimCrouch_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimCrouch_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimCrouch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimCrouch_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimCrouch_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimCrouch_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimCrouch_joint25, /* [24] joint 25 */
	0xFFFF0147, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimCrouch_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, -2059, -20, 192,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 48,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 58,
	ftAnimSetValRateT(FT_ANIM_TRAX, 8), -22, -81,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), 510, -171,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 483,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCrouch_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -141, -13, -338, 16,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), -3,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -267, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -113, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 101, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimCrouch_joint4[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 792, 186, 227,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCrouch_joint5[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, -271, -165, 30, 258, 403,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -499, 104, -274, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 713, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 378, -242,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -327, 191, -382, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -204, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -116, 89, 113, -127,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 171, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -149, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, 15, -157, 46, 147, -24,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCrouch_joint6[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -475,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1034, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1111, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -891, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -721, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -657, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimCrouch_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCrouch_joint8[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 203, 136, 49, -72, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 290, 194, 103, -64, -69, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 275, -52, 6, -113, -66, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, -99, -122, -124, -48, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -114, -242, -103, -8, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, -115, -328, -70, 45, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -154, -96, -383, -41, 105, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, -64, -411, -17, 156, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, 55, -418, 18, 188, -80,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimCrouch_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCrouch_joint11[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1475, 470, 1336, -115, -1271, 451,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -819, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1090, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -763, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1170, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -863, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1258, -228,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1560, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1454, -251, 1101, 29, -1821, -315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1760, -130, 1149, 2, -2191, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1715, 45, 1106, -42, -2131, 60,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCrouch_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -431,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1026, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1063, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -652, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -651, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -71,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimCrouch_joint13[16] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 178,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimCrouch_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCrouch_joint16[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 357, -223, 30, -26, -274,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -396, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 9, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -48, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -195, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -346, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -194, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 10, 18, 9, -351, -4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimCrouch_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 482,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 836, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1085, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimCrouch_joint20[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, -86, 125, -213, -56, -244,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -389, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 52, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -87, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -61, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 152, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -384, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 24, -27, 148, -3, -380, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCrouch_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -130, 137, 109, 134, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 257, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 137, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 42, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 64, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -28, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 274, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 25, 274, 0, 6, 34,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimCrouch_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 477,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 330,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 993, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1266, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1262, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimCrouch_joint24[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -9, -102, 101, -226, -288,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -107, -22, 463, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -711, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -731, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -665, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -124, -16, 436, -27, -704, -38,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCrouch_joint25[28] = {
	ftAnimSetVal(FT_ANIM_ROTX), 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 89,
	ftAnimEnd(),
	0x0000, 0x380E, 0xFF4E, 0xFF86, 0x0000, 0x200F, 0x0004, 0x00F7, 0x0019, 0x0000, 0x000C, 0x0052, 0x0017, 0x380F, 0x0004, 0x001B, 0xFFEC, 0x00BA, 0x0000,
};
