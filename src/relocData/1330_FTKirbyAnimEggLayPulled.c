/* AnimJoint data for relocData file 1330 (FTKirbyAnimEggLayPulled) */
/* 848 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEggLayPulled_joint1[14];
extern u16 dFTKirbyAnimEggLayPulled_joint2[18];
extern u16 dFTKirbyAnimEggLayPulled_joint3[16];
extern u16 dFTKirbyAnimEggLayPulled_joint4[18];
extern u16 dFTKirbyAnimEggLayPulled_joint6[14];
extern u16 dFTKirbyAnimEggLayPulled_joint7[40];
extern u16 dFTKirbyAnimEggLayPulled_joint8[14];
extern u16 dFTKirbyAnimEggLayPulled_joint10[14];
extern u16 dFTKirbyAnimEggLayPulled_joint11[42];
extern u16 dFTKirbyAnimEggLayPulled_joint12[16];
extern u16 dFTKirbyAnimEggLayPulled_joint14[10];
extern u16 dFTKirbyAnimEggLayPulled_joint15[32];
extern u16 dFTKirbyAnimEggLayPulled_joint17[14];
extern u16 dFTKirbyAnimEggLayPulled_joint19[28];
extern u16 dFTKirbyAnimEggLayPulled_joint20[34];
extern u16 dFTKirbyAnimEggLayPulled_joint22[14];
extern u16 dFTKirbyAnimEggLayPulled_joint23[40];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimEggLayPulled_joints[] = {
	(u32)dFTKirbyAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimEggLayPulled_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimEggLayPulled_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimEggLayPulled_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimEggLayPulled_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimEggLayPulled_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimEggLayPulled_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimEggLayPulled_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimEggLayPulled_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimEggLayPulled_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimEggLayPulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimEggLayPulled_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimEggLayPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimEggLayPulled_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimEggLayPulled_joint1[14] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 480, -1600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 480, 240,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimEggLayPulled_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -360,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, -480, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), -360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), -240,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimEggLayPulled_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimEggLayPulled_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -268,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimEggLayPulled_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimEggLayPulled_joint7[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX), 804, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -217, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 0, 156,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 668, -121, -315, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 312, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 560, -108, -301, 14, 639, 327,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimEggLayPulled_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimEggLayPulled_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimEggLayPulled_joint11[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX), 804, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 1391, -3, -1608, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 804, 80, -1608, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1362, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 965, 121, -1219, 319,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1048, 82, 1307, -55, -968, 250,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimEggLayPulled_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimEggLayPulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimEggLayPulled_joint15[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, -1305, 1845,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1576, 93, -1300, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1845, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2188, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, 130, -1328, -27, 2274, 85,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTKirbyAnimEggLayPulled_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimEggLayPulled_joint19[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 3040, -96,
	ftAnimSetValRate(FT_ANIM_ROTX), -309, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -251, -4, 2952, -4, -94, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -319, -68, 3031, 78, 169, 264,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimEggLayPulled_joint20[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, 0, 1305, 0, 1841, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1632, -91, 1399, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1841, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2199, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1445, -186, 1328, -71, 2274, 74,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimEggLayPulled_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimEggLayPulled_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 0, 176, 0, -99, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 244, 4, 213, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 75, 185, -28, 169, 310,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
