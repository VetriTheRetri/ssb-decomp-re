/* AnimJoint data for relocData file 1394 (FTKirbyAnimEnterPipe) */
/* 1424 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimEnterPipe_joint1[24];
extern u16 dFTKirbyAnimEnterPipe_joint2[10];
extern u16 dFTKirbyAnimEnterPipe_joint3[30];
extern u16 dFTKirbyAnimEnterPipe_joint5[58];
extern u16 dFTKirbyAnimEnterPipe_joint6[168];
extern u16 dFTKirbyAnimEnterPipe_joint7[16];
extern u16 dFTKirbyAnimEnterPipe_joint9[58];
extern u16 dFTKirbyAnimEnterPipe_joint10[170];
extern u16 dFTKirbyAnimEnterPipe_joint11[16];
extern u16 dFTKirbyAnimEnterPipe_joint13[10];
extern u16 dFTKirbyAnimEnterPipe_joint14[20];
extern u16 dFTKirbyAnimEnterPipe_joint16[8];
extern u16 dFTKirbyAnimEnterPipe_joint18[18];
extern u16 dFTKirbyAnimEnterPipe_joint19[22];
extern u16 dFTKirbyAnimEnterPipe_joint21[12];
extern u16 dFTKirbyAnimEnterPipe_joint22[28];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimEnterPipe_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimEnterPipe_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimEnterPipe_joint1[24] = {
	ftAnimSetVal(FT_ANIM_TRAY), 600,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 12), -120,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 12), -120, -287,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -840,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimEnterPipe_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimEnterPipe_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -89, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -89, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), -625,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimEnterPipe_joint5[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -60, -239,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, -178, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), -178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 28), 536, -89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 0,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimEnterPipe_joint6[168] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 34, -217, -212, 0, -373,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1015, 184, -499, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -373, -600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, -541,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1447, 5,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1208, 137, -380, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -218, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1288, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1444, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1369, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -218, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -254, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1288, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1184, 39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1324, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1409, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1225, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1221, -19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1401, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1358, 32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1194, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1237, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1951, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1437, 147, -230, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -236, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1454, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1864, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1730, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -261, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1441, -13, -271, -9, -1708, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimEnterPipe_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimEnterPipe_joint9[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -60, -239,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, 178, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 0, -120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 178,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX, 28), 536, 89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 20), 0,
	ftAnimBlock(0, 12),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimEnterPipe_joint10[170] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -42, 1391, -212, -1608, -391,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2626, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1201, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2000, -601,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2811, -523,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3056, -4,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 30), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2796, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2898, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1388, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3056, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2933, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1388, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1352, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2874, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2792, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2926, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3012, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2833, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2830, 20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3002, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2964, 32,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2802, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2847, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2926, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3559, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3046, -147, 1377, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1372, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -3063, 22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3473, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3339, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1346, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3049, 14, 1337, -8, -3316, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimEnterPipe_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimEnterPipe_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimEnterPipe_joint14[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -302, 237,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), -23, -302, 237,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -302, 237,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTKirbyAnimEnterPipe_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimEnterPipe_joint18[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 1785,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1918, -1704, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 31), 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1785, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimEnterPipe_joint19[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 302, 233,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 31), 21, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), 302, 233,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 302, 233,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimEnterPipe_joint21[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimEnterPipe_joint22[28] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1785, 0, -1708, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -1298, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -1708, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 31), -1785,
	ftAnimSetValRateT(FT_ANIM_ROTY, 1), -1785, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1708,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
