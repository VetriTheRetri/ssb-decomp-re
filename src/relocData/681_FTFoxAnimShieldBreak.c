/* AnimJoint data for relocData file 681 (FTFoxAnimShieldBreak) */
/* 3632 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShieldBreak_joint1[72];
extern u16 dFTFoxAnimShieldBreak_joint2[62];
extern u16 dFTFoxAnimShieldBreak_joint4[64];
extern u16 dFTFoxAnimShieldBreak_joint5[182];
extern u16 dFTFoxAnimShieldBreak_joint6[72];
extern u16 dFTFoxAnimShieldBreak_joint7[10];
extern u16 dFTFoxAnimShieldBreak_joint8[92];
extern u16 dFTFoxAnimShieldBreak_joint10[10];
extern u16 dFTFoxAnimShieldBreak_joint11[226];
extern u16 dFTFoxAnimShieldBreak_joint12[88];
extern u16 dFTFoxAnimShieldBreak_joint13[38];
extern u16 dFTFoxAnimShieldBreak_joint15[10];
extern u16 dFTFoxAnimShieldBreak_joint16[162];
extern u16 dFTFoxAnimShieldBreak_joint18[80];
extern u16 dFTFoxAnimShieldBreak_joint20[128];
extern u16 dFTFoxAnimShieldBreak_joint21[174];
extern u16 dFTFoxAnimShieldBreak_joint23[84];
extern u16 dFTFoxAnimShieldBreak_joint24[108];
extern u16 dFTFoxAnimShieldBreak_joint25[44];
extern u16 dFTFoxAnimShieldBreak_joint26[58];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimShieldBreak_joints[] = {
	(u32)dFTFoxAnimShieldBreak_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimShieldBreak_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimShieldBreak_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimShieldBreak_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimShieldBreak_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimShieldBreak_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimShieldBreak_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimShieldBreak_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimShieldBreak_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimShieldBreak_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimShieldBreak_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimShieldBreak_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimShieldBreak_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimShieldBreak_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimShieldBreak_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimShieldBreak_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimShieldBreak_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimShieldBreak_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimShieldBreak_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimShieldBreak_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimShieldBreak_joint1[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 960, 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 187, -332, 0, 199,
	ftAnimSetValBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 4, 1, 1042, 25, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 60), -6970, 3216,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 2), 22,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 19, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 22), 4, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY, 22), 1042, -14,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 50), 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 974, -28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 15), 4, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 4, 2, 974, -156, 1, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 9, 603, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimShieldBreak_joint2[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -138,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 57, 0, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 416, -18, 566, -15, 16, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 172, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 22), -223, -22, 86, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -290, -23, -322, -20,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 9, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -704, -18, -234, 0, -317, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -748, 0, 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimShieldBreak_joint4[64] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 437, -7, 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -205, -60, -221, 43, 85, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -407, 6, 612, 25, -314, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -58, 23, 328, -15, -246, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 384, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -4, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), 125, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 323, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 565, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 312, 29,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimShieldBreak_joint5[182] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1283, -381, -1084, -76, -1820, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 902, -523, -1160, 26, -1491, 443,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, -347, -1030, 18, -932, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 206, 0, -1124, -38, -951, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, 36, -1107, 21, -972, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -968, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 786, 301, -1391, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1161, 353, -1739, -329,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1830, 53, -2352, -48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1017, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -1155, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1875, -29, -2393, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1708, -17, -2136, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1737, 35, -2160, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1532, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1994, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1925, 69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1468, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1494, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1597, 87,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1165, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1236, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1515, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1997, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1689, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1402, -123,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1247, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -946, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1976, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1294, 123,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1277, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1169, -108, -964, -17, -1177, 117,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimShieldBreak_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -626, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -693, 309,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -452, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -428, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -619, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -405, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -437, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -562, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, -26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimShieldBreak_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimShieldBreak_joint8[92] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -19,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 2, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -195, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -149, -283,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 12,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -84, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 179, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 88, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 42, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -36, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 182, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 273, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -28, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 51, 9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -234, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 264, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 103, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -423, -4, 133, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 228, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimShieldBreak_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShieldBreak_joint11[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1294, -601, 1203, -749, 749, -494,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 693, -192, 453, -462, 255, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 909, 195, 278, -12, 395, 152,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 595, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1425, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 428, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 487, 62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 655, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 972, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1777, 313, 1336, 325,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2417, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2064, 96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 600, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 501, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2506, 109, 587, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 517, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3010, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2178, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 2767, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 519, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 454, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3068, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 3290, -23,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2759, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2754, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3258, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3300, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 430, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 306, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2793, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2855, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3265, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 3077, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3045, 30, 285, 25, 2835, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 407, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 3694, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3165, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3316, 150,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 3924, 15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 368, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 221, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3776, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 4077, 25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3940, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3989, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4101, 24, 282, 60, 4023, 33,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShieldBreak_joint12[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -396, -490,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -886, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -599, 439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -445, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -246, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -300, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -311, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -253, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -582, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -540, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, 157,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimShieldBreak_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 714, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 740, -11, -234, -19, 13, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 483, -26, -413, 11, 110, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 208, -11, 0, 10, 186, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 44, 0, 44,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimShieldBreak_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShieldBreak_joint16[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1404, 110, -1506, 70, 1065, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1242, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1599, -43, 1269, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1428, -126, 1631, 246,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1556, 27, 1406, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1275, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1404, -58,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1564, -7, 1374, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1665, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1420, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1465, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1428, 81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1635, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1605, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1439, 10, -1352, 56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1619, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1390, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1579, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), 1869, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1595, 27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1311, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1391, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1633, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1859, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1152, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1311, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1530, -2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1626, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1610, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1147, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1145, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -1, -1531, -1, 1145, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimShieldBreak_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 381, 228,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 637, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, -318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 554, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 671, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 676, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 650, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 286, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 439, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 465, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 563, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 863, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 816, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 699, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, -10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimShieldBreak_joint20[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 40, -9, 29, 16, 230, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 251, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 50, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -131, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -152, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -36, -26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 205, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -20, 49,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -56, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 79, -18,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 51, -2, 29, 47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -38, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 28), 392, -11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 29, -26,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -27, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 51, -20,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 64, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 375, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 118, -34,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 17, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 15, -1, 25, -7, 98, -19,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimShieldBreak_joint21[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1568, -65, 1551, 0, -2178, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1604, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1850, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2171, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2213, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1925, 151,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1627, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1212, 10,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1761, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1528, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1740, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1725, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1235, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1459, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1639, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1890, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1675, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1647, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1879, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1751, 166,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1398, -62,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1345, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1553, 174,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1205, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1575, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1433, 7,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1199, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1205, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1355, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1469, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1426, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1479, 3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1262, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1588, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1470, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 1498, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1477, 1, 1500, 1, -1585, 3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimShieldBreak_joint23[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 437, 43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 521, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 902, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 844, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 488, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 554, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 487, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 359, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 464, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 655, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 521, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 493, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 555, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 531, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 571, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 355, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimShieldBreak_joint24[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 79, 137, -14, 208, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -5, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 240, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 279, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 216, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 143, -88,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 46, 101,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -33, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 301, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 94, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -101, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -274, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 308, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 497, 1,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 14, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -8, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -284, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -152, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -150, 1, -8, 0, 498, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimShieldBreak_joint25[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 292, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -653, -93, 1, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -551, 34, 27, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 16), 101, 35, 114, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 484, 10, 171, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 396, -22, 213, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 0, 219,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimShieldBreak_joint26[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -63, 30, 0, -19, 0, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 270, -5, -172, 22, -270, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -143, 11, 356, -1, 13, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 460, 26, -195, -18, -160, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 302, 0, 42, 5, 48, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 446, 0, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
