/* AnimJoint data for relocData file 377 (FTFoxAnimDollRevival) */
/* 3776 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimDollRevival_joint1[30];
extern u16 dFTFoxAnimDollRevival_joint2[40];
extern u16 dFTFoxAnimDollRevival_joint4[58];
extern u16 dFTFoxAnimDollRevival_joint5[180];
extern u16 dFTFoxAnimDollRevival_joint6[38];
extern u16 dFTFoxAnimDollRevival_joint7[8];
extern u16 dFTFoxAnimDollRevival_joint8[42];
extern u16 dFTFoxAnimDollRevival_joint10[10];
extern u16 dFTFoxAnimDollRevival_joint11[270];
extern u16 dFTFoxAnimDollRevival_joint12[106];
extern u16 dFTFoxAnimDollRevival_joint13[38];
extern u16 dFTFoxAnimDollRevival_joint15[10];
extern u16 dFTFoxAnimDollRevival_joint16[124];
extern u16 dFTFoxAnimDollRevival_joint18[28];
extern u16 dFTFoxAnimDollRevival_joint20[140];
extern u16 dFTFoxAnimDollRevival_joint21[178];
extern u16 dFTFoxAnimDollRevival_joint23[64];
extern u16 dFTFoxAnimDollRevival_joint24[472];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTFoxAnimDollRevival_joints[] = {
	(u32)dFTFoxAnimDollRevival_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimDollRevival_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimDollRevival_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimDollRevival_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimDollRevival_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimDollRevival_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimDollRevival_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimDollRevival_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimDollRevival_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimDollRevival_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimDollRevival_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimDollRevival_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimDollRevival_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimDollRevival_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimDollRevival_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimDollRevival_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimDollRevival_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimDollRevival_joint24, /* [23] joint 24 */
	0xFFFF0321, /* [24] END */
};

/* 4-byte alignment padding */
static u32 dFTFoxAnimDollRevival_pad[1] = { 0 };

/* Joint 1 */
u16 dFTFoxAnimDollRevival_joint1[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 7200,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -3360,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -6600,
	ftAnimSetValRateT(FT_ANIM_TRAY, 75), -3360, 447,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 75), -6600,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1679, 840,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 106,
	ftAnimSetValRateT(FT_ANIM_TRAY, 70), -95, -256,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 70), 2730,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimDollRevival_joint2[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), 0, -3, 0, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 75), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -268, -8, 804, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 91), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), -268, 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -268, 804,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimDollRevival_joint4[58] = {
	ftAnimSetVal(FT_ANIM_ROTX), 29,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 386, -108, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 85), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimDollRevival_joint5[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -942, -2, 444, 4, -1017, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 66), -1290, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 70), 462, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 44), -1459, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -1216, 37,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1263, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1057, 41,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 460, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 444, -46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1178, 104, -1017, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -426, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1007, 403, 356, -165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -304, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -371, 627,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 248, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 307, 31, -349, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -321, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 332, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -313, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), -364, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 21), -440, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 342, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 379, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 384, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 525, 14,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -454, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 36), -543, 5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 543, 21, -368, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -315, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 726, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 728, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 642, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 636, -4, -540, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 389, -26, -387, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 359, -29, -307, 7, -366, 20,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimDollRevival_joint6[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 50), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 48), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimDollRevival_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimDollRevival_joint8[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 75), 178, 0, 268, 0, 0, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 268, 2, 357, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 91), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), 268, 357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 65), 268, 357,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimDollRevival_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimDollRevival_joint11[270] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2553, 0, -68, 4, 499, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 68), 718, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 74), 2534, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 40), 23, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), -65, -3,
	ftAnimBlock(0, 27),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 693, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 535, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2553, -18, -64, 30, 500, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2497, -15, -5, 573, 608, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2521, -131, 1081, 535, 912, 854,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 600, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2233, 98, 2316, 944,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2717, 210, 2801, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2655, -54, 583, -17, 2717, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 618, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2608, -40, 2651, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2554, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2428, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2428, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2655, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2579, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 2426, -16,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2652, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2403, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 610, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 246, -28,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2367, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2245, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2415, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 2303, -4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 219, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 7, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2221, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2207, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -128, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -115, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2196, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 2190, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2298, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 2469, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2196, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2231, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -110, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 106, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 164, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 590, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2250, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 2656, 116,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2501, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 2618, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2722, 104, 625, 34, 2792, 135,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimDollRevival_joint12[106] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), -7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -570,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1148, -566,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1140, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -859, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -854, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -829, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -605, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -199, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -234, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -831, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -868, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -892, -24,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimDollRevival_joint13[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 75), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 536, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 268, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 26), 268, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 65), 268, 0,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimDollRevival_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -83, 12,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimDollRevival_joint16[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1793, 1, 52, 0, -939, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 74), 54, -4, -959, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), 2026, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2029, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 38), 2165, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2175, 39, 52, -32, -939, 74,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -499, 330,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -340, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2244, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2547, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2867, 171, -149, 262,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 42, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2891, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 2896, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -349, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -419, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 46, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 62), 31, 1,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2902, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), 2879, -9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -427, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 44), -354, 13,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 26, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2869, -9, -340, 14, 25, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimDollRevival_joint18[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 94), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTFoxAnimDollRevival_joint20[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3011, 0, 1810, 0, -542, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 58), 1693, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 75), -472, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 37), -3062, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3062, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), -3307, -15,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1692, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 1614, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3324, -63, 1599, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3434, -313, 1486, -195, -472, -135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3951, -626, 1209, -37, -742, -369,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4688, -453, 1412, 170, -1211, -254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1252, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4858, -98, 1551, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4941, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1636, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1252, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 78), -1241, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4953, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -4918, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1643, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 1567, 3,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4922, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), -4889, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1570, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 46), 1540, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4881, 8, 1534, -6, -1248, -6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimDollRevival_joint21[178] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 477, 1, 127, 0, -896, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -805, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), 1282, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), 140, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 129, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), 172, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -822, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), -636, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1294, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 35), 1213, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1201, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 852, -85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 269, 44,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -237, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 737, -176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 409, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 312, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 251, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 421, 13, -178, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -225, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 521, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 248, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 27), 44, -24,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -224, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 38), -216, -6,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 530, 8, 19, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), 498, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), 204, 49,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -132, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -163, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 476, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 448, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 414, -33, 252, 48, -184, -21,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimDollRevival_joint23[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 34), 981, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 963, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 1036, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1066, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1198, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1178, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1269, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 1162, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1150, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 32), 1220, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1259, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1251, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimDollRevival_joint24[472] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -645, -1, 242, 0, -324, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 30, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), -470, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 28), -1283, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1296, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1176, 31,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), 129, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -464, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -499, 0,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1143, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -574, 100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -498, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -376, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -240, -50,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -444, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -174, 173, -365, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -170, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -96, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -191, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -259, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -257, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -151, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -457, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -201, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -138, -6,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -255, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 52), -19, -17,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -145, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 48), -88, 18,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 29), -404, 18,
	ftAnimBlock(0, 25),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -37, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -225, -26,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -246, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 19, -252, -26, -199, 47,
	ftAnimEnd(),
	0x400E, 0x02E6, 0x0191, 0x02B4, 0x48E0, 0x0000, 0xFF82, 0xFFA0, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0003, 0x02E6, 0x0191, 0x02B4, 0x380F, 0x0003, 0x02E3, 0x0194, 0x029D, 0x380F, 0x0001, 0x02E5, 0x0192, 0x02AB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
