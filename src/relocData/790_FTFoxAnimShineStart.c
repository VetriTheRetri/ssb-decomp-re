/* AnimJoint data for relocData file 790 (FTFoxAnimShineStart) */
/* 832 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimShineStart_joint1[10];
extern u16 dFTFoxAnimShineStart_joint2[8];
extern u16 dFTFoxAnimShineStart_joint4[8];
extern u16 dFTFoxAnimShineStart_joint5[38];
extern u16 dFTFoxAnimShineStart_joint6[20];
extern u16 dFTFoxAnimShineStart_joint7[10];
extern u16 dFTFoxAnimShineStart_joint8[10];
extern u16 dFTFoxAnimShineStart_joint10[10];
extern u16 dFTFoxAnimShineStart_joint11[38];
extern u16 dFTFoxAnimShineStart_joint12[24];
extern u16 dFTFoxAnimShineStart_joint13[12];
extern u16 dFTFoxAnimShineStart_joint15[10];
extern u16 dFTFoxAnimShineStart_joint16[24];
extern u16 dFTFoxAnimShineStart_joint18[16];
extern u16 dFTFoxAnimShineStart_joint20[24];
extern u16 dFTFoxAnimShineStart_joint21[24];
extern u16 dFTFoxAnimShineStart_joint23[16];
extern u16 dFTFoxAnimShineStart_joint24[24];
extern u16 dFTFoxAnimShineStart_joint25[18];
extern u16 dFTFoxAnimShineStart_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimShineStart_joints[] = {
	(AObjEvent32 *)dFTFoxAnimShineStart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimShineStart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimShineStart_joint1[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, -20,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 679, -60,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimShineStart_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -338, -3,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimShineStart_joint4[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimShineStart_joint5[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 52, -165, -184, 258, -216,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -285, -331,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -30, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -350, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -265, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -219, 64, -619, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 65, -137, 81, -841, -222,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimShineStart_joint6[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -166,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -760, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -711, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -701, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimShineStart_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimShineStart_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -113, 136, -72, 0, 336, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimShineStart_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimShineStart_joint11[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, -19, 271, -57, 336, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 158, -164, 222, -348,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -199, -284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -455, -114, -113, -241, -277, -382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -427, 27, -324, -210, -541, -263,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimShineStart_joint12[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -260,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1053, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -719, 353,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -345, 374,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimShineStart_joint13[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 357,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimShineStart_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimShineStart_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -405, 23, -223, -42, -26, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -257, 52, -386, -34, -280, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -220, 36, -404, -18, -332, -51,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimShineStart_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, 114,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 800, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 858, 57,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimShineStart_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 1, 125, 0, -56, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 49, 0, 122, 0, -233, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 48, 0, 122, 0, -249, -15,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimShineStart_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -34, 137, 41, 134, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 244, 0, 282, 23, 315, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 260, 15, 290, 7, 392, 77,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimShineStart_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 389, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, -75,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimShineStart_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, 49, -102, -2, -226, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 280, 78, -160, -29, -514, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 330, 49, -182, -22, -556, -42,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimShineStart_joint25[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 442, 49, 339, 13, 140, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimShineStart_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -122,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 0, 19, 0, 13,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
