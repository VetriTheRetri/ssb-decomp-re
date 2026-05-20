/* AnimJoint data for relocData file 1320 (FTKirbyAnimShieldOn) */
/* 912 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimShieldOn_joint1[8];
extern u16 dFTKirbyAnimShieldOn_joint2[14];
extern u16 dFTKirbyAnimShieldOn_joint3[12];
extern u16 dFTKirbyAnimShieldOn_joint4[18];
extern u16 dFTKirbyAnimShieldOn_joint6[18];
extern u16 dFTKirbyAnimShieldOn_joint7[50];
extern u16 dFTKirbyAnimShieldOn_joint8[20];
extern u16 dFTKirbyAnimShieldOn_joint10[18];
extern u16 dFTKirbyAnimShieldOn_joint11[50];
extern u16 dFTKirbyAnimShieldOn_joint12[18];
extern u16 dFTKirbyAnimShieldOn_joint14[10];
extern u16 dFTKirbyAnimShieldOn_joint15[28];
extern u16 dFTKirbyAnimShieldOn_joint17[14];
extern u16 dFTKirbyAnimShieldOn_joint19[28];
extern u16 dFTKirbyAnimShieldOn_joint20[34];
extern u16 dFTKirbyAnimShieldOn_joint22[16];
extern u16 dFTKirbyAnimShieldOn_joint23[42];
extern u16 dFTKirbyAnimShieldOn_joint24[10];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTKirbyAnimShieldOn_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTKirbyAnimShieldOn_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTKirbyAnimShieldOn_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimShieldOn_joint2[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimShieldOn_joint3[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimShieldOn_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), 0, 0, 312,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 268, -446, 240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimShieldOn_joint6[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -74, 89, -59,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimShieldOn_joint7[50] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, -268, -1387, -8, -1608, -295,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2232, 267, -2380, -557,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1396, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1247, 117,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2679, 205, -1162, -81, -3019, -491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2643, -36, -1410, -248, -3363, -344,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTKirbyAnimShieldOn_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -650, -644,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimShieldOn_joint10[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, 74, 178, 59,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimShieldOn_joint11[50] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 78, 217, -20, 0, -86,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -284, -164,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 81, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -725, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -480, 218,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -288, 135, -415, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -209, 78, 179, 98, -328, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTKirbyAnimShieldOn_joint12[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -535, -528,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimShieldOn_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimShieldOn_joint15[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 20, -302, -15, 237, -71,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 121, 32, -320, 16, -173, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, 2, -302, 18, -237, -64,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimShieldOn_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimShieldOn_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -17, 1785, -18, -1704, 40,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1950, 16, 1688, -35, -1382, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1924, 25, 1659, -29, -1310, 71,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimShieldOn_joint20[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 73, 302, -18, 233, 37,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, -31, 387, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 387, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 785, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 899, 114, 177, -21, 402, 15,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimShieldOn_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTKirbyAnimShieldOn_joint23[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 24, -1785, -35, -1708, 58,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1230, -58, -1832, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1649, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1397, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1391, -117, -1698, 86, -1263, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1465, -74, -1660, 37, -1239, 24,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTKirbyAnimShieldOn_joint24[10] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
