/* AnimJoint data for relocData file 775 (FTFoxAnimExitPipe) */
/* 2000 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimExitPipe_joint1[30];
extern u16 dFTFoxAnimExitPipe_joint2[36];
extern u16 dFTFoxAnimExitPipe_joint4[22];
extern u16 dFTFoxAnimExitPipe_joint5[136];
extern u16 dFTFoxAnimExitPipe_joint6[56];
extern u16 dFTFoxAnimExitPipe_joint7[44];
extern u16 dFTFoxAnimExitPipe_joint8[36];
extern u16 dFTFoxAnimExitPipe_joint10[10];
extern u16 dFTFoxAnimExitPipe_joint11[156];
extern u16 dFTFoxAnimExitPipe_joint12[56];
extern u16 dFTFoxAnimExitPipe_joint13[50];
extern u16 dFTFoxAnimExitPipe_joint15[10];
extern u16 dFTFoxAnimExitPipe_joint16[54];
extern u16 dFTFoxAnimExitPipe_joint18[28];
extern u16 dFTFoxAnimExitPipe_joint20[48];
extern u16 dFTFoxAnimExitPipe_joint21[54];
extern u16 dFTFoxAnimExitPipe_joint23[22];
extern u16 dFTFoxAnimExitPipe_joint24[48];
extern u16 dFTFoxAnimExitPipe_joint25[30];
extern u16 dFTFoxAnimExitPipe_joint26[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimExitPipe_joints[] = {
	(u32)dFTFoxAnimExitPipe_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimExitPipe_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimExitPipe_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimExitPipe_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimExitPipe_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimExitPipe_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimExitPipe_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimExitPipe_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimExitPipe_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimExitPipe_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimExitPipe_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimExitPipe_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimExitPipe_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimExitPipe_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimExitPipe_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimExitPipe_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimExitPipe_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimExitPipe_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimExitPipe_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimExitPipe_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimExitPipe_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), -60, 120,
	ftAnimSetValBlock(FT_ANIM_TRAY), -1200,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 26), -60, 120,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 26), 960,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 9), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 48, 912, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimExitPipe_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -446, -44,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -446, 2,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 35), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -357, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -357, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -141, -338, -3,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimExitPipe_joint4[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -44, 0, 89,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), 0, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -44, 25,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimExitPipe_joint5[136] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 5120, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1100, 0, 1331, 0, 1309, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1104, -8,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 26), 5120, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 1341, -10, 1310, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1320, -34, 1292, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1223, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1309, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1117, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1138, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1100, -67, 1331, 295,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAY, 9), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1272, -384, 1814, 213, 1617, 297,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 2279, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1870, -430, 1758, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2244, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1601, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1670, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1736, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2274, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1984, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2249, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1883, 126,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 5), 4096, 4095,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1767, 82, 1762, 18, 1902, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1718, 49, 1774, 12, 1867, -35,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimExitPipe_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -612, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -624, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -623, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -424, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, -331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1087, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -954, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -783, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -577, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimExitPipe_joint7[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 331, 42, -177, 3276,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 269, 0, 0, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 331, 42, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 331, -33, 42, -4, -177, 17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -23, 0, -3, 0, 12,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimExitPipe_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 223, 446, 44,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 223, 446, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 178, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 178, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimExitPipe_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimExitPipe_joint11[156] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAZ), 5120, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2644, 0, -350, 0, 2711, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 26), 5120, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 2645, 3, -362, -11, 2709, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2652, 16, -386, -43, 2692, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -506, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2751, 94, 2547, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2868, -14, 2413, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2709, 311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2582, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -350, 333, 2711, 178,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 9), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 159, 367, 2938, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3267, 456, 385, 141, 3389, 384,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 442, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 3859, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3957, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3991, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3832, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 479, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 428, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3834, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 3503, -120,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4096, 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 340, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 279, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3737, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3394, -76, 3615, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3349, -44, 271, -7, 3553, -61,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimExitPipe_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -456, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -439, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -440, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -147, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, -374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -948, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -953, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -653, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -643, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimExitPipe_joint13[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 595, -181, 272, 3276,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 272, 0, 0, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 26), 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 595, -181, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 595, -59, -181, 18, 272, -27,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 14), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -66, 0, 20, 0, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimExitPipe_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimExitPipe_joint16[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1223, 0, -1424, 0, -1550, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1219, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -1376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -1550, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1573, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1637, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1206, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1202, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1377, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1383, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, 0, -1385, -1, -1635, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimExitPipe_joint18[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 193, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), 193, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 330, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimExitPipe_joint20[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -97, 0, -28, 0, -63, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 39), -57, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), -97, 4, -28, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -87, 16, -7, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 37, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 145, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 136, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 125, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 9, 125, 0, -56, 1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimExitPipe_joint21[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 390, 0, 39, -1, 197, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 34), 418, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 13, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 191, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, -14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 137, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 414, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 361, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 13, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 128, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 355, -5, 137, 9, 134, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimExitPipe_joint23[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 308, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, 23,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimExitPipe_joint24[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 115, 0, -219, 0, -100, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 35), 106, -4, -73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 31), -167, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -107, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 100, -12, -72, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 27, -18, -218, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 16, -10, -102, 4, -226, -8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimExitPipe_joint25[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -446, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -125, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), -446, 23, 0, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 268, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 89, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimExitPipe_joint26[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -122, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 26), -178, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -536, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 536, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
	0x0000,
};
