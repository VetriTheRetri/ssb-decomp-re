/* AnimJoint data for relocData file 1081 (FTSamusAnimAttackAirF) */
/* 2368 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimAttackAirF_joint1[50];
extern u16 dFTSamusAnimAttackAirF_joint2[64];
extern u16 dFTSamusAnimAttackAirF_joint4[114];
extern u16 dFTSamusAnimAttackAirF_joint5[128];
extern u16 dFTSamusAnimAttackAirF_joint6[44];
extern u16 dFTSamusAnimAttackAirF_joint7[40];
extern u16 dFTSamusAnimAttackAirF_joint8[16];
extern u16 dFTSamusAnimAttackAirF_joint9[26];
extern u16 dFTSamusAnimAttackAirF_joint11[10];
extern u16 dFTSamusAnimAttackAirF_joint12[208];
extern u16 dFTSamusAnimAttackAirF_joint14[100];
extern u16 dFTSamusAnimAttackAirF_joint15[78];
extern u16 dFTSamusAnimAttackAirF_joint17[52];
extern u16 dFTSamusAnimAttackAirF_joint19[34];
extern u16 dFTSamusAnimAttackAirF_joint20[66];
extern u16 dFTSamusAnimAttackAirF_joint22[108];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimAttackAirF_joints[] = {
	(u32)dFTSamusAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimAttackAirF_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimAttackAirF_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimAttackAirF_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimAttackAirF_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimAttackAirF_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimAttackAirF_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimAttackAirF_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimAttackAirF_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimAttackAirF_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimAttackAirF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimAttackAirF_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimAttackAirF_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimAttackAirF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF023C, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimAttackAirF_joint1[50] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), -4,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1300, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 52), -4,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1255, -51,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1332, -89,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1357, -57,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1364, -44,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1300, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 26), 1300, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimAttackAirF_joint2[64] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -62,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 26, 14,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 26,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -17,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 53, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 53,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 89, 13,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 89,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 25), 3216,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimAttackAirF_joint4[114] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -89, -446, 0, -25, 29, -32,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -21, -38, 65,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 86, -53, 11,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 86, -53, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 549, 272,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, 509, 335,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 86, -53, 11,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 549, 272,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 549, 272,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 428, 549, 272,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 482, 509, 335,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 482, 509, 335, 86, -53, 11,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 240, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, -21, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimAttackAirF_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 11, 37, -20, -140, 66, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 222, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -432, -28, -107, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 37, -64, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -384, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 421, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 448, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 458, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 22), 564,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -388, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -408, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 564, 41, -408, 38, -204, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -374, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 833, -42, -19, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 785, -55, -50, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 103, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -5, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -323, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 55, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 69, -32, 60, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 39, -29, 63, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 11, -27, -20, -14, 66, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimAttackAirF_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 52), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -1025, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1002, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -778, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -810, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1041, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimAttackAirF_joint7[40] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), 424, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), -232, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -379, -66, -71,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -137,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 536,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimAttackAirF_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 52), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimAttackAirF_joint9[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 69, -583, -110,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 69, -583, -110,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimAttackAirF_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 52), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimAttackAirF_joint12[208] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1388, 40, 1548, -176, 1567, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2278, 444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1238, -71, 1903, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1228, -380, 2184, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 477, -430, 2122, -184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2741, 140, 366, -47, 1815, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1882, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 480, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2559, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2618, 60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 3075, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1928, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2186, 84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 484, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 511, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2255, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2393, 75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3094, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 3134, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3216, 63, 2486, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3288, 4, 2556, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 502, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 361, -103,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3317, 117, 2588, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3523, 113, 2865, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3544, 0, 274, -80, 2937, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 2883, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 2919, -189, 111, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2728, -181, 102, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2409, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -33, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2749, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2615, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2495, 77, 2711, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 3127, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2956, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -23, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 66, -6,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3153, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2996, 40, 59, -6, 3176, 22,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimAttackAirF_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -134,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 52), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1184, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1160, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, 577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -81, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -11, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -124, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -74, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -76, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -453, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -899, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -920, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -896, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -912, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -985, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimAttackAirF_joint15[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1640, -12, 1659, 2, -2174, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 1596, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), 1666, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2259, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2429, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2367, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2344, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1752, 29,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1594, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 1631, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1718, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1526, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1578, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2093, -75,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1664, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, 9, 1659, -4, -2174, -81,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimAttackAirF_joint17[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 52), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1109, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1199, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1243, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1234, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 849, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 602, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1284, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimAttackAirF_joint19[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1657,
	ftAnimSetValRate(FT_ANIM_ROTX), 1643, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), -1630,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 51), 1657, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 52), -1630,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 1655, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1653, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 1650, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 1643, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1657,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimAttackAirF_joint20[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 38, 1, -592, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 51), 0, -1, 38, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -729, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -161, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 407, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 384, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 383, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -521, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -1, 38, 0, -592, -70,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimAttackAirF_joint22[108] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 52), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 981, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 699, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 673, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 320, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 241, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 252, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 159, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 365, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 928, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 975, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1079, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 20,
	ftAnimEnd(),
	0x0000, 0x2802, 0xF972, 0xFFF7, 0x380C, 0x0608, 0xF9F3, 0x280D, 0x0033, 0x0608, 0x0000, 0xF9F3, 0x0000, 0x2003, 0x001F, 0xF9C0, 0xFFFC, 0x2003, 0x0001, 0xF9BB, 0xFFFF, 0x2003, 0x0013, 0xF97A, 0xFFF9, 0x2807, 0x0001, 0xF972, 0xFFF9, 0x0608, 0x0000, 0x3809, 0x0001, 0xF9F3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
