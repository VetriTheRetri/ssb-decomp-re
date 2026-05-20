/* AnimJoint data for relocData file 1428 (FTKirbyAnimInhaleStuffed) */
/* 1248 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimInhaleStuffed_joint1[56];
extern u16 dFTKirbyAnimInhaleStuffed_joint2[12];
extern u16 dFTKirbyAnimInhaleStuffed_joint3[26];
extern u16 dFTKirbyAnimInhaleStuffed_joint4[12];
extern u16 dFTKirbyAnimInhaleStuffed_joint6[14];
extern u16 dFTKirbyAnimInhaleStuffed_joint7[72];
extern u16 dFTKirbyAnimInhaleStuffed_joint8[14];
extern u16 dFTKirbyAnimInhaleStuffed_joint10[14];
extern u16 dFTKirbyAnimInhaleStuffed_joint11[72];
extern u16 dFTKirbyAnimInhaleStuffed_joint12[16];
extern u16 dFTKirbyAnimInhaleStuffed_joint13[12];
extern u16 dFTKirbyAnimInhaleStuffed_joint15[50];
extern u16 dFTKirbyAnimInhaleStuffed_joint16[52];
extern u16 dFTKirbyAnimInhaleStuffed_joint18[24];
extern u16 dFTKirbyAnimInhaleStuffed_joint20[40];
extern u16 dFTKirbyAnimInhaleStuffed_joint21[40];
extern u16 dFTKirbyAnimInhaleStuffed_joint23[14];
extern u16 dFTKirbyAnimInhaleStuffed_joint24[36];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTKirbyAnimInhaleStuffed_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTKirbyAnimInhaleStuffed_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimInhaleStuffed_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 12, 0, 16, 4096, -6, 4096, 13, 4096, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 40), 660, -4, 3993, 3, 4300, -6, 3993, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 40), 120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 570, -11, 0, -23, 4198, 5, 3891, -10, 4198, 5,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 600, 12, 0, 16, 4096, -6, 4096, 13, 4096, -6,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimInhaleStuffed_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimInhaleStuffed_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 600, 0, 6144, 6144, 6144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), 44, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 20), -44, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), 0, 1,
	ftAnimLoop(0x6800, -50),
};

/* Joint 4 */
u16 dFTKirbyAnimInhaleStuffed_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 28, 304, 1925, 122, 4096,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimInhaleStuffed_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 89, -120, -60, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -26),
};

/* Joint 7 */
u16 dFTKirbyAnimInhaleStuffed_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -556, 1, -463, -1, 1286, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), -666, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 70), 1382, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 42), -400, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -396, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -414, -8,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -665, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -558, 5,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1375, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1287, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -420, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -463, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -554, 3, -466, -2, 1283, -3,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimInhaleStuffed_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 79), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 10 */
u16 dFTKirbyAnimInhaleStuffed_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -89, 120, -60, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -26),
};

/* Joint 11 */
u16 dFTKirbyAnimInhaleStuffed_joint11[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2165, -1, 1145, -1, 2894, -1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2457, 3276, 3276,
	ftAnimSetValRateT(FT_ANIM_ROTX, 60), 2275, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 66), 3010, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 42), 1208, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1209, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1187, -9,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2275, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 2168, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3006, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2898, -7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1178, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1147, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2163, -5, 1142, -5, 2892, -6,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimInhaleStuffed_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimInhaleStuffed_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimInhaleStuffed_joint15[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 0, 1, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 6144, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 20), 44, -1, 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 20), -44, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 600,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), 600, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), 0, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 20), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 600,
	ftAnimLoop(0x6800, -98),
};

/* Joint 16 */
u16 dFTKirbyAnimInhaleStuffed_joint16[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 1, -302, 0, 237, -2,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 64), -24, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), -302, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), 268, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 235, 3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -23, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 0, -302, 0, 237, 1,
	ftAnimLoop(0x6800, -100),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimInhaleStuffed_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimInhaleStuffed_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 0, 1785, 0, -1704, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), -1918, 0, 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 50), -1719, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1718, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -1704, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 0, 1785, 0, -1704, 0,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimInhaleStuffed_joint21[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 0, 302, 0, 233, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 79), 20, 0, 303, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 57), 244, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 231, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 0, 302, 0, 233, 1,
	ftAnimLoop(0x6800, -76),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimInhaleStuffed_joint23[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 79), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimInhaleStuffed_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 0, 176, 0, -99, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 79), 309, 0, 177, 0, -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 0, -99, 0,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
