/* AnimJoint data for relocData file 454 (FTYoshiAnimUnknown6) */
/* 4688 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimUnknown6_joint1[86];
extern u16 dFTYoshiAnimUnknown6_joint2[392];
extern u16 dFTYoshiAnimUnknown6_joint3[214];
extern u16 dFTYoshiAnimUnknown6_joint6[288];
extern u16 dFTYoshiAnimUnknown6_joint7[42];
extern u16 dFTYoshiAnimUnknown6_joint8[46];
extern u16 dFTYoshiAnimUnknown6_joint10[8];
extern u16 dFTYoshiAnimUnknown6_joint11[56];
extern u16 dFTYoshiAnimUnknown6_joint12[46];
extern u16 dFTYoshiAnimUnknown6_joint13[24];
extern u16 dFTYoshiAnimUnknown6_joint14[24];
extern u16 dFTYoshiAnimUnknown6_joint15[136];
extern u16 dFTYoshiAnimUnknown6_joint17[156];
extern u16 dFTYoshiAnimUnknown6_joint18[178];
extern u16 dFTYoshiAnimUnknown6_joint20[72];
extern u16 dFTYoshiAnimUnknown6_joint22[192];
extern u16 dFTYoshiAnimUnknown6_joint23[128];
extern u16 dFTYoshiAnimUnknown6_joint25[56];
extern u16 dFTYoshiAnimUnknown6_joint26[148];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimUnknown6_joints[] = {
	(u32)dFTYoshiAnimUnknown6_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimUnknown6_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimUnknown6_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimUnknown6_joint6, /* [3] joint 6 */
	0x00000000, /* [4] NULL */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimUnknown6_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimUnknown6_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimUnknown6_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimUnknown6_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimUnknown6_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimUnknown6_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimUnknown6_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimUnknown6_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimUnknown6_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimUnknown6_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimUnknown6_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimUnknown6_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimUnknown6_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimUnknown6_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimUnknown6_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimUnknown6_joint1[86] = {
	ftAnimSetValAfter(FT_ANIM_ROTY), 1608,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 10800, 9599,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 38, 0, -2392,
	ftAnimSetValT(FT_ANIM_TRAY, 90), -2392,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 90), 9599, -18,
	ftAnimSetValT(FT_ANIM_ROTZ, 100), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 105), 10800,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 54), -631, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -234, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), -229, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -408, -13,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 2800, -5413,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 3330, 8, -240, -2072,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -408, 415, 0, 208,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 422, 417,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 58), 422, 417,
	ftAnimBlock(0, 3),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -606,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 55), 2220, -114, -2612, -161,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 25), 10800, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 30), 10799,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimUnknown6_joint2[392] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTY), -89, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 86, 13,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY, 1), 6,
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -44, -2, 30, 13, -60, -18,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 43,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 58), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 9, 0, -53, 214, 342, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 44, -4, -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 89, -29, 240, -730,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -669,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), -44, -4, 30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 86, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 14, 0, -80, 214, 600, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 44, -4, -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 89, -29, 240, -730,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -669,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), -44, -4, 30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 86, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 14, 0, -79, 214, 600, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 44, -4, -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 89, -29, 240, -730,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -669,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), -44, -4, 30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 86, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 14, 0, -79, 214, 600, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 44, -4, -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 89, -29, 240, -730,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -669,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), -44, -4, 30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 86, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -605,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 0, 14, 0, -80, 214, 600, 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 44, -4, -30, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 89, -29, 240, -730,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -89, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -669,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), 1, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), -44, -1, 30, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, -27,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 3), 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), 0, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), -60, -605,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 77), 1, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 27), -893, -9, 0, 10, 0, -5, 214, 34,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), -2, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -327, 89, 804, 80, 327, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -37, 804, -61, 0, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -479, 2, 558, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 58), -364, 558, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 20), 0, 0, 214, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 214,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 0, 214, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimUnknown6_joint3[214] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 11, 0, -6, 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 16, 67, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 579, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -76, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 308, 12, 0, 28, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 655, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 297, -25, 0, -28, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 504, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -76, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 223, -14, 0, 28, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 416, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 193, -6, 0, -28, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 380, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -76, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 156, -11, 0, 28, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 311, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 87, -11, 0, -28, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 240, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -76, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 17, -7, 0, 28, 0, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 193, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -77, -8, 0, -28, 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 145, -76, -64,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 28, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 145, 31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 93, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 110, 33, 0, -3, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 27), 1161, -3, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 27), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 0, -116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -773,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 70, 0, 0, 0, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 280, 8, 0, 0, 192, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 58), 519, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 43), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 15), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimUnknown6_joint6[288] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -137, -3, 22, 0, 35, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 101), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -352, 0, 22, -5, 26, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, -2, -28, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -365, 0, 23, 8, 29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -137, 2, 22, 0, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -352, 0, 22, -8, 26, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, -2, -28, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -365, 0, 23, 8, 29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -137, 2, 22, 0, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -352, 0, 22, -8, 26, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, -2, -28, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -365, 0, 23, 8, 29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -137, 2, 22, 0, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -352, 0, 22, -8, 26, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, -2, -28, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -365, 0, 23, 8, 29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -137, 2, 22, 0, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -352, 0, 22, -8, 26, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -135, -2, -28, 0, -35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -365, 0, 23, 8, 29, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -137, 30, 22, 0, 35, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 27), 562, -4, 0, -18, 0, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -302, -83, -627, -66, 288, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -269, -6, -668, -10, -228, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, 222, -658, 239, -526, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, 0, -188, 7, -77, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6144, 6144, 6144,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 58), 175, -188, -77,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, -232, 4096, -251, 4096, -256,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3523, 62, 4884, -32, 3523, 62,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4554, 87, 3855, -213, 4554, 87,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3945, -62, 4239, 32, 3945, -62,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 27, 4096, -28, 4096, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4145, 4057,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4137, 4067,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4137, 4067,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimUnknown6_joint7[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 674, 0, -345, 4, -1894, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 159), 674, 0, -1894, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 55), -341, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -341, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 82), -345, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -345, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 20), -345, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 675, 0, -341, 4, -1896, -1,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimUnknown6_joint8[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -8, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 37), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 42), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTYoshiAnimUnknown6_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -625,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimUnknown6_joint11[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -975, 3, 985, 4, -2138, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 64), -972, 0, 989, 0, -2134, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -972, -1, 989, -2, -2134, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 94), -971, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 88), 985, -2, -2138, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 985, 2, -2138, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 989, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -2134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -975, -3, 985, -4, -2138, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTYoshiAnimUnknown6_joint12[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 38), -8, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -8, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 8,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTYoshiAnimUnknown6_joint13[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 1295, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -8, 0, -43, -625, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, -625,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 130), 0, 0, -625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimUnknown6_joint14[24] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -1072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1072, 25,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -670, 13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 24), -670,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 130), -670,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTYoshiAnimUnknown6_joint15[136] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), 89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -268, -47,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -241, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 89, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 27), 536, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -323, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -170, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -218, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -250, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -182, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -244, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -203, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -251, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -258,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -222,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -258,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -242,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimUnknown6_joint17[156] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -178,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 0, 4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -132, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -132, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -132, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -132, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -132, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -178, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 0, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 89, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -117, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -53, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -78, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -136, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -67, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -135, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -75, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -126, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -116,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -98,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTYoshiAnimUnknown6_joint18[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1676, 0, 1727, 0, 1883, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 90), 1727, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 89), 1676, 0, 1883, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1676, 6, 1883, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1688, -94, 1724, 721, 1758, -346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1487, -102, 3169, 732, 1189, -287,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1494, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3188, 14, 1182, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 3263, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1014, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1502, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1461, 154, 3519, 564, 855, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1811, 157, 4393, 626, 1119, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1776, -19, 4772, 264, 901, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 4731, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1773, 20, 1180, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1845, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 999, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1119, 253,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4605, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 5065, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1737, -84, 1457, 381,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1682, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4944, -61, 1883, 212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 4937, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1883, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), 1883, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1682, 0, 4937, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 1676, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 47), 4944,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1676, 0, 4944, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1883,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimUnknown6_joint20[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 687, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1041, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1084, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1103, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 743, -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 428, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 861, 336,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1003, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), 687, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 687, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTYoshiAnimUnknown6_joint22[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1433, 0, 119, 0, 2900, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -1433, 0, 119, 0, 2900, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1433, 89, 119, 61, 2900, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 535, 426,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1253, -583, 2850, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2601, -330, 2612, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1914, 309, 1097, 371, 3233, 232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1380, 174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1982, 60, 3078, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1695, -134,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3746, 224,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1627, 248,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1937, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2063, -594,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2885, -635, 3929, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3334, -184, 4482, 386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3253, -6, 1818, -79, 4703, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 4649, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1557, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3347, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3411, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3369, -78, 4619, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), 4508, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3567, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3792, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3041, 360, 1488, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3070, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -3042, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1488, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), 1488, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4508, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), 4508, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3042, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 23), -3041, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3041, 0, 1488, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4508,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTYoshiAnimUnknown6_joint23[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -34, 0, 150, 0, 286, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 90), 286, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 89), -34, 0, 150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -34, -8, 150, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -239, -16, 146, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 409, 43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -224, 99, 190, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 556, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -40, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 263, 120, 492, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 93, -61, -12, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 78, 34, 556, -3, -158, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 465, 36, 296, -137, -169, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 11, 148, -74, -169, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), 488, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 53), -169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 148, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 148, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), 148, 0,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), 488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 488, 0, 148, 0, -169, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimUnknown6_joint25[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 670, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), 670, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 397, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 318, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 747, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 726, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 49), 555, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTYoshiAnimUnknown6_joint26[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, 0, -1447, 0, -1929, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -156, 0, -1447, 0, -1929, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -156, 74, -1447, -30, -1929, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -1944, -51, -1588, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -6, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -9, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -36, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 249, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 421, -67, -1990, 130, -1534, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, -230, -1682, 249, -1760, -165,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -18, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1491, 107, -1865, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1412, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1664, 70,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 89, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -336, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1381, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1588, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1500, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -337, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 52), -336, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1500, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), -1500, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 36), -1323, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 0, -1323, 0, -1500, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
