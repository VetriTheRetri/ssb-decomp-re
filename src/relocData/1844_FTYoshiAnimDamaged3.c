/* AnimJoint data for relocData file 1844 (FTYoshiAnimDamaged3) */
/* 2128 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged3_joint1[14];
extern u16 dFTYoshiAnimDamaged3_joint2[68];
extern u16 dFTYoshiAnimDamaged3_joint3[50];
extern u16 dFTYoshiAnimDamaged3_joint4[42];
extern u16 dFTYoshiAnimDamaged3_joint6[18];
extern u16 dFTYoshiAnimDamaged3_joint7[88];
extern u16 dFTYoshiAnimDamaged3_joint8[40];
extern u16 dFTYoshiAnimDamaged3_joint10[10];
extern u16 dFTYoshiAnimDamaged3_joint11[92];
extern u16 dFTYoshiAnimDamaged3_joint12[40];
extern u16 dFTYoshiAnimDamaged3_joint13[10];
extern u16 dFTYoshiAnimDamaged3_joint14[8];
extern u16 dFTYoshiAnimDamaged3_joint15[48];
extern u16 dFTYoshiAnimDamaged3_joint17[44];
extern u16 dFTYoshiAnimDamaged3_joint18[98];
extern u16 dFTYoshiAnimDamaged3_joint20[46];
extern u16 dFTYoshiAnimDamaged3_joint22[86];
extern u16 dFTYoshiAnimDamaged3_joint23[92];
extern u16 dFTYoshiAnimDamaged3_joint25[118];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamaged3_joints[] = {
	(u32)dFTYoshiAnimDamaged3_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamaged3_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamaged3_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamaged3_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamaged3_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamaged3_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamaged3_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamaged3_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamaged3_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamaged3_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamaged3_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamaged3_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamaged3_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamaged3_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDamaged3_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamaged3_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamaged3_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDamaged3_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamaged3_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF01E9, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged3_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged3_joint2[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -45, 0, 66, 250, 148, -7, -199, -42, -641,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 436, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 68, -17,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), -182, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -139, -3,
	ftAnimSetValT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -51, 39,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 64, 128,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -89, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 30, -140, 20, 591,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged3_joint3[50] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, -89, -159, -167,
	ftAnimSetValBlock(FT_ANIM_ROTX), -124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -403, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -127, -103,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 230,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 245,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 447,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 571, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 0, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, 128,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 16, -302,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged3_joint4[42] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -152, 11,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 308, 114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -162, -35,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 15, -10,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -22, 51,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -293,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -419, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 80, 179,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 10, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged3_joint6[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 402, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 617,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -325,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged3_joint7[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, 200, -295, 42, -558, -382,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -122, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 112, 28, -940, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, -65, -588, 165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -321, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 126,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -9, 183,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -250, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -511, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -637, -294,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -711, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 161, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1, -368,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -636, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -138, 300, -437, 252, -535, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, 28, -131, 305, -352, 182,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamaged3_joint8[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -495, 110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -664, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -931, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -897, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -863, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, 99,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged3_joint10[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged3_joint11[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, -163, 26, 184, 47, -472,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 127, -88, 210, 94, -424, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -100, 214, 73, -455, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -181, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 357, 104, -826, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 422, 117, -954, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 758, 28, -640, 546,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -246, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 74, 537,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 828, 350, 649, -141, 111, 352,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 774, -91, 64, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 645, -190, -14, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 32, -268, -197, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -145, -177, -103, -123, -219, -21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged3_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -896, 39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -564, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -587, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -820, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1039, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged3_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged3_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged3_joint15[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 227, -17, -47, 3, -96, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -107, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -213, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -49, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -190, 82,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged3_joint17[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 169, -2, -39, -31, -88, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -52, -108, -103, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -17, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 75, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -361, 12, 4, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 0, -44,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -153, 107, 0, -4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged3_joint18[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -739, 261, -261, 116, -291, 267,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -51, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -478, 141, -24, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -456, -13, 340, 227,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 480, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -631, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -100, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -204, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 311, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -483, 172,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -120, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -213, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -139, 139, -61, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -238, -24, 65, 104, 136, 88,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -68, 82, 30, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 115, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -5, 63, 5, -25, -3, -138,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged3_joint20[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 764, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 197, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 134, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 403, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 596, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -295,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, 261,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged3_joint22[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1134, 22, -110, 154, 303, 89,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 223, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1112, 120, 392, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -894, 170, 628, 170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 98, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -889, -409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1590, -664,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2409, 111,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 79, -89, -204, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1996, 360, 44, 80, -329, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1607, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 43, -44, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 8, -108, -79, -135,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1619, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, 17, -83, -91, -263, -184,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged3_joint23[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1112, -128, 1728, -326, 1241, -326,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 588, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 984, -222, 1401, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 668, -250, 1363, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1151, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 482, -216, 527, -73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 674, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 510, 157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1161, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1234, 82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 681, 215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1284, 365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 766, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1320, 85, 739, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1671, 161, 1405, 143, 1153, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, -63, 1608, 203, 1454, 301,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged3_joint25[118] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 937, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 943, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 891, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1235, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 800, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -421,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0089, 0x0079, 0xF841, 0x01AA, 0x0526, 0xFFD6, 0x2805, 0x0002, 0xFB10, 0x00A0, 0x2809, 0x0006, 0x0529, 0x0008, 0x2003, 0x0001, 0x0102, 0x0091, 0x2003, 0x0001, 0x01AB, 0x0025, 0x2007, 0x0001, 0x014C, 0x0000, 0xFB2C, 0x0012, 0x2805, 0x0004, 0xFB30, 0xFFA1, 0x2003, 0x0001, 0x01AC, 0x0048, 0x2003, 0x0002, 0x019A, 0xFFE2, 0x200B, 0x0001, 0x01A0, 0x0083, 0x0515, 0xFFC7, 0x2809, 0x0002, 0x0416, 0xFFF2, 0x2007, 0x0001, 0x02A1, 0x0056, 0xFAB9, 0xFFA3, 0x2805, 0x0003, 0xFA36, 0xFFCF, 0x2003, 0x0001, 0x024E, 0xFF1C, 0x200B, 0x0001, 0x00D8, 0xFEE8, 0x049B, 0x0058, 0x200B, 0x0001, 0x001D, 0xFF95, 0x04C8, 0x0064, 0x200F, 0x0001, 0x0000, 0xFFE4, 0xFA11, 0xFFDC, 0x0563, 0x009A, 0x0000,
};
