/* AnimJoint data for relocData file 1421 (FTKirbyAnimStoneStartGround) */
/* 896 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimStoneStartGround_joint1[8];
extern u16 dFTKirbyAnimStoneStartGround_joint2[20];
extern u16 dFTKirbyAnimStoneStartGround_joint3[14];
extern u16 dFTKirbyAnimStoneStartGround_joint4[30];
extern u16 dFTKirbyAnimStoneStartGround_joint6[14];
extern u16 dFTKirbyAnimStoneStartGround_joint7[80];
extern u16 dFTKirbyAnimStoneStartGround_joint8[16];
extern u16 dFTKirbyAnimStoneStartGround_joint10[14];
extern u16 dFTKirbyAnimStoneStartGround_joint11[82];
extern u16 dFTKirbyAnimStoneStartGround_joint12[16];
extern u16 dFTKirbyAnimStoneStartGround_joint14[10];
extern u16 dFTKirbyAnimStoneStartGround_joint15[10];
extern u16 dFTKirbyAnimStoneStartGround_joint17[8];
extern u16 dFTKirbyAnimStoneStartGround_joint19[10];
extern u16 dFTKirbyAnimStoneStartGround_joint20[26];
extern u16 dFTKirbyAnimStoneStartGround_joint22[14];
extern u16 dFTKirbyAnimStoneStartGround_joint23[30];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimStoneStartGround_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimStoneStartGround_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimStoneStartGround_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1080, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimStoneStartGround_joint2[20] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -804, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -3216, 0, 0, 480, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -804,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimStoneStartGround_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -312, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimStoneStartGround_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -134,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimStoneStartGround_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -268, -268, -60, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimStoneStartGround_joint7[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1037, 0, -1277, 0, 1461, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1036, 37, 1459, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1333, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1379, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1161, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -983, 0, 1394, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1036, 36, 1459, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1276, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1382, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1279, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -984, 9, -1157, 30, 1396, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1017, -26, -1219, -59, 1439, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1037, -19, -1277, -57, 1461, 22,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimStoneStartGround_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimStoneStartGround_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 268, 268, 60, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimStoneStartGround_joint11[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2645, -1, 331, -3, 3070, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2645, 36, 3069, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 389, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 450, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 225, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2666, 0, 3080, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3005, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2645, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 331, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 450, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 331, -111, 3070, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 278, 51, 3080, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2667, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2658, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2645, -12, 331, 53, 3070, -10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimStoneStartGround_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimStoneStartGround_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimStoneStartGround_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -23, -302, 237, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimStoneStartGround_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimStoneStartGround_joint19[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1918, 1785, -1704, 4096, 4096, 4096,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimStoneStartGround_joint20[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 2, 302, 0, 233, 4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 23, 302, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -2, 302, 0, 233, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimStoneStartGround_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimStoneStartGround_joint23[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 0, -1785, 0, -1708, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -1298, -1785, -1704,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1298, 0, -1785, 0, -1708, -3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
