/* AnimJoint data for relocData file 1847 (FTYoshiAnimDamaged6) */
/* 2192 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged6_joint1[10];
extern u16 dFTYoshiAnimDamaged6_joint2[66];
extern u16 dFTYoshiAnimDamaged6_joint3[70];
extern u16 dFTYoshiAnimDamaged6_joint4[68];
extern u16 dFTYoshiAnimDamaged6_joint6[20];
extern u16 dFTYoshiAnimDamaged6_joint7[86];
extern u16 dFTYoshiAnimDamaged6_joint8[40];
extern u16 dFTYoshiAnimDamaged6_joint10[8];
extern u16 dFTYoshiAnimDamaged6_joint11[68];
extern u16 dFTYoshiAnimDamaged6_joint12[40];
extern u16 dFTYoshiAnimDamaged6_joint13[10];
extern u16 dFTYoshiAnimDamaged6_joint14[8];
extern u16 dFTYoshiAnimDamaged6_joint15[86];
extern u16 dFTYoshiAnimDamaged6_joint16[50];
extern u16 dFTYoshiAnimDamaged6_joint17[18];
extern u16 dFTYoshiAnimDamaged6_joint18[62];
extern u16 dFTYoshiAnimDamaged6_joint20[48];
extern u16 dFTYoshiAnimDamaged6_joint21[72];
extern u16 dFTYoshiAnimDamaged6_joint22[24];
extern u16 dFTYoshiAnimDamaged6_joint23[62];
extern u16 dFTYoshiAnimDamaged6_joint25[128];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamaged6_joints[] = {
	(u32)dFTYoshiAnimDamaged6_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamaged6_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamaged6_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamaged6_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamaged6_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamaged6_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamaged6_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamaged6_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamaged6_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamaged6_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamaged6_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamaged6_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamaged6_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamaged6_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDamaged6_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimDamaged6_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamaged6_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamaged6_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimDamaged6_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimDamaged6_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamaged6_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01FC, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged6_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 2,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged6_joint2[66] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_TRAZ), -135, -36,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY), -513, 0, 0, 4096,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -801, 250, -122,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -202, -462,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 4865,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 1), 5120,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), -3, 6, -21,
	ftAnimSetValT(FT_ANIM_ROTZ, 6), -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 6), -800, 8, 243, -17, -190, 41,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 2), 2925,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 6), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 465,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 63, 618,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -268, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged6_joint3[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ), 600, 334, 0, -15, 0, -68, 4096, -1098,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 172, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ, 2), 985, -31, -478, 35, -94, -3, 3235, -428,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 1168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -85, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 959, 4, -427, 7,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 2), 5482, 3208,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 6), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -175, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -44, -407, 0, 214,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -67,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged6_joint4[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 103, -319,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -204, 15,
	ftAnimSetValT(FT_ANIM_ROTZ, 2), -589,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 1), 16,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -74, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -186, -15,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -487, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -88, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 446, 232,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 66, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, 110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 0, 132,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, -95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged6_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 402, 86,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 537, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 536,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 255, -1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged6_joint7[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, -203, -308, -88, 2667, 200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2893, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -356, -59, -396, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -272, 31, -251, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -301, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -319, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2920, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2832, -33,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -286, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -272, -298, -337, -71, 2804, 223,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -522, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -883, -355, 3279, 283,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -982, -35, 3370, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -953, -279, -679, -348, 3361, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1541, -588, -1220, -541, 3924, 563,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamaged6_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -419, -381,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -800, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -823, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -877, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -986, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 257,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged6_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged6_joint11[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -18, -67, 257, 80, -842, -90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 344, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, -162, -932, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -342, -103, -1212, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -256, 10, -1144, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -272, -29, -1156, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -267, 111, -1157, 172,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 305, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 455, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -81, 100, -908, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, 14, 387, -68, -900, 7,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged6_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -324, -104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -393, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -362, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -220, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -213, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -744, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged6_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, 893, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 330, 893, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged6_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 1608, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged6_joint15[86] = {
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY), 0, 15, 0, 21, 4096, -976,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAZ), -257, 4096,
	ftAnimSetValT(FT_ANIM_ROTX, 2), 100,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY, 2), -167, -204, 28, 0, 3296, -214,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 1), 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 275,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 2), 4702, 964,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4698, 984,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 96, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 21, -3,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), -876,
	ftAnimSetValRateBlockT(FT_ANIM_SCAZ, 2), 4096, -301,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -733,
	ftAnimSetValT(FT_ANIM_SCAZ, 7), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 2), 4096, -447,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), -179, 143,
	ftAnimSetValT(FT_ANIM_SCAY, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 428, 461, 0, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 55,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDamaged6_joint16[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -227, 430, 0, -132, 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 87, 0, -170, -44, -47, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -43, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 82, -170,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -284, -85,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 117,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -17, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -278, 32,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged6_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1352,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 5426, 3615,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 6), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged6_joint18[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 51, -1, -103, 59, 164, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 95, 65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -146, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 205, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 446, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 452, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 396, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 397, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 184, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 55, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 176, 115, -61, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 326, 150, -130, 15, -233, -172,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged6_joint20[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 134, 263,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 455, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 138, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 133, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 346, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 245, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimDamaged6_joint21[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1609, 6, -102, -5, 218, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -169, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1666, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 493, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 615, -25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -157, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -121, -114,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1618, -50, 417, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1564, -151, 384, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1315, -208, -286, -253, 388, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1146, -168, -628, -341, 152, -236,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged6_joint22[24] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1124,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 3262, -689,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), 1469,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 5160, 2520,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 6), 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged6_joint23[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1745, 74, 1541, -9, -1782, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1522, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1591, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1699, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1356, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1137, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1525, 2, -1165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1501, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1109, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1605, -29, -1183, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1745, -143, -1679, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1936, -191, 1478, -23, -1843, -164,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged6_joint25[128] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 339, 300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 640, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 380, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 28, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 412, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -64,
	ftAnimEnd(),
	0x0000, 0x200E, 0x000C, 0x0057, 0x05E6, 0x00A1, 0x0784, 0xFFF3, 0x2803, 0x0003, 0x00B0, 0xFFE5, 0x200D, 0x0002, 0x06CA, 0xFFF4, 0x07B3, 0x0068, 0x200D, 0x0001, 0x066F, 0xFFCF, 0x0847, 0x006E, 0x280D, 0x0004, 0x066D, 0x000B, 0x0812, 0xFFF8, 0x2003, 0x0001, 0x0083, 0xFFEA, 0x2803, 0x0005, 0x0012, 0xFFF2, 0x0801, 0x0003, 0x200D, 0x0001, 0x067E, 0xFFA9, 0x0801, 0xFFD3, 0x2805, 0x0002, 0x054C, 0xFF99, 0x2809, 0x0003, 0x0693, 0xFFF7, 0x0801, 0x0001, 0x2003, 0x0001, 0x0010, 0x005A, 0x2007, 0x0001, 0x00C7, 0x00E2, 0x04EE, 0xFF45, 0x200F, 0x0001, 0x01D4, 0x010D, 0x03D4, 0xFEE7, 0x06E5, 0x0051, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
