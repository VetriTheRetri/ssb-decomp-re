/* AnimJoint data for relocData file 625 (FTMarioAnimAttackAirU) */
/* 3024 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimAttackAirU_joint1[18];
extern u16 dFTMarioAnimAttackAirU_joint2[54];
extern u16 dFTMarioAnimAttackAirU_joint4[62];
extern u16 dFTMarioAnimAttackAirU_joint5[140];
extern u16 dFTMarioAnimAttackAirU_joint6[84];
extern u16 dFTMarioAnimAttackAirU_joint7[14];
extern u16 dFTMarioAnimAttackAirU_joint8[10];
extern u16 dFTMarioAnimAttackAirU_joint10[26];
extern u16 dFTMarioAnimAttackAirU_joint11[192];
extern u16 dFTMarioAnimAttackAirU_joint12[80];
extern u16 dFTMarioAnimAttackAirU_joint13[40];
extern u16 dFTMarioAnimAttackAirU_joint15[10];
extern u16 dFTMarioAnimAttackAirU_joint16[130];
extern u16 dFTMarioAnimAttackAirU_joint18[62];
extern u16 dFTMarioAnimAttackAirU_joint20[92];
extern u16 dFTMarioAnimAttackAirU_joint21[162];
extern u16 dFTMarioAnimAttackAirU_joint23[96];
extern u16 dFTMarioAnimAttackAirU_joint24[192];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTMarioAnimAttackAirU_joints[] = {
	(u32)dFTMarioAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTMarioAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTMarioAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimAttackAirU_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimAttackAirU_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTMarioAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTMarioAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimAttackAirU_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTMarioAnimAttackAirU_joint16, /* [15] joint 16 */
	(u32)dFTMarioAnimAttackAirU_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTMarioAnimAttackAirU_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTMarioAnimAttackAirU_joint21, /* [20] joint 21 */
	(u32)dFTMarioAnimAttackAirU_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTMarioAnimAttackAirU_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTMarioAnimAttackAirU_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -155,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 840, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -3216, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimAttackAirU_joint2[54] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -240, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -75, 421, 301, 585,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -134, -501, 358, 246,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -264, -261, 393, 56,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 10), 301, -169,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -297, -45,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 4), -304, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), -297, 23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 19), -240, -1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -240, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTMarioAnimAttackAirU_joint4[62] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 89, -97, -14, 74, -92, -26,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 115, -138,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -596, -324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -813, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -277, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -14, 1, -92, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 21, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 89, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -14, -92,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 89, -14, -92,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTMarioAnimAttackAirU_joint5[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1310, 183, -1121, -184, 1507, -258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1126, 120, -1305, -112, 1248, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1069, 63, -1346, -35, 1193, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1424, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1080, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -842, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -829, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -987, -21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1424, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1286, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 1239, 21,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1009, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1119, -32,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1269, 32, 1262, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1154, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1162, -62, 1319, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1244, -65, 1426, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1510, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1292, -32, -1129, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1311, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1120, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1509, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1507, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1311, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1310, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1310, 0, -1121, 0, 1507, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimAttackAirU_joint6[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 384,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -105, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -286, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -390, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -385, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimAttackAirU_joint7[14] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, -8, 0, 2, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimAttackAirU_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 127, 0, 0, 0, 288, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTMarioAnimAttackAirU_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -253, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 332, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 127, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTMarioAnimAttackAirU_joint11[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -301, 283, 488, 49, -101, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 345, 538, -18, 229, 405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 389, 295, 451, -156, 709, 364,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 631, 34, 1024, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 226, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 126, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 641, 19, 301, 64, 979, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 679, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 254, -33, 1009, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 224, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1019, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 990, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 684, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 648, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 225, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 288, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 634, 0, 317, -55, 973, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 644, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 177, -87, 1019, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, -19, 1027, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 424, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 548, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 635, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 260, -139,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 490, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 540, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 108, -149, 376, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -236, -64, -20, -77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 517, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -284, -33, -79, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -305, 1, -105, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -303, 1, -103, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -302, 1, -102, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -301, 0, 488, 0, -101, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimAttackAirU_joint12[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, -252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, -239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -635, 445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 313,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -559, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -769, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -384, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -382, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -384, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTMarioAnimAttackAirU_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -21, 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 7), -279,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 10, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 15), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), 625,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 625, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTMarioAnimAttackAirU_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTMarioAnimAttackAirU_joint16[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 109, -18, -3, 33, -247, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 54, 17, 51, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 199, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, 4, 60, 2, 404, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 53, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -108,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -389, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 47, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 109, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 20, -17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -377, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3, -11, -247, 46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -247, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -247, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 109, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, 0, -3, 0, -247, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTMarioAnimAttackAirU_joint18[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 229, 379,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 609, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 810, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 837, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 653, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 848, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 743, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 476, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 229, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTMarioAnimAttackAirU_joint20[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1348, -25, -1574, 3, 2044, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1673, -48,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), -1574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1339, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1431, 79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1393, -57,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1628, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1677, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1704, 27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2008, 36,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1335, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1348, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2044, 18,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 2044,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1348, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 1348, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2044, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 15), 2044,
	ftAnimBlock(0, 6),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 10), -1574,
	ftAnimBlock(0, 9),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1348, 2044,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTMarioAnimAttackAirU_joint21[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1542, 17, 1445, -4, 1262, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1525, 96, 1440, 67, 1066, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1349, 129, 1581, 70, 1321, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1265, 130, 1581, 0, 1220, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1088, 154, 1582, 0, 1114, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1018, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1576, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -957, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -808, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -667, 48, 972, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1005, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -712, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1108, -98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1158, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1572, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1565, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1205, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1290, -97, 1559, -55, 1210, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1400, -91, 1454, -58, 1068, -79,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -1542,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1442, -5, 1051, 8,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), 1445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1157, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1262, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 1262,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 19), 1262,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1542,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1542, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 15), 1445,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1542,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTMarioAnimAttackAirU_joint23[96] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), 716, -64,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 10240, 4096, 6144, 1365, 6144, 1365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 652, -354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -322,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 10240, 6144, 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 10240, -1365, 6144, -455, 6144, -455,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 28), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 588, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 722, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 19), 716,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 716, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTMarioAnimAttackAirU_joint24[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 57, -75, -134, 6, 164, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -97, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, 9, 321, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -114, -64, 451, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -134, 32, -256, -193, 388, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -119, -502, -164, 189, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -568, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -373, -355, 556, 356,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -983, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -523, 0, 1096, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -616, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -893, 115, 1022, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -752, 199, 897, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -495, 284, -650, -8, 667, -251,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -414, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -183, 247, 394, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, 145, 269, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 200, 80, 211, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 268, -62, -348, 61, 197, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -164, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 75, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 57, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -134, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 57, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -134, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -134, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 57, 0, -134, 0, 164, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
