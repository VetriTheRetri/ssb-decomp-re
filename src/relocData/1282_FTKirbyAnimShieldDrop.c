/* AnimJoint data for relocData file 1282 (FTKirbyAnimShieldDrop) */
/* 1936 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimShieldDrop_joint1[46];
extern u16 dFTKirbyAnimShieldDrop_joint2[22];
extern u16 dFTKirbyAnimShieldDrop_joint3[10];
extern u16 dFTKirbyAnimShieldDrop_joint4[36];
extern u16 dFTKirbyAnimShieldDrop_joint6[46];
extern u16 dFTKirbyAnimShieldDrop_joint7[136];
extern u16 dFTKirbyAnimShieldDrop_joint8[8];
extern u16 dFTKirbyAnimShieldDrop_joint10[46];
extern u16 dFTKirbyAnimShieldDrop_joint11[126];
extern u16 dFTKirbyAnimShieldDrop_joint12[16];
extern u16 dFTKirbyAnimShieldDrop_joint14[10];
extern u16 dFTKirbyAnimShieldDrop_joint15[74];
extern u16 dFTKirbyAnimShieldDrop_joint17[14];
extern u16 dFTKirbyAnimShieldDrop_joint19[120];
extern u16 dFTKirbyAnimShieldDrop_joint20[74];
extern u16 dFTKirbyAnimShieldDrop_joint22[14];
extern u16 dFTKirbyAnimShieldDrop_joint23[124];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimShieldDrop_joints[] = {
	(u32)dFTKirbyAnimShieldDrop_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimShieldDrop_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimShieldDrop_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimShieldDrop_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimShieldDrop_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimShieldDrop_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimShieldDrop_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimShieldDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimShieldDrop_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimShieldDrop_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimShieldDrop_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimShieldDrop_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimShieldDrop_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimShieldDrop_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimShieldDrop_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimShieldDrop_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTKirbyAnimShieldDrop_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTKirbyAnimShieldDrop_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4915, 2048, 4915,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, -573, 2457, 819, 4096, -573,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2048, -409, 6144, 737, 2048, -409,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 2048, 573, 6144, -819, 2048, 573,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4915, 409, 2048, -409, 4915, 409,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimShieldDrop_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimShieldDrop_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTKirbyAnimShieldDrop_joint4[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 312, 28,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 15), 312,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 268, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 5), 268, 312,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimShieldDrop_joint6[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 268, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 18), -120, -120,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 268, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimShieldDrop_joint7[136] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX), 2412, -1608, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY), -1369, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 2412, 0, -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1413, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1387, 232,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2411, 499, -948, 284, -1607, -497,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3411, 635, -818, 30, -2603, -628,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1093, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3682, 164, -2864, -150,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3788, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2837, 18,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1108, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1192, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3785, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3911, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2823, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -3107, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4090, 187, -3289, -162,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4490, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3522, 20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1229, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1035, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4398, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4301, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4257, -44, -995, 39, -3504, 17,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimShieldDrop_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimShieldDrop_joint10[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -268, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, -120,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 18), 120, -120,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -268, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimShieldDrop_joint11[126] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX), -2412, -1608, 4096,
	ftAnimSetValRate(FT_ANIM_ROTY), 1365, 9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2412, 0, -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1409, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1391, -232,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 5), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2411, -442, 945, -286, -1607, -439,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3296, -628, 818, -29, -2488, -622,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1093, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3669, -220, -2851, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3779, -25, -2892, 19,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 15), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3788, -1, 1108, 6, -2860, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1195, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -3912, -152, -3109, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4090, -186, -3289, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4493, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3518, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1231, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1038, -58,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4398, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4298, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4253, 44, 998, -39, -3500, 17,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimShieldDrop_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimShieldDrop_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 25),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimShieldDrop_joint15[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 1845,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -1695, 0, -1305, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1330, 129,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1702, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1644, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1807, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1199, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -1288, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1587, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1845, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1849, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1469, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1330, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1311, 19, -1307, -1, 1842, -7,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimShieldDrop_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimShieldDrop_joint19[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1945, 0, 1723, 0, -1701, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1702, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1911, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1738, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -882, 99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1884, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1953, -92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1713, -17, -824, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1154, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1605, -83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2051, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1872, 85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1272, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1803, 31, 1518, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1919, -20,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1734, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1760, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1930, -11, 1766, 6, -1259, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimShieldDrop_joint20[74] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1693, 0, 1305, 0, 1841, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1328, -128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 1307, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1698, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1640, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1802, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1199, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1288, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1461, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1585, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1841, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1846, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1467, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1328, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1313, -15, 1305, -1, 1845, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimShieldDrop_joint22[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTKirbyAnimShieldDrop_joint23[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1271, 0, -1723, 0, -1705, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1705, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1305, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1738, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 117,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -882, 101,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1332, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1263, 92,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1713, 17, -824, 43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1154, -111,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1605, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1165, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1344, -85,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1260, -86,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1275, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1413, -31, -1518, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1297, 20,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1734, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1760, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 11, -1766, -6, -1255, 19,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
