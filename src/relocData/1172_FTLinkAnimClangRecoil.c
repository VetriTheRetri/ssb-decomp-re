/* AnimJoint data for relocData file 1172 (FTLinkAnimClangRecoil) */
/* 1456 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimClangRecoil_joint1[64];
extern u16 dFTLinkAnimClangRecoil_joint2[10];
extern u16 dFTLinkAnimClangRecoil_joint4[42];
extern u16 dFTLinkAnimClangRecoil_joint5[24];
extern u16 dFTLinkAnimClangRecoil_joint6[16];
extern u16 dFTLinkAnimClangRecoil_joint9[8];
extern u16 dFTLinkAnimClangRecoil_joint10[62];
extern u16 dFTLinkAnimClangRecoil_joint11[24];
extern u16 dFTLinkAnimClangRecoil_joint12[20];
extern u16 dFTLinkAnimClangRecoil_joint13[8];
extern u16 dFTLinkAnimClangRecoil_joint16[76];
extern u16 dFTLinkAnimClangRecoil_joint17[30];
extern u16 dFTLinkAnimClangRecoil_joint18[8];
extern u16 dFTLinkAnimClangRecoil_joint20[14];
extern u16 dFTLinkAnimClangRecoil_joint21[58];
extern u16 dFTLinkAnimClangRecoil_joint23[32];
extern u16 dFTLinkAnimClangRecoil_joint25[46];
extern u16 dFTLinkAnimClangRecoil_joint26[34];
extern u16 dFTLinkAnimClangRecoil_joint28[92];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimClangRecoil_joints[] = {
	(u32)dFTLinkAnimClangRecoil_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimClangRecoil_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimClangRecoil_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimClangRecoil_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimClangRecoil_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimClangRecoil_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimClangRecoil_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimClangRecoil_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimClangRecoil_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimClangRecoil_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimClangRecoil_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimClangRecoil_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimClangRecoil_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimClangRecoil_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimClangRecoil_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimClangRecoil_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimClangRecoil_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimClangRecoil_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimClangRecoil_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF014A, /* [28] END */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimClangRecoil_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimClangRecoil_joint1[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -164, 33, 34, -13, -11, 0, 828, -214, -632, 512,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 736, 4, -354, 259,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -48, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -19, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 765, 162,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 0, 241,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 901, 221,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimClangRecoil_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -107, 276, 0, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimClangRecoil_joint4[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 337, 33, 190, -29, 168, 24,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 473, 1, 71, -5, 266, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 266, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 166, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 470, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 259, -32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 56, -34,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimClangRecoil_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 188, 4, -181, -31, 0, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 256, 21, -321, -5, -63, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, 23, -326, -5, -86, -23,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimClangRecoil_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -360, -27,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -503, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimClangRecoil_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimClangRecoil_joint10[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -83, 108, 156, 52, 177, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 83, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 370, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 493, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 649, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 692, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 90, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -26, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 356, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 387, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 653, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 143, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 29, 123, -20, -50, -24,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimClangRecoil_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -824, -132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1067, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -714, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -587, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimClangRecoil_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -209, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 491, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 509, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 0, -66,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimClangRecoil_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimClangRecoil_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1519, 39, -231, -96, -267, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -358, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -73, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1549, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1568, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -299, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -101, -36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -379, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1596, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -103, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1608, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1572, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -405, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -536, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1697, 95, -339, -162,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimClangRecoil_joint17[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -28, 19, -44, -23, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -115, 0, -150, 1, 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -163, -2, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -114, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 0, 16,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimClangRecoil_joint18[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTLinkAnimClangRecoil_joint20[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -168, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 132, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimClangRecoil_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -436, 131, -499, 7, -9, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -227, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 187, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 160, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 160, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -204, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -246, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -268, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 100, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, -37, -244, 24, 108, 10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimClangRecoil_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 649, 28,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 438, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 376, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimClangRecoil_joint25[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 346, -38, 246, -75, -198, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 227, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -77, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -378, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -400, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -167, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 240, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 309, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 19, -161, 5, -34, 42,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimClangRecoil_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -250, 153, 154, 45, -166, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 291, -18, -177, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 128, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 238, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 32, 269, -21, -125, 52,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimClangRecoil_joint28[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 284, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 563, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 497, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -72,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFD90, 0xFFD6, 0xFEE4, 0x0047, 0x0038, 0x0086, 0x2805, 0x0004, 0xFFB8, 0xFFFC, 0x2809, 0x0008, 0xFFDF, 0xFFD9, 0x2003, 0x0002, 0xFDCF, 0x0065, 0x2003, 0x0001, 0xFE31, 0x0037, 0x2803, 0x0007, 0xFE4A, 0x000E, 0x0801, 0x0001, 0x2005, 0x0001, 0xFFB1, 0xFFFB, 0x2805, 0x000A, 0xFFB8, 0x0000, 0x0801, 0x0003, 0x2009, 0x0001, 0xFFBA, 0xFFE6, 0x2809, 0x0006, 0xFFAA, 0x000D, 0x0801, 0x0001, 0x2003, 0x0001, 0xFE5B, 0x0010, 0x2003, 0x0004, 0xFE72, 0xFFED, 0x200F, 0x0001, 0xFE55, 0xFFE3, 0xFFB6, 0xFFFF, 0xFFBB, 0x0010, 0x0000, 0x0000, 0x0000,
};
