/* AnimJoint data for relocData file 366 (FTMarioAnimIntro) */
/* 2496 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimIntro_joint1[34];
extern u16 dFTMarioAnimIntro_joint2[60];
extern u16 dFTMarioAnimIntro_joint4[120];
extern u16 dFTMarioAnimIntro_joint5[128];
extern u16 dFTMarioAnimIntro_joint6[54];
extern u16 dFTMarioAnimIntro_joint7[16];
extern u16 dFTMarioAnimIntro_joint8[16];
extern u16 dFTMarioAnimIntro_joint10[36];
extern u16 dFTMarioAnimIntro_joint11[62];
extern u16 dFTMarioAnimIntro_joint12[40];
extern u16 dFTMarioAnimIntro_joint15[10];
extern u16 dFTMarioAnimIntro_joint16[122];
extern u16 dFTMarioAnimIntro_joint18[62];
extern u16 dFTMarioAnimIntro_joint20[98];
extern u16 dFTMarioAnimIntro_joint21[210];
extern u16 dFTMarioAnimIntro_joint23[56];
extern u16 dFTMarioAnimIntro_joint24[76];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimIntro_joints[] = {
	(u32)dFTMarioAnimIntro_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimIntro_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimIntro_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimIntro_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimIntro_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimIntro_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimIntro_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimIntro_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimIntro_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimIntro_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimIntro_joint15, /* [12] joint 15 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimIntro_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimIntro_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimIntro_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimIntro_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimIntro_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimIntro_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimIntro_joint1[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 67,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 0, -3600,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -6240,
	ftAnimSetValT(FT_ANIM_TRAZ, 15), 840,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 600, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -536, -3,
	ftAnimSetValT(FT_ANIM_ROTY, 166), -536,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_TRAY, 145), -2547, -173,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 145), 3421,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimIntro_joint2[60] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3568, 4639, 3565,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 61, 4096, -146, 4096, 92,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4483, 3732, 4488,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -46, 4096, 96, 4096, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3903, 4306, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 122), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimIntro_joint4[120] = {
	ftAnimSetVal(FT_ANIM_ROTX), -94,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -326, 272, 0, -14, -92,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -70,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -69,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -57,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -94,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 53), -94,
	ftAnimBlock(0, 43),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimIntro_joint5[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2969, -361, -474, 245, 3128, 489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3331, -426, -229, 51, 3617, 490,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3822, -207, -372, -122, 4109, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3746, 8, -473, -2, 4016, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3806, -35, -377, 54, 4094, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 4207, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -3911, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -343, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -342, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 71), -335, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4218, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 4174, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3913, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 53), -3893, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4176, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 76), 4170, 0,
	ftAnimBlock(0, 41),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3892, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 87), -3892, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -335, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 76), -339, -2,
	ftAnimBlock(0, 23),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4170, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 52), 4169, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3892, 0, -339, 0, 4169, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimIntro_joint6[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -832,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -645, 603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 318,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 58), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 39), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTMarioAnimIntro_joint7[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 170), -625, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTMarioAnimIntro_joint8[16] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 170), 127, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimIntro_joint10[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 9, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 54, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 189, 19, 64, 100, 0, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 77, 0, 402, 1, -116, 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 166), 77, 402, -116,
	ftAnimBlock(0, 156),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimIntro_joint11[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -55, 0, 256, 0, 4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 111), 4, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 159), -55, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 207, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 16), 246, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 240, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 48), 255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 256, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), 256, 0,
	ftAnimBlock(0, 31),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -55, 0, 256, 0, 4, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimIntro_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 36), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimIntro_joint15[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 625, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 20,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimIntro_joint16[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, -102, -3, 62, -247, -266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 29, -232,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 157, 279, -737, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 567, 216, -538, 171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 589, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -393, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -340, -193,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -364, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 591, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 140), 594, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -365, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -384, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -437, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -391, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -385, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 87), -362, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -393, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 119), -391, -1,
	ftAnimBlock(0, 71),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -362, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), -365, 1,
	ftAnimBlock(0, 34),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 593, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 593, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 594, 1, -361, 3, -393, -2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTMarioAnimIntro_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 840,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, 404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1038, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, -519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -308,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 42), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTMarioAnimIntro_joint20[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -260, 114, -33, -77, 436, -653,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -251, -229, -260, -219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -216, -249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -62, 252,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 770, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -604, -216, -550, -212,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -695, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -684, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -847, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -850, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 153), 770, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -695, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 151), -695, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -845, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 48), -845, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -849, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 96), -850, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -850, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -846, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -850, -3, -695, 0, 770, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimIntro_joint21[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 65, -32, 162, 102, -346, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 211, 221, -584, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 482, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 701, 151,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 534, 78, -333, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 368, -9, -513, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 515, 74, -370, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 518, 107, -367, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 799, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 706, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 732, 130, -151, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 795, 0, -71, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 794, -1, -73, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 757, -127, -124, -131,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 744, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 764, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 529, 67, -356, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 892, 153, 3, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 836, -34, -56, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 838, 41, -54, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 908, -150, 19, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 537, -90, -348, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 726, 112, -157, 114,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 783, 0, -94, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 754, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 799, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 781, -5, -97, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 682, -104, -202, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 543, -69, -342, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 544, 0, -341, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 545, 0, -340, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 116), 513, 0, -371, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 799, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 111), 799,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 513, 0, -372, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 799,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTMarioAnimIntro_joint23[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, 235,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1016, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 899, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 879, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1078, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1098, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1022, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1034, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), 1039, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 84), 1039, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1039, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimIntro_joint24[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, 29, -134, -49, 164, -99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 6, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 43, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -149, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 10, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 153), 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 10, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 152), 11, 0,
	ftAnimBlock(0, 29),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -12, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 122), -13, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, 11, 0, 43, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
