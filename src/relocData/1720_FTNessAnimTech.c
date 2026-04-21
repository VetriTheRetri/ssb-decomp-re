/* AnimJoint data for relocData file 1720 (FTNessAnimTech) */
/* 2816 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimTech_joint1[56];
extern u16 dFTNessAnimTech_joint2[30];
extern u16 dFTNessAnimTech_joint4[42];
extern u16 dFTNessAnimTech_joint5[130];
extern u16 dFTNessAnimTech_joint6[70];
extern u16 dFTNessAnimTech_joint7[14];
extern u16 dFTNessAnimTech_joint8[54];
extern u16 dFTNessAnimTech_joint10[38];
extern u16 dFTNessAnimTech_joint11[140];
extern u16 dFTNessAnimTech_joint12[68];
extern u16 dFTNessAnimTech_joint13[42];
extern u16 dFTNessAnimTech_joint15[10];
extern u16 dFTNessAnimTech_joint16[100];
extern u16 dFTNessAnimTech_joint18[54];
extern u16 dFTNessAnimTech_joint19[106];
extern u16 dFTNessAnimTech_joint21[50];
extern u16 dFTNessAnimTech_joint22[122];
extern u16 dFTNessAnimTech_joint24[62];
extern u16 dFTNessAnimTech_joint25[118];
extern u16 dFTNessAnimTech_joint26[50];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimTech_joints[] = {
	(u32)dFTNessAnimTech_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimTech_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimTech_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimTech_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimTech_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimTech_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimTech_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimTech_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimTech_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimTech_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimTech_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimTech_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimTech_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimTech_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimTech_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimTech_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimTech_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimTech_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimTech_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimTech_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimTech_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1796, 0, 0, 780, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), -1796, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 780, 680,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 1920,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 223,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 0, 223,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 0, -6, 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1080, -224,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 10), 360, -666,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, -16, 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimTech_joint2[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -3, 0, -39, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -71, 1, -790, -17, -95, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimTech_joint4[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 20, 0, 17, 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 404, 0, -86, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 358,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimTech_joint5[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 815, -1, -50, -142, -1410, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 850, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1711, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -398, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -456, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -66, 220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -14, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -279, -126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 971, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1588, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -332, -47, -1918, -197,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -476, -35, -2403, -76,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2008, 384,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2603, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -514, 37, -2488, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -390, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2707, -118,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2662, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2976, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -409, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -270, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2832, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2809, 18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2922, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2825, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2806, -19, -261, 8, -2801, 8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimTech_joint6[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, -237,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -539, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -53, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -359, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -512, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -486, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 12,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimTech_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimTech_joint8[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -375, 0, 0, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -375, 21, 0, 3, 0, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 47, 42, 75, -2, 276, 5, 0, 0, 288, 4, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 299, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 346, -9, -43, 48, 92, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -10, 364, -32,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimTech_joint10[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -221, 139, -209, 0, 54, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -221, 139, -209, 0, 54, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -221, 10, 139, -6, -209, 9, 0, 0, 54, -20, -17, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimTech_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -869, 5, 46, 197, -1426, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1413, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -854, 4, 376, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -848, -90, 15, -174,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1215, -133, 103, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1932, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1302, -82, 197, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1508, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 532, 90,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1957, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1962, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1489, -148, -1953, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1806, -493, 642, 2, -2301, -501,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 293, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2476, -500, -2955, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3025, -188, -3357, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3182, -120, 221, -67, -3540, -158,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 202, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3462, -144, -3644, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3617, -100, -3624, 82,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3654, 15, -3384, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 395, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 523, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3632, 21, 569, 46, -3336, 48,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimTech_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -419,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -707, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -706, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -697, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -299, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -511, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimTech_joint13[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1072, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1293, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -76, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1302, -67, 0, 8, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 687, -80, 0, 3, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 90, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 54, 126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimTech_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 26),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimTech_joint16[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -135, 32, -230, -15, 45, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -160, -100, -190, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 79, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 239, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, -54, -125, 49, 141, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 207, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -382, -9, 97, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -391, 17, 115, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 16, 95, -194, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 185, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -201,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -323, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 78, 8, -251, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -330, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -381, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -318, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -35, -279, 38, -297, 25,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimTech_joint18[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 400, 94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 729, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 484, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 809, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 483, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, -87,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimTech_joint19[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1820, -21, -1597, -1, -1764, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1603, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1543, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2118, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2130, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1855, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1691, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1560, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1541, 60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1358, -70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1534, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1681, -113,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1535, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1205, -71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1430, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1671, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1801, -111, -1763, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1614, 24, -1623, 57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1319, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1600, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 11, -1620, -20, -1582, 41,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimTech_joint21[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 42, -45, -24,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 400, 12, -74, 3, 105, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 233, -12, 13, 2, -141, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 222, -35, -44, 28, 21, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -51, -41, 240, 6, 203, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -66, -10, 0, -24, 0, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimTech_joint22[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 200, -24, -3029, 14, 35, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 169, 73, -3035, -69, 284, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 228, 18, -3115, -1, 489, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 164, -12, -2843, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 658, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 698, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -76, -2811, 18, 722, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -72, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2964, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, -169,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 214, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 23, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 169, -145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -303, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2945, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -3133, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -153, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -332, -62, -408, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -237, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -277, 58, -3090, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -133, 9, -3084, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 6, -3080, 4, -210, 26,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimTech_joint24[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 438, 79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 817, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 781, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 707, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 717, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -56,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimTech_joint25[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 89, 2, -93, -6, -212, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -135, 82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 5, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 166, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 267, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 134, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 124, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 146, 6, 53, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -132, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 217, 28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 83, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3, -130,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -279, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -276, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 235, 4, -212, -180,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 110, -31, -285, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -189, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -124, 68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 3, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 86, -17, -227, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, -10, 25, 22, -202, 25,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimTech_joint26[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 384, 38, -1, 14, 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 477, -20, 168, 6, -294, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -49, 61, -13, -77, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -14, -11, 35, -5, -147, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 56, -4, 0, 0, 0, 11,
	ftAnimEnd(),
	0x0000,
};
