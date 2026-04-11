/* AnimJoint data for relocData file 1100 (FTSamusAnimBombAir) */
/* 2992 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimBombAir_joint1[58];
extern u16 dFTSamusAnimBombAir_joint2[8];
extern u16 dFTSamusAnimBombAir_joint4[122];
extern u16 dFTSamusAnimBombAir_joint5[244];
extern u16 dFTSamusAnimBombAir_joint6[96];
extern u16 dFTSamusAnimBombAir_joint7[18];
extern u16 dFTSamusAnimBombAir_joint8[10];
extern u16 dFTSamusAnimBombAir_joint11[10];
extern u16 dFTSamusAnimBombAir_joint12[258];
extern u16 dFTSamusAnimBombAir_joint14[96];
extern u16 dFTSamusAnimBombAir_joint15[114];
extern u16 dFTSamusAnimBombAir_joint17[40];
extern u16 dFTSamusAnimBombAir_joint19[108];
extern u16 dFTSamusAnimBombAir_joint20[114];
extern u16 dFTSamusAnimBombAir_joint22[154];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimBombAir_joints[] = {
	(u32)dFTSamusAnimBombAir_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimBombAir_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimBombAir_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimBombAir_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimBombAir_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimBombAir_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimBombAir_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimBombAir_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimBombAir_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimBombAir_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimBombAir_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimBombAir_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimBombAir_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimBombAir_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimBombAir_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF02B3, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimBombAir_joint1[58] = {
	ftAnimSetValAfter(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 624, -240,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 46), 0,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 47), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 624, -240,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -4, 1300, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimBombAir_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 57),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimBombAir_joint4[122] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, -21, 56,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -130, 1, 93, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 247, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 402, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX), 89, 480, 4096,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, -16,
	ftAnimSetValBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAZ, 45), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 759, 336, 2662, 2662, 2662,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 187, 360, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX, 16), 3216,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 360,
	ftAnimSetValT(FT_ANIM_TRAY, 31), 360,
	ftAnimBlock(0, 14),
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 17), 3199,
	ftAnimBlock(0, 16),
	ftAnimSetValAfterBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2867, 2867, 2867,
	ftAnimSetValBlock(FT_ANIM_ROTX), 607,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 268, 3891, 3891, 3891,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 5), 396,
	ftAnimSetValAfterT(FT_ANIM_TRAZ, 1), 93,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), -130,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -29,
	ftAnimSetValRate(FT_ANIM_ROTX), 431, -3,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 240, -21, 56,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimBombAir_joint5[244] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3205, 194, -20, 75, 66, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2749, 148,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 277, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2713, 21, -172, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2541, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 86, 295,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 379, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2341, -60, 353, -134, 439, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2662, -144, 111, -82, -262, -313,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 248, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2630, 60, -186, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 281, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2387, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -312, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2399, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2603, 48,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 14, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 164, 73,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -313, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 263, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2529, 87, 235, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 2, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2658, -19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 272, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -204, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 43, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2674, 120, 49, 183, -238, 264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2416, 62, 410, 173, 324, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2548, -108, 396, -34, 104, -185,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2852, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 126, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -158, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -331, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 35, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2939, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -3183, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 133, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 41, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3205, -22, -20, -61, 66, 30,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimBombAir_joint6[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, 204,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -841, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1102, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1112, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1117, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -566, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1078, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -620, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -700, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -795, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1098, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1081, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1062, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1002, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1037, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1040, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimBombAir_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 290, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 47), 290, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimBombAir_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 57),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimBombAir_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimBlock(0, 57),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimBombAir_joint12[258] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -275, 87, 111, -176, -68, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -149, -40, -190, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -117, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -277, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -268, -59, -154, 12, -28, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -340, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -265, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -40, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -30, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -387, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -280, 48, -170, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -289, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -290, -20, -45, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 300, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -650, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -773, -93, -201, 96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -5, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -347, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 102, -74,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -53, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -295, -45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -304, 34, 32, -61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -475, -144, 55, 113,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -335, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 15, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -643, -149, 188, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 309, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -546, 100,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 7, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -129, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -5, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -454, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -304, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -146, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -381, -28, -265, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -320, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -253, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -257, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -14, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -25, -90,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -311, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -199, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -139, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -225, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 79, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -198, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -257, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -90, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, -17, 111, 32, -68, 21,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimBombAir_joint14[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, 298,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -687, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -372, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -704, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -991, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1044, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1045, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -580, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1098, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1018, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -597, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -642, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -836, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1038, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 52,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimBombAir_joint15[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 80, -51, -34, -566, -185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -998, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 112, 59, -86, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 150, 644, -227, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1400, 618, 91, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1388, -12, 112, 21, -1003, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 1308, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 106, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), -1092, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1081, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1002, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1320, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 1391, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1402, -566, 87, -100, -997, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 259, -583, -94, -107, -1255, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 235, -22, -126, -7, -1143, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 53, -29, -633, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -31, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -44, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -22, -51, -6, -566, 66,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimBombAir_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 1329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1264, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1370, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1385, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimBombAir_joint19[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, -143, 21, 28, 48, -333,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -503, -107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 190, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -148, -660,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1429, -634, -499, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), -493, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1418, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1331, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 143, -22,
	ftAnimBlock(0, 34),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1343, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -1421, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1431, 626, -501, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -168, 633, -291, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -164, 3, -363, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 15, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 10, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 113, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 34, -17,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 24, 21, -12, 48, 13,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimBombAir_joint20[114] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -68, 1569, -14, -2200, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2609, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1677, -70, 1554, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1750, -672, 1381, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3021, -629, 1701, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3010, 11, 1725, 23, -2620, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), -2902, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), 1718, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -2765, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2751, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2617, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2916, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -3013, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3023, 578, 1697, -102, -2608, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1856, 603, 1512, -104, -2867, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1816, 41, 1487, 4, -2728, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1619, 15, -2265, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1576, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1571, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 10, 1569, -1, -2200, 65,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimBombAir_joint22[154] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1255, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1258, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 1257, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1255, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1351, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1164, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -63,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFBA, 0x0068, 0x0040, 0xFFE8, 0x003B, 0xFE9A, 0x2809, 0x0002, 0xFE08, 0xFF9C, 0x2007, 0x0001, 0x0021, 0x005B, 0x0028, 0xFF9D, 0x2007, 0x0001, 0x0071, 0x02D6, 0xFF7B, 0xFF97, 0x2805, 0x0004, 0xFF15, 0xFFEA, 0x200B, 0x0001, 0x05CF, 0x02AD, 0xFE0C, 0x0005, 0x2809, 0x0026, 0xFE3A, 0xFFF9, 0x2003, 0x0001, 0x05CB, 0xFFFD, 0x2803, 0x0023, 0x05A2, 0x0007, 0x0801, 0x0002, 0x2005, 0x0001, 0xFEFE, 0xFFEA, 0x2805, 0x002A, 0xFF78, 0x001F, 0x0801, 0x0020, 0x2003, 0x0001, 0x05A9, 0x0006, 0x2803, 0x0007, 0x05CC, 0x0003, 0x0801, 0x0001, 0x2009, 0x0001, 0xFE33, 0xFFFA, 0x2009, 0x0005, 0xFE11, 0xFFFA, 0x200B, 0x0001, 0x05CF, 0xFD60, 0xFE0B, 0x0067, 0x200B, 0x0001, 0x008B, 0xFD57, 0xFEE0, 0x0042, 0x200F, 0x0001, 0x007D, 0xFFF1, 0xFF99, 0x0030, 0xFE90, 0xFFD3, 0x200F, 0x0006, 0xFFC5, 0xFFEC, 0x003E, 0x0003, 0x0023, 0x0029, 0x200F, 0x0001, 0xFFBA, 0xFFF5, 0x0040, 0x0002, 0x003B, 0x0017, 0x0000, 0x0000, 0x0000,
};
