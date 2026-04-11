/* AnimJoint data for relocData file 1396 (FTKirbyAnimExitPipeWalk) */
/* 2288 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimExitPipeWalk_joint1[30];
extern u16 dFTKirbyAnimExitPipeWalk_joint2[22];
extern u16 dFTKirbyAnimExitPipeWalk_joint3[98];
extern u16 dFTKirbyAnimExitPipeWalk_joint5[34];
extern u16 dFTKirbyAnimExitPipeWalk_joint6[162];
extern u16 dFTKirbyAnimExitPipeWalk_joint7[38];
extern u16 dFTKirbyAnimExitPipeWalk_joint9[34];
extern u16 dFTKirbyAnimExitPipeWalk_joint10[164];
extern u16 dFTKirbyAnimExitPipeWalk_joint11[40];
extern u16 dFTKirbyAnimExitPipeWalk_joint13[18];
extern u16 dFTKirbyAnimExitPipeWalk_joint14[100];
extern u16 dFTKirbyAnimExitPipeWalk_joint16[22];
extern u16 dFTKirbyAnimExitPipeWalk_joint18[92];
extern u16 dFTKirbyAnimExitPipeWalk_joint19[100];
extern u16 dFTKirbyAnimExitPipeWalk_joint21[146];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimExitPipeWalk_joints[] = {
	(u32)dFTKirbyAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimExitPipeWalk_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimExitPipeWalk_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimExitPipeWalk_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimExitPipeWalk_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimExitPipeWalk_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimExitPipeWalk_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimExitPipeWalk_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimExitPipeWalk_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimExitPipeWalk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimExitPipeWalk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimExitPipeWalk_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimExitPipeWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01FE, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimExitPipeWalk_joint1[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 660,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -1680,
	ftAnimSetValT(FT_ANIM_TRAZ, 40), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 660,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimExitPipeWalk_joint2[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0, 0, -312,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimExitPipeWalk_joint3[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -44, -134, 44,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 312, 38, 4096, -27, 4096, 109, 4096, -27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 13, 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, -57, 4096, 40, 4096, -163, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 38, 4096, -27, 4096, 109, 4096, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -44, 134, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -13, 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 312, -57, 4096, 40, 4096, -163, 4096, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4300, 3276, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 312, 38, 4096, -27, 4096, 109, 4096, -27,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -44, -134, 44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimExitPipeWalk_joint5[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -60, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -35, -178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -357, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 35, -178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimExitPipeWalk_joint6[162] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2652, 5, -295, 0, 626, -29,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -467, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2475, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 159, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 139, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -527, -116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -819, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2490, -194, 116, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2865, -270, 421, 183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3030, -424, -860, -78, 483, 326,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1179, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3715, -341, 1074, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3714, -15, 1004, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -3815, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1070, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1093, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1605, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3863, -69, -1099, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4011, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1068, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1589, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1814, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4001, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4238, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1083, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1296, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1899, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2190, 20,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4247, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4253, -6, -1307, -10, 2205, 15,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimExitPipeWalk_joint7[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -335, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -298, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimExitPipeWalk_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 60, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 357, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -35, 178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -357, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 35, 178, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimExitPipeWalk_joint10[164] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2195, 5, 350, 15, -521, 30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2396, 85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 552, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -238, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -29, 159,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 139, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2457, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 2508, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 547, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 295, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 216, 75,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 610, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2536, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2530, -44,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, 15, 581, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 131, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 482, 48,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2492, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2417, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -154, -289,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 535, 108,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 733, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2310, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1979, -87, -567, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2134, 60, 626, -74, -500, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2115, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 356, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -560, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2139, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2184, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2186, 2, 336, -20, -554, 6,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimExitPipeWalk_joint11[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -243, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimExitPipeWalk_joint13[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -1072, 204, -120, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -536,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -804,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimExitPipeWalk_joint14[100] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1288, -6, -1375, -6, 1279, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1629, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1339, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1524, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1619, 105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 2290, -7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1666, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1848, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1351, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1320, 12,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2281, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1708, -83,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1813, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1258, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1312, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1387, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1625, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1241, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1237, 21, -1394, -7, 1218, -23,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimExitPipeWalk_joint16[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 36), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimExitPipeWalk_joint18[92] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1470, -105, 2178, -19, -1870, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1919, -13, 1840, -24, -1508, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1926, -2, 1817, -20, -1572, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1951, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1604, -46, -1614, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1559, -40, -1568, 46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1567, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 2181, 24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1951, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1727, 50,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1633, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1761, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1677, 45, -1765, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1621, -24, -1697, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1664, -42, 2198, 17, -1628, 69,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimExitPipeWalk_joint19[100] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 240, 5, 199, -5, 669, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 58, -44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 244, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 397, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, -84,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -317, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 18, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -298, 39,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 233, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 272, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -258, 32, -266, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -10, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 63, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 175, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 639, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 241, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 262, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 228, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 5, 225, -2, 649, 10,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimExitPipeWalk_joint21[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 34), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x4F00, 0x0E66, 0x1000, 0x1000, 0x200E, 0xFAFF, 0x0000, 0xFA32, 0x0004, 0xFA72, 0x0010, 0x2803, 0x0010, 0xF9D8, 0xFFC6, 0x2805, 0x0013, 0xF785, 0xFFE7, 0x2009, 0x0007, 0xF973, 0xFFC9, 0x2009, 0x0001, 0xF948, 0xFFE4, 0x2809, 0x000A, 0xF8D5, 0x0013, 0x0801, 0x0008, 0x2003, 0x0001, 0xF9A0, 0xFFD1, 0x2803, 0x0004, 0xF9EA, 0x0063, 0x0801, 0x0001, 0x2009, 0x0001, 0xF8F0, 0x0027, 0x2809, 0x0007, 0xFA4E, 0xFFD1, 0x2005, 0x0001, 0xF771, 0x0003, 0x2805, 0x0006, 0xF8D0, 0x0017, 0x0801, 0x0001, 0x2003, 0x0001, 0xFA51, 0x0058, 0x2803, 0x000C, 0xFAFB, 0x000B, 0x0801, 0x0004, 0x200D, 0x0001, 0xF8E6, 0x0014, 0xFA10, 0xFFB7, 0x2809, 0x0008, 0xF975, 0x0025, 0x2805, 0x0009, 0xF9BE, 0x002E, 0x0801, 0x0007, 0x2003, 0x0001, 0xFB06, 0x0009, 0x2803, 0x0004, 0xFB1B, 0x0006, 0x2009, 0x0001, 0xF99C, 0x002C, 0x2809, 0x0003, 0xFA24, 0x0023, 0x2005, 0x0001, 0xF9EC, 0x0029, 0x2005, 0x0002, 0xFA2E, 0x0016, 0x200F, 0x0001, 0xFB22, 0x0006, 0xFA3F, 0x0011, 0xFA3F, 0x001A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
