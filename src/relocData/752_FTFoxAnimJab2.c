/* AnimJoint data for relocData file 752 (FTFoxAnimJab2) */
/* 2208 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJab2_joint1[34];
extern u16 dFTFoxAnimJab2_joint2[38];
extern u16 dFTFoxAnimJab2_joint4[36];
extern u16 dFTFoxAnimJab2_joint5[116];
extern u16 dFTFoxAnimJab2_joint6[40];
extern u16 dFTFoxAnimJab2_joint7[8];
extern u16 dFTFoxAnimJab2_joint8[36];
extern u16 dFTFoxAnimJab2_joint10[20];
extern u16 dFTFoxAnimJab2_joint11[176];
extern u16 dFTFoxAnimJab2_joint12[62];
extern u16 dFTFoxAnimJab2_joint13[26];
extern u16 dFTFoxAnimJab2_joint15[8];
extern u16 dFTFoxAnimJab2_joint16[116];
extern u16 dFTFoxAnimJab2_joint18[44];
extern u16 dFTFoxAnimJab2_joint20[86];
extern u16 dFTFoxAnimJab2_joint21[62];
extern u16 dFTFoxAnimJab2_joint23[32];
extern u16 dFTFoxAnimJab2_joint24[76];
extern u16 dFTFoxAnimJab2_joint25[36];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimJab2_joints[] = {
	(u32)dFTFoxAnimJab2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimJab2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimJab2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimJab2_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimJab2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimJab2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimJab2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimJab2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimJab2_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimJab2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimJab2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimJab2_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimJab2_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimJab2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimJab2_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimJab2_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimJab2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimJab2_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimJab2_joint25, /* [24] joint 25 */
	0xFFFF021E, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimJab2_joint1[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 54, 867, 702,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 42, 772, 857,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 42, 772, 857,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 867, 112, 702, -561,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 54,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimJab2_joint2[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -99, -397, -2,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 311, 4, -304, 0, -272, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 311, -4, -304, 0, -272, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -99, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -397, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimJab2_joint4[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, 113, 30,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1031, 8, 628, 11, 842, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1031, -8, 628, -10, 842, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 317, 113, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimJab2_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -659, 316, -574, 360, 402, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -343, 315, -214, 235, 358, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 104, -103, 63, 241, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -319, -104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -134, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 479, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -342, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -182, 142,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -130, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 584, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -34, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -193, 4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 573, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 268, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -177, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -116, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -151, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -164, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, 6, -165, -1, 258, -9,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimJab2_joint6[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1126, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -895, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -920, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -567, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimJab2_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 269, 0, 0,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimJab2_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 233, -73,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -340, -3, -181, -7, 122, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -340, -3, -181, -7, 122, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -122, 233, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimJab2_joint10[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 62, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimJab2_joint11[176] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1970, 169, 1608, -38, 2396, -151,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2200, 223, 4095, 1024, 4096, 1023, 4095, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2140, 365, 1569, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2700, 505, 1330, -192,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 2), 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 2), 6144, 0, 6144, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3151, 470, 1184, 15, 2693, 585,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3641, 265, 1361, 93, 3370, 350,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1364, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, -256, 4096, -256, 4096, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3683, 34, 3395, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3371, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3710, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3765, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1362, 30,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4095, 4096, 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3802, 171, 1427, -56, 3413, 185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 4479, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1249, 54, 3742, 505,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1537, 59, 4424, 510,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 5037, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 4537, 121, 1367, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 4908, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1288, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1328, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5175, 84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 5174, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4934, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4946, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4958, 11, 1336, 7, 5162, -11,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimJab2_joint12[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1153, -103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -705, 506,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -943, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -880, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -619, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 24,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimJab2_joint13[26] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 178, 357,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 357,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimJab2_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -804, 1608,
	ftAnimBlock(0, 20),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTFoxAnimJab2_joint16[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -416, -14, -325, -64, -144, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -571, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -370, 141, -390, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -147, 197, -688, -236,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -880, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 37, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -571, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -581, 28,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -690, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -149, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -382, -149, -513, 90, -397, 233,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -246, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -410, -13, -84, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -442, 64, -66, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -281, 58, -346, -41, -181, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -288, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -325, -46, -156, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -375, -39, -104, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -30, -223, 65, -26, 78,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimJab2_joint18[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 448, 83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 820, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 448, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 749, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 608, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 468, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -114,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimJab2_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, 22, 125, 50, -31, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 79, 30, 243, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -218, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -31, 136,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 101, 2, 242, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 14, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 116, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 149, 224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 71, -3, 417, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 34, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, -1, -146, -250,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 128, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -84, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 53, 6, -43, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, -6, 125, -3, -56, -12,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimJab2_joint21[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 0, 388, -33, 210, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 258, 1, 213, 0, -66, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, 0, 213, 0, -66, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 359, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 136, -50, 92, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 100, -22, 177, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 326, 43, 79, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 388, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 180, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, 28, 137, -43, 134, 54,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJab2_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 399, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 509, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 473, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 529, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 464, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -132,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimJab2_joint24[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -114, 190, 23, 28, 88, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 55, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 125, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 117, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 39, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 64, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 91, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 53, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -66, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -114, -49, 88, -48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -235, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 25, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -40, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, 56, -102, -36, -226, 8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimJab2_joint25[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -637, 415,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 555, 31, 332, -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 0, 219,
	ftAnimEnd(),
	0x4006, 0xFDA0, 0xFFC9, 0x4808, 0x0000, 0x2007, 0x000F, 0x01C7, 0x0015, 0xFF90, 0xFFFD, 0x3807, 0x0005, 0xFF4E, 0xFF86, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
