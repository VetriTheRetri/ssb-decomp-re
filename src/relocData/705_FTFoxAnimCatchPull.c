/* AnimJoint data for relocData file 705 (FTFoxAnimCatchPull) */
/* 768 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCatchPull_joint1[12];
extern u16 dFTFoxAnimCatchPull_joint2[12];
extern u16 dFTFoxAnimCatchPull_joint4[10];
extern u16 dFTFoxAnimCatchPull_joint5[24];
extern u16 dFTFoxAnimCatchPull_joint6[16];
extern u16 dFTFoxAnimCatchPull_joint7[10];
extern u16 dFTFoxAnimCatchPull_joint8[14];
extern u16 dFTFoxAnimCatchPull_joint10[10];
extern u16 dFTFoxAnimCatchPull_joint11[24];
extern u16 dFTFoxAnimCatchPull_joint12[16];
extern u16 dFTFoxAnimCatchPull_joint13[10];
extern u16 dFTFoxAnimCatchPull_joint15[10];
extern u16 dFTFoxAnimCatchPull_joint16[24];
extern u16 dFTFoxAnimCatchPull_joint18[16];
extern u16 dFTFoxAnimCatchPull_joint20[24];
extern u16 dFTFoxAnimCatchPull_joint21[24];
extern u16 dFTFoxAnimCatchPull_joint23[16];
extern u16 dFTFoxAnimCatchPull_joint24[24];
extern u16 dFTFoxAnimCatchPull_joint25[10];
extern u16 dFTFoxAnimCatchPull_joint26[10];
extern u16 dFTFoxAnimCatchPull_joint27[14];

/* Joint pointer table (27 entries, 108 bytes) */
AObjEvent32 * dFTFoxAnimCatchPull_joints[] = {
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint26, /* [25] joint 26 */
	(AObjEvent32 *)dFTFoxAnimCatchPull_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCatchPull_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 480,
	ftAnimSetValRate(FT_ANIM_TRAY), 840, -160,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 900, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimCatchPull_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -402,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimCatchPull_joint4[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 625,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 89, 402,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimCatchPull_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1301, -106, -1431, -22, -947, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1194, -28, -1453, 99, -863, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1244, 49, -1232, 221, -1091, -227,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimCatchPull_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -600, -344,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 50,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimCatchPull_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimCatchPull_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -134, -223, 44,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -134, 17,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimCatchPull_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimCatchPull_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2230, 107, 205, -79, 2107, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2337, 81, 125, -15, 2245, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2394, 56, 174, 48, 2388, 143,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCatchPull_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -228,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimCatchPull_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimCatchPull_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 2),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCatchPull_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -443, 109, -22, -156, 170, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 112, -179, -88, -48, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -217, 116, -199, -20, -204, -156,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimCatchPull_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 388, 164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 553, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, -126,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimCatchPull_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1504, 53, -1659, 2, -2029, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1558, 43, -1657, 7, -1945, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1592, 34, -1644, 13, -1699, 246,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCatchPull_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 287, 38, 230, -81, 380, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 325, 48, 148, -46, 264, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 383, 57, 137, -11, 56, -207,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimCatchPull_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 107, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 288,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimCatchPull_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1430, -12, -1644, 50, -1672, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1442, -70, -1593, 47, -1799, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, -128, -1549, 44, -1901, -101,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimCatchPull_joint25[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 410, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 281,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCatchPull_joint26[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -237, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 402, 0,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTFoxAnimCatchPull_joint27[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 840,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1608, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 60, 600,
	ftAnimEnd(),
};
