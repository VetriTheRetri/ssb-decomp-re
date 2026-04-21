/* AnimJoint data for relocData file 1835 (FTYoshiAnimTeeter) */
/* 3504 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimTeeter_joint1[26];
extern u16 dFTYoshiAnimTeeter_joint2[94];
extern u16 dFTYoshiAnimTeeter_joint3[32];
extern u16 dFTYoshiAnimTeeter_joint4[64];
extern u16 dFTYoshiAnimTeeter_joint6[20];
extern u16 dFTYoshiAnimTeeter_joint7[352];
extern u16 dFTYoshiAnimTeeter_joint10[84];
extern u16 dFTYoshiAnimTeeter_joint11[312];
extern u16 dFTYoshiAnimTeeter_joint12[24];
extern u16 dFTYoshiAnimTeeter_joint13[8];
extern u16 dFTYoshiAnimTeeter_joint14[14];
extern u16 dFTYoshiAnimTeeter_joint15[32];
extern u16 dFTYoshiAnimTeeter_joint17[32];
extern u16 dFTYoshiAnimTeeter_joint18[132];
extern u16 dFTYoshiAnimTeeter_joint20[44];
extern u16 dFTYoshiAnimTeeter_joint22[124];
extern u16 dFTYoshiAnimTeeter_joint23[136];
extern u16 dFTYoshiAnimTeeter_joint25[48];
extern u16 dFTYoshiAnimTeeter_joint26[122];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimTeeter_joints[] = {
	(u32)dFTYoshiAnimTeeter_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimTeeter_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimTeeter_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimTeeter_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimTeeter_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimTeeter_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimTeeter_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimTeeter_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimTeeter_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimTeeter_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimTeeter_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimTeeter_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimTeeter_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimTeeter_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimTeeter_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimTeeter_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimTeeter_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimTeeter_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimTeeter_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimTeeter_joint1[26] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 25, 840, -12,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 201,
	ftAnimSetValRateT(FT_ANIM_TRAX, 60), 232, 28,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 60), 578,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 40), 840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 7), 240, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 33), 0,
	ftAnimLoop(0x6800, -50),
};

/* Joint 2 */
u16 dFTYoshiAnimTeeter_joint2[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1, -89, 0, 0, -7, 35, -5, -99, -17, -177, 44,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), 27, -6, -80, 7, 300, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 35, 8, -8, 3, -296, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 392, 0, 86, 3, -29, 9,
	ftAnimBlock(0, 17),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 45), -430, -60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 8, -60, -18,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 37), 74, 5, -183, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 46, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, -3, 0, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 8, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 20), 149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0, -89, 1, 0, -1,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 35, -6, -99, 15, -177, 106,
	ftAnimLoop(0x6800, -186),
};

/* Joint 3 */
u16 dFTYoshiAnimTeeter_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 16, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 172,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 70), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 46), 654, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 16, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimTeeter_joint4[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -10, 81, 0, 0, 0, 600, 0, 390, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), -446, 7, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 100), 0, 600, 390,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 491, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 29), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), 95, -15, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 2,
	ftAnimSetValT(FT_ANIM_ROTY, 30), 81,
	ftAnimBlock(0, 20),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimTeeter_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 491, 10,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 536, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 29), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 31), 491,
	ftAnimLoop(0x6800, -36),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimTeeter_joint7[352] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3125, -74, -388, 0, 2370, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 3765, 216,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -364, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -4050, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4295, -241,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4919, 52,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3971, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 5186, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -176, -90,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4850, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4635, 752,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3345, 736,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3163, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3069, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2929, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -283, -146, 5270, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -505, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3135, -193, 5617, 282,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3315, -252, 5835, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3641, -251, -485, 13, 6195, 260,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -418, 84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4215, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6356, 141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 6898, 44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -339, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -146, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4316, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -4688, 50,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6949, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6933, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4614, 13, -152, -65, 6826, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -354, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4661, -180, 7033, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4976, -258, 7554, 391,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -5557, -244, 8085, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -317, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -302, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5823, -246, 8257, 171,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 8634, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -6332, -38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -287, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -291, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8624, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 9349, 105,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6369, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -7149, -196,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 9458, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 11362, 154,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7358, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -8401, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8604, -235,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -9129, -162,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11512, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 11711, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -9197, -115, -290, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -9646, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -406, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 11857, 145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 13470, 210,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9723, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -10588, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -10823, -217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -12108, -184,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13682, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 15095, 136,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -378, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12289, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -12673, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12776, -102, -388, -10, 15238, 142,
	ftAnimLoop(0x6800, -700),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimTeeter_joint10[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -327, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -267, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 133,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, -244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -180, 311,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimLoop(0x6800, -166),
};

/* Joint 11 */
u16 dFTYoshiAnimTeeter_joint11[312] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, 57, -1955, 13, 2762, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -2037, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1395, 145, 3855, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1533, 135, 4017, 163,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2349, 185,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 5004, 126,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2005, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -2266, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2543, 175,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 3079, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5125, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 5561, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3147, 86, 5642, 97,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3914, 232, 6420, 225,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2281, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2047, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4126, 190, 6622, 179,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 7372, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 4969, 60,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2043, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2107, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7447, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 8098, 196,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5036, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 5590, 236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5842, 235, -2108, 15, 8311, 202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 8706, 127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1936, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6062, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6125, 101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 6497, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8816, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 9715, 119,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 6532, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 7210, 137,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1965, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -2250, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 7360, 188, 9853, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 7989, 401, 10489, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 8391, 335, 10900, 340,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 9289, 117, 11725, 105,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2200, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1926, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 9403, 74, 11834, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 13322, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 10409, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 10586, 162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 11171, 156,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1949, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2281, -87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 13420, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 13663, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 11378, 488, 13883, 492,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 12148, 667, -2352, 13, 14649, 661,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -2062, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 12712, 359, 15206, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 12946, 66, 15469, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13001, 47, -1998, 53, 15558, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13040, 39, -1955, 43, 15630, 72,
	ftAnimLoop(0x6800, -620),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimTeeter_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -8,
	ftAnimLoop(0x6800, -46),
};

/* Joint 13 */
u16 dFTYoshiAnimTeeter_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 100),
	ftAnimLoop(0x6800, -14),
};

/* Joint 14 */
u16 dFTYoshiAnimTeeter_joint14[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -536, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 0, 0, 156, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 100), -536,
	ftAnimLoop(0x6800, -26),
};

/* Joint 15 */
u16 dFTYoshiAnimTeeter_joint15[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -190, 0, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -223, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 90), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 50), 89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -420, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -190, 6,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimTeeter_joint17[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -153, -2, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -285, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 80), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 50), 89, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), -491, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -153, 6,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimTeeter_joint18[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -39, 5, 25, -4, -106, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -62, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -29, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 22), 67, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 60, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), -331, -27,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -52, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 130, 16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -366, 10,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -590, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -356, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -452, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 146, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), -79, 24,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -465, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -315, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -550, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -50, 8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -54, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 24, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -269, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -140, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 4, 25, 1, -106, 33,
	ftAnimLoop(0x6800, -260),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimTeeter_joint20[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 423, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 568, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 745, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 772, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), 812, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 490, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -30,
	ftAnimLoop(0x6800, -86),
};

/* Joint 22 */
u16 dFTYoshiAnimTeeter_joint22[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1630, -6, -61, -6, -223, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -484, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 1761, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1774, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), 2001, 30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 35), -255, 22,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 18, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 304, -11,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2032, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), 2122, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 292, -12, -233, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -40, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 32, -22,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2083, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1640, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -215, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 11, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -60, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1635, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1631, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1630, -1, -61, -1, -223, -7,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimTeeter_joint23[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 52, 39, 35, -14, 2509, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 106, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 82, -3, 2131, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -3, 2157, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2425, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 116, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -95, -23,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2421, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 2161, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 47, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -13, 20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -117, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -437, 21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2165, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 2153, 5,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -414, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 58, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2161, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 2563, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 32, 2,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2559, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2527, -16,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 52, -4, 35, 3, 2509, -18,
	ftAnimLoop(0x6800, -268),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimTeeter_joint25[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 557, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 1091, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1076, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 584, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 539, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 1069, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1095, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 513, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 523, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 34,
	ftAnimLoop(0x6800, -94),
};

/* Joint 26 */
u16 dFTYoshiAnimTeeter_joint26[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1541, -42, -141, 25, -24, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -125, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -1577, -2, -21, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1580, -2, -20, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 14, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -1298, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -131, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 211, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 235, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1, -1,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -164, 8,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 347, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1284, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -1582, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -156, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -142, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 323, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 0, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1581, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1547, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, 6, -141, 1, -24, -24,
	ftAnimLoop(0x6800, -236),
	ftAnimEnd(),
	0x0000, 0x0000,
};
