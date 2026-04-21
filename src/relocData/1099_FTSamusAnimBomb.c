/* AnimJoint data for relocData file 1099 (FTSamusAnimBomb) */
/* 2672 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimBomb_joint1[56];
extern u16 dFTSamusAnimBomb_joint2[14];
extern u16 dFTSamusAnimBomb_joint4[150];
extern u16 dFTSamusAnimBomb_joint5[226];
extern u16 dFTSamusAnimBomb_joint6[84];
extern u16 dFTSamusAnimBomb_joint7[14];
extern u16 dFTSamusAnimBomb_joint8[16];
extern u16 dFTSamusAnimBomb_joint11[20];
extern u16 dFTSamusAnimBomb_joint12[160];
extern u16 dFTSamusAnimBomb_joint14[64];
extern u16 dFTSamusAnimBomb_joint15[96];
extern u16 dFTSamusAnimBomb_joint17[44];
extern u16 dFTSamusAnimBomb_joint19[104];
extern u16 dFTSamusAnimBomb_joint20[80];
extern u16 dFTSamusAnimBomb_joint22[52];
extern u16 dFTSamusAnimBomb_joint23[110];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimBomb_joints[] = {
	(u32)dFTSamusAnimBomb_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimBomb_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimBomb_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimBomb_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimBomb_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimBomb_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimBomb_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimBomb_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimBomb_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimBomb_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimBomb_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimBomb_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimBomb_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimBomb_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimBomb_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimBomb_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimBomb_joint1[56] = {
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8,
	ftAnimSetValT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 712, -218,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 65), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 8,
	ftAnimBlock(0, 2),
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 47), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 712, -218,
	ftAnimSetValAfterT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 1600, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimBomb_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 0, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 57),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimBomb_joint4[150] = {
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 8,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 11), 4096, 4096, 4096,
	_FT_ANIM_CMD(11, FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 11), -122,
	_FT_ANIM_CMD(11, FT_ANIM_TRAY, 1), 8,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 11), 82, 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 8,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimSetValRateBlock(FT_ANIM_ROTX), 247, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 431, 101,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 32, 480, 523, 0, -14,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_TRAZ, 45), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 46), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 661, 336, 2662, 2662, 2662,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 187, 360, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_ROTX, 16), 3216,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 32), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 360,
	ftAnimSetValAfterT(FT_ANIM_TRAY, 30), 361,
	ftAnimBlock(0, 14),
	ftAnimSetValBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValT(FT_ANIM_ROTX, 17), 3031,
	ftAnimBlock(0, 16),
	ftAnimSetValAfterBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 361, 2867, 2867, 2867,
	ftAnimSetValBlock(FT_ANIM_ROTX), 607,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 100, 477, 3891, 3891, 3891,
	ftAnimBlock(0, 5),
	ftAnimSetValAfterBlockT(FT_ANIM_TRAZ, 1), 82,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 54,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), -122,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 431, 4096, 4096, 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 3,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimBomb_joint5[226] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3002, -42, 106, -22, 32, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3013, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 78, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -16, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 189, 97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 173, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3017, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2954, 50,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 253, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2889, 0, 29, 22, 373, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 110, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2955, -3, 197, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2895, 57, 274, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 466, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -3057, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 93, 15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 272, 79,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3059, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -2859, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 9, -59,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 360, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 158, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -42, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 58, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2899, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -3048, 5,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 69, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 63, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3039, 78, 142, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2891, 46, 396, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2946, -45, 278, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 175, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -2821, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 107, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 172, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -12, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 23, -21, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 84, 11, -221, -19,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2770, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2742, 27, 104, 20, -232, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimBomb_joint6[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1067, 64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 57), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -923, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1072, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1391, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1453, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1296, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -933, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -955, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1259, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1007, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1441, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1393, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1071, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -747, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimBomb_joint7[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), 701, 0, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8,
	ftAnimBlock(0, 57),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimBomb_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 57), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimBomb_joint11[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 479, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 65), 0, 0, 0, 0, 479, 0,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 8,
	ftAnimBlock(0, 57),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimBomb_joint12[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1495, -35, -1563, -10, -1726, 87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1511, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1421, -132, -1608, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1195, -118, -1449, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1415, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1171, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1156, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1104, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1519, -9, -1402, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1341, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1604, -15,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1084, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1223, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1328, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1370, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1615, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1607, -22,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1198, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1260, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1343, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1398, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1628, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1602, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1276, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1650, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1603, 29, -1404, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1445, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1601, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1621, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1843, -8,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1681, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1674, -7, -1471, -25, -1832, 10,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimBomb_joint14[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -825, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 57), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1000, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -995, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1002, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1121, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1097, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1146, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1043, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -791, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -699, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -616, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimBomb_joint15[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 23, -135, -49, -823, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -197, 137,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1007, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 127, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 169, 638,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1405, 615, 89, 152,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 122, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1399, -5, -1022, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 43), 1399, 5, -1023, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 137, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 41), 107, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1404, -594, 90, -135, -1008, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 210, -626, -163, -126, -1104, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 151, -45, -162, 29, -958, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 113, -13, -2, -15, -504, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 94, -18, -21, -19, -417, 86,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimBomb_joint17[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1167, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 57), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1255, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1254, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 1257, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1257, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1259, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1179, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 659, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 521, -137,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimBomb_joint19[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3130, 12, 141, 58, 2889, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 237, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3142, 8, 2890, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3148, -702, 2919, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, -709, 172, -23, 2519, -203,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 272, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1729, -8, 2511, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 43), 1728, 9, 2511, 8,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 281, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 36), 191, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1738, 705, 172, 26, 2519, 232,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 196, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3140, 698, 2975, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3134, -11, 2914, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 3117, 16, 3113, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -40, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3136, 18, -32, 8, 3161, 47,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimBomb_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1707, -39, 1475, 0, -2133, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 47), 1466, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1747, -47, -2186, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1801, -708, -2243, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3163, -678, -2863, -310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3157, 5, -2864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 43), -3157, -5, -2864, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3163, 642, 1450, 5, -2863, 284,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1412, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1872, 694, -2296, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1774, 78, -2211, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1448, 55, -1774, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1395, 52, 1436, 24, -1684, 89,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimBomb_joint22[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1223, 70,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 57), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1359, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, -112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 41), 1135, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1413, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1330, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 657, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, -162,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimBomb_joint23[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 171, 13, 43, -32, -509, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -118, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 184, 22, -530, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 216, 648, -547, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1482, 640, -940, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1497, 13, -944, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 42), 1510, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -944, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -123, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 41), -113, 6,
	ftAnimBlock(0, 40),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1483, -611, -106, 36, -940, 194,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 194, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 274, -637, -555, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 208, -44, -540, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -305, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 185, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 158, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 146, -12, 196, 1, -236, 68,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
