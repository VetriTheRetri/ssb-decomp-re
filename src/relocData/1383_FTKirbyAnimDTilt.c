/* AnimJoint data for relocData file 1383 (FTKirbyAnimDTilt) */
/* 2224 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDTilt_joint1[20];
extern u16 dFTKirbyAnimDTilt_joint2[32];
extern u16 dFTKirbyAnimDTilt_joint3[20];
extern u16 dFTKirbyAnimDTilt_joint4[58];
extern u16 dFTKirbyAnimDTilt_joint6[36];
extern u16 dFTKirbyAnimDTilt_joint7[156];
extern u16 dFTKirbyAnimDTilt_joint8[14];
extern u16 dFTKirbyAnimDTilt_joint10[36];
extern u16 dFTKirbyAnimDTilt_joint11[144];
extern u16 dFTKirbyAnimDTilt_joint12[14];
extern u16 dFTKirbyAnimDTilt_joint14[10];
extern u16 dFTKirbyAnimDTilt_joint15[142];
extern u16 dFTKirbyAnimDTilt_joint17[36];
extern u16 dFTKirbyAnimDTilt_joint19[144];
extern u16 dFTKirbyAnimDTilt_joint20[78];
extern u16 dFTKirbyAnimDTilt_joint22[14];
extern u16 dFTKirbyAnimDTilt_joint23[112];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTKirbyAnimDTilt_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTKirbyAnimDTilt_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimDTilt_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAY), 2048,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 0, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 4), 3072, 127,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 12), 3072, -78,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 14), 2048,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimDTilt_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -360, -960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -360, 1919,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 360, 443,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 12), 360, -110,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 14), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimDTilt_joint3[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 14), -268,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimDTilt_joint4[58] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 240,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 178, 59, 446, 148,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 312, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 178, -119, 446, -297, 0, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -178, -27, -446, -68, 357, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 12), -178, 6, -446, 17, 357, -13, 312, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 14), 0, 0, 0, 240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDTilt_joint6[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -180, -480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), -180, -159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), -240, -36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 12), -240, 24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), -180, 137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDTilt_joint7[156] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, -440, -239, -1229, 0, -58,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2853, -157, -1468, -644,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -80, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2728, 18, -1529, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2816, 191, -1505, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2346, 246, -1315, 92, -203, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1338, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -247, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2322, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2309, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -2341, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1345, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -945, 92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -242, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2, 56,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2349, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2423, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2480, -506, 63, 504,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3437, -812, -829, -50, 1006, 758,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4105, -331, -1045, -184, 1580, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4100, 34, -1197, -120, 1602, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1371, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4035, 39, 1605, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4022, 7, 1607, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4021, 1, -1369, 2, 1608, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimDTilt_joint8[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDTilt_joint10[36] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 180, 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 2), 180, 159,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 240, 36,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 12), 240, -24,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 8), 180, -137,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDTilt_joint11[144] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -1377, 1365, 202, 1608, 1547,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -572, -698, 1568, 78, 3155, 763,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 23), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -593, 53, 1522, -48, 3136, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1357, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -466, -144, 3137, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -882, -221, 2996, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2957, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -910, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -921, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -919, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1358, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1085, -104,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2959, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 3097, 38,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -922, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -895, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 975, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 828, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -842, 738, 3149, 736,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 581, 822, 4569, 813,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 802, 135, 972, 151, 4776, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 805, -5, 1376, 34, 4824, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, 1365, -10, 4825, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimDTilt_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDTilt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDTilt_joint15[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1521, -18, -1305, 15, -1371, 29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1365, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1489, 25, -1287, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1554, 399, -1373, -491,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2289, 409, -1542, -88, -2271, -453,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1544, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2372, 63, -2279, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1956, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2149, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1545, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1464, 34,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1935, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1867, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2113, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1995, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1424, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1348, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2032, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1886, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1868, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1572, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1283, 31, -1597, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1303, -5, -1379, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1543, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1525, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1521, -4, -1305, -2, -1371, 7,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDTilt_joint17[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 21), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 434, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, -169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDTilt_joint19[144] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -336, -383, -114, -300, -92, 811,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -415, -147, 718, 449,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -840, -35,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetValT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -55, 806, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 748, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -791, 352, -526, 168,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -134, 295, -74, 224,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 8192,
	ftAnimSetValT(FT_ANIM_SCAX, 12), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -199, -45, -77, 0, 753, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 134, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 623, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -74, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -94, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -364, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX, 14), 4096,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 391, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -126, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -73, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -91, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -99, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -112, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -345, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -336, 8, -114, -2, -92, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimDTilt_joint20[78] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 84, -206, 303, 27, 233, -339,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -195, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 353, 37, -229, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 405, -64, -145, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 175, 225, -100, 455, 310,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 149, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 204, -17, 475, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 245, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 303, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 146, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 21), 91, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 86, -2, 236, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 86, 0, 302, -1, 237, 1,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDTilt_joint22[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimDTilt_joint23[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1945, 10, -1723, 39, -1705, 240,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1704, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1992, 39, -1337, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2035, 246, -1365, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2485, 237, -1960, -130, -1136, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1968, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2510, 21, -1106, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 2465, -32, -1155, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1969, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1790, 26,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2421, -54, -1197, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 1974, -16, -1666, -19,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1766, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1726, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1961, -11, -1683, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1946, -3, -1703, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1945, -1, -1723, 2, -1701, 1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
