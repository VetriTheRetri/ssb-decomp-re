/* AnimJoint data for relocData file 1252 (FTLinkAnimCatchingBoomerang) */
/* 1728 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimCatchingBoomerang_joint1[32];
extern u16 dFTLinkAnimCatchingBoomerang_joint2[38];
extern u16 dFTLinkAnimCatchingBoomerang_joint4[46];
extern u16 dFTLinkAnimCatchingBoomerang_joint5[128];
extern u16 dFTLinkAnimCatchingBoomerang_joint6[44];
extern u16 dFTLinkAnimCatchingBoomerang_joint7[66];
extern u16 dFTLinkAnimCatchingBoomerang_joint9[32];
extern u16 dFTLinkAnimCatchingBoomerang_joint10[24];
extern u16 dFTLinkAnimCatchingBoomerang_joint11[14];
extern u16 dFTLinkAnimCatchingBoomerang_joint12[8];
extern u16 dFTLinkAnimCatchingBoomerang_joint13[8];
extern u16 dFTLinkAnimCatchingBoomerang_joint16[8];
extern u16 dFTLinkAnimCatchingBoomerang_joint17[26];
extern u16 dFTLinkAnimCatchingBoomerang_joint18[26];
extern u16 dFTLinkAnimCatchingBoomerang_joint20[8];
extern u16 dFTLinkAnimCatchingBoomerang_joint21[58];
extern u16 dFTLinkAnimCatchingBoomerang_joint23[24];
extern u16 dFTLinkAnimCatchingBoomerang_joint25[72];
extern u16 dFTLinkAnimCatchingBoomerang_joint26[70];
extern u16 dFTLinkAnimCatchingBoomerang_joint28[74];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimCatchingBoomerang_joints[] = {
	(u32)dFTLinkAnimCatchingBoomerang_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimCatchingBoomerang_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimCatchingBoomerang_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimCatchingBoomerang_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimCatchingBoomerang_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimCatchingBoomerang_joint7, /* [6] joint 7 */
	(u32)dFTLinkAnimCatchingBoomerang_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimCatchingBoomerang_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimCatchingBoomerang_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimCatchingBoomerang_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimCatchingBoomerang_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimCatchingBoomerang_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimCatchingBoomerang_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimCatchingBoomerang_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimCatchingBoomerang_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimCatchingBoomerang_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimCatchingBoomerang_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimCatchingBoomerang_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimCatchingBoomerang_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimCatchingBoomerang_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	0xFFFF0197, /* [28] END */
};

/* Joint 1 */
u16 dFTLinkAnimCatchingBoomerang_joint1[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 901, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 37, 42, 818, -94, 42, 49,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 37, 0, 818, 34, 42, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), -15, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 901, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTLinkAnimCatchingBoomerang_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -107, 276, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 30, 19, -297, -82, -9, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 30, 0, -297, 0, -9, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -7, 30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -107, 276, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimCatchingBoomerang_joint4[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 373, 16, -248, -59, -197, -36,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 373, 0, -248, 0, -197, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, 57, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 171, -8, 384, 31, 47, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 259, 166, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimCatchingBoomerang_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, -229, -326, -564, -86, -722,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -14, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -891, -257, -809, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -840, 25, -829, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -802, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -891, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 50, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -809, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1258, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 64, -105, -782, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -161, -137, -470, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -210, -25, -286, 149, -1360, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 16, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -12, 145, -874, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 119, 91, -839, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 270, 122, -691, 165,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -84, -156,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -380, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 414, 40, -511, 221,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 283, -35, -100, 81,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -352, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -3, -326, 25, -86, 14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimCatchingBoomerang_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -617, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -994, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -918, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -428, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -569, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -761, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -500, 112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTLinkAnimCatchingBoomerang_joint7[66] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -417, -60, 216, 29, -152, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -417, -156, 216, -264, -152, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1987, -166, -2423, -246, 958, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1747, 50, -1751, 164, 1698, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1732, 723, -1600, 807, 1817, -759,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -300, 755, -137, 839, 180, -928,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -222, 101, 78, 48, -39, -34,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTLinkAnimCatchingBoomerang_joint9[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 804, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1608, 114, 804, 114,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 1608, 804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1608, -160, 804, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 804, -89, 1, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 804, 1,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimCatchingBoomerang_joint10[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, 0, 123, 0, -50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), 416, 0, 123, 0, -50, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 416, 0, 123, 0, -50, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimCatchingBoomerang_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), -587,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -587,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimCatchingBoomerang_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimCatchingBoomerang_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimCatchingBoomerang_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, -536, -339,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimCatchingBoomerang_joint17[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -165, -23, 465, 89, -63, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -165, 8, 465, -33, -63, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -163, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimCatchingBoomerang_joint18[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, 8, 29, -151, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 5, 0, 8, -10, -151, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, -199, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimCatchingBoomerang_joint20[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimCatchingBoomerang_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1366, -184, -1364, -179, 1717, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1717, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1182, -90, -1544, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1184, 1, -1535, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1353, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1434, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1414, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1364, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1360, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1366, 0, -1364, 0, 1717, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimCatchingBoomerang_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 146,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 392, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 387, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 253, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTLinkAnimCatchingBoomerang_joint25[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -162, -161, -377, -34, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 160, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -92, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -539, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -538, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -287, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 158, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 123, 24,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -90, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -36, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 318, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -249, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -168, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 329, 10, -161, 6, -34, 2,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimCatchingBoomerang_joint26[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1879, -459, 1338, 363, 1483, -395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, -233, 1702, 185, 1088, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1412, -4, 1710, 5, 1076, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1538, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1389, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1539, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1613, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1876, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1482, -50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1339, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1427, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1476, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1879, 2, 1338, 0, 1483, 7,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimCatchingBoomerang_joint28[74] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 133,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 555, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 428, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 424, -3,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFE55, 0x003A, 0xFFB6, 0xFFE6, 0xFFBB, 0x0008, 0x2805, 0x0009, 0xFF5C, 0xFFD8, 0x2809, 0x0013, 0xFFBA, 0x0001, 0x2003, 0x0007, 0xFE8F, 0xFFDE, 0x2003, 0x0001, 0xFE4D, 0xFFC0, 0x2803, 0x000B, 0xFE42, 0x001C, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF35, 0xFFE0, 0x2005, 0x0009, 0xFFB1, 0x000A, 0x200F, 0x0001, 0xFE55, 0x0012, 0xFFB6, 0x0005, 0xFFBB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
