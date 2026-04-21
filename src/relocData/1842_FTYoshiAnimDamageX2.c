/* AnimJoint data for relocData file 1842 (FTYoshiAnimDamageX2) */
/* 2768 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageX2_joint1[14];
extern u16 dFTYoshiAnimDamageX2_joint2[126];
extern u16 dFTYoshiAnimDamageX2_joint3[106];
extern u16 dFTYoshiAnimDamageX2_joint4[90];
extern u16 dFTYoshiAnimDamageX2_joint6[22];
extern u16 dFTYoshiAnimDamageX2_joint7[92];
extern u16 dFTYoshiAnimDamageX2_joint8[40];
extern u16 dFTYoshiAnimDamageX2_joint10[38];
extern u16 dFTYoshiAnimDamageX2_joint11[84];
extern u16 dFTYoshiAnimDamageX2_joint12[40];
extern u16 dFTYoshiAnimDamageX2_joint13[20];
extern u16 dFTYoshiAnimDamageX2_joint14[10];
extern u16 dFTYoshiAnimDamageX2_joint15[40];
extern u16 dFTYoshiAnimDamageX2_joint16[20];
extern u16 dFTYoshiAnimDamageX2_joint17[18];
extern u16 dFTYoshiAnimDamageX2_joint18[124];
extern u16 dFTYoshiAnimDamageX2_joint20[66];
extern u16 dFTYoshiAnimDamageX2_joint21[128];
extern u16 dFTYoshiAnimDamageX2_joint22[18];
extern u16 dFTYoshiAnimDamageX2_joint23[86];
extern u16 dFTYoshiAnimDamageX2_joint25[56];
extern u16 dFTYoshiAnimDamageX2_joint26[94];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamageX2_joints[] = {
	(u32)dFTYoshiAnimDamageX2_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamageX2_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamageX2_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamageX2_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamageX2_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamageX2_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamageX2_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamageX2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamageX2_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamageX2_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamageX2_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamageX2_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamageX2_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamageX2_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDamageX2_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimDamageX2_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamageX2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamageX2_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimDamageX2_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimDamageX2_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamageX2_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimDamageX2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageX2_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamageX2_joint2[126] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), -465, -49, 184, 20, 0, 1, -42, 8, -88, -216, -177, -1830, 4096, 1315,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -151, 13, -644, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -601, 1,
	ftAnimSetValRateT(FT_ANIM_TRAX, 9), -25, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 273, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 26, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 3), 5529,
	ftAnimSetValRateT(FT_ANIM_SCAY, 4), 4096, -1062,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), -125, -4,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), -636, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -348, 38,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAY, 17), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), -11, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), -249, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -89, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 48, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 30, 688,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -324, 1034,
	ftAnimSetValT(FT_ANIM_TRAX, 9), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 0, 31, 0, -5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 20, 42,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamageX2_joint3[106] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ), -67, 57, -59, -90, 4095, -933,
	ftAnimSetValBlock(FT_ANIM_ROTX), 460,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 8, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 3125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -169, 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 804,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -145, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 970,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 4), 4096, 806,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 860, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -167, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -48, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAZ, 17), 4095,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -95, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -99, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 559, -95,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -57, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 16, -154,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamageX2_joint4[90] = {
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 217, -250, -75, -14, -15, 100,
	ftAnimSetValBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -168, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 39, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -99, 9,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 5796, 2810,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -354, 4,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2873, 4689,
	ftAnimSetValT(FT_ANIM_SCAZ, 2), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 3644,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 27, 5,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 84, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -139, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 52, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -120, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 9), 0, 19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamageX2_joint6[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 467, 19,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, -127,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamageX2_joint7[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1, 151, -166, -158, 2505, -246,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -483, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 447, 68, 2006, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 483, 34, 1982, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 127, -229, 2365, 247,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -525, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -457, 80,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -126, -218, 2639, 240,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -515, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2974, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -376, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -188, 32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -467, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -161, 58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -157, 28, 2922, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 51, -131, 25, 2864, -57,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageX2_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -543, -52,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -506, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -383, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1135, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -883, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 118,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamageX2_joint10[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 5, 0, 3, 0, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -548, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 0, -5, 0, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -389, 5, -439, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 0, 44,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 91, 0, 105,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTYoshiAnimDamageX2_joint11[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1686, 118, -1541, -133, 1334, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 848, -67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -2046, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -1619, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1668, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1445, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 797, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1086, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2062, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1988, 47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1329, 104, 1225, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1506, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1421, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1943, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1586, 79,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1644, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1753, -109, -1505, 81, 1389, -32,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageX2_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -733, -33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -766, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -613, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -962, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1118, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamageX2_joint13[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -53,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -199, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 0, 40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDamageX2_joint14[10] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -536, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 24), -536,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimDamageX2_joint15[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_SCAY), 92, -95, 4096, -1171,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -191, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 3), 2809,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 4096, 886,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -410, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValT(FT_ANIM_SCAY, 16), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -190, 53,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimDamageX2_joint16[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 209, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -164, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -477, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -153, 93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamageX2_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1365,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 2619,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 4096, 1396,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 17), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDamageX2_joint18[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -104, -111, 56, 109, -153, 174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -422, -40, 209, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 21, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -77, -65,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -462, -46, 220, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 10, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -307, 102,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -172, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -25, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -312, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -167, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -117, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -174, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 194, 298,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -202, 71, -303, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -113, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -179, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 95, 556, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 21, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -56, 54, 344, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 50, 5, -16, -3, -348,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageX2_joint20[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 473, -466,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 380, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 450, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 750, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 833, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 826, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 897, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 617, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 233,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTYoshiAnimDamageX2_joint21[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1646, 174, 201, 44, -60, 426,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1983, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 368, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 535, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 246, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2005, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2263, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 376, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 46, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 165, -107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -307, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2220, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2089, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1880, -118, -27, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1705, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -415, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -351, 139,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1561, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1318, 161,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -523, -88, -136, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -592, 84, -114, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, 148, -355, 254, -332, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1614, 22, -83, 271, -263, 69,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamageX2_joint22[18] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1014,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 3), 3066,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 4096, 973,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 17), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDamageX2_joint23[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -55, 7, 86, 247, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 219, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -264, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 98, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 286, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 221, 4, 281, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -50, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -122, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -343, -66, -248, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -191, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -453, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -17, -542, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1, 0, -280, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -95, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -6, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 6, 0, -1, -154, 126,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageX2_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 425, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 468, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 728, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 855, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 665, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -286,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimDamageX2_joint26[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1598, 119, 183, -12, -254, 218,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1749, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 354, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 138, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1715, -32, 64, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1894, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -131, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 97, -141,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 339, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -41, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1961, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1779, -121,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -182,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -355, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1672, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, 1, -89, -47, -228, 126,
	ftAnimEnd(),
};
