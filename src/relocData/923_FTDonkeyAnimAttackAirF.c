/* AnimJoint data for relocData file 923 (FTDonkeyAnimAttackAirF) */
/* 2368 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimAttackAirF_joint1[58];
extern u16 dFTDonkeyAnimAttackAirF_joint2[26];
extern u16 dFTDonkeyAnimAttackAirF_joint3[8];
extern u16 dFTDonkeyAnimAttackAirF_joint5[18];
extern u16 dFTDonkeyAnimAttackAirF_joint6[148];
extern u16 dFTDonkeyAnimAttackAirF_joint7[64];
extern u16 dFTDonkeyAnimAttackAirF_joint8[64];
extern u16 dFTDonkeyAnimAttackAirF_joint9[8];
extern u16 dFTDonkeyAnimAttackAirF_joint11[16];
extern u16 dFTDonkeyAnimAttackAirF_joint12[144];
extern u16 dFTDonkeyAnimAttackAirF_joint13[70];
extern u16 dFTDonkeyAnimAttackAirF_joint14[84];
extern u16 dFTDonkeyAnimAttackAirF_joint15[8];
extern u16 dFTDonkeyAnimAttackAirF_joint17[8];
extern u16 dFTDonkeyAnimAttackAirF_joint18[90];
extern u16 dFTDonkeyAnimAttackAirF_joint20[40];
extern u16 dFTDonkeyAnimAttackAirF_joint22[64];
extern u16 dFTDonkeyAnimAttackAirF_joint23[94];
extern u16 dFTDonkeyAnimAttackAirF_joint25[120];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimAttackAirF_joints[] = {
	(u32)dFTDonkeyAnimAttackAirF_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimAttackAirF_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimAttackAirF_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimAttackAirF_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimAttackAirF_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimAttackAirF_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimAttackAirF_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimAttackAirF_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimAttackAirF_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimAttackAirF_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimAttackAirF_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimAttackAirF_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimAttackAirF_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimAttackAirF_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimAttackAirF_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimAttackAirF_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimAttackAirF_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimAttackAirF_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimAttackAirF_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0228, /* [25] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimAttackAirF_joint1[58] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 949, -319,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 30,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 949, 142, -319, 59,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1251, 405, -193, 497,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1355, -409, 178, 702,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 841, -612, 509, 98,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 589, -228, 301, -387,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 555, 33, 25, -408,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 631, 210, -209, -255,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 949,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), -293, -88,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -319,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimAttackAirF_joint2[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -296, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 268, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 1897, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), 3216, 19,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimAttackAirF_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -257, -28, 131,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimAttackAirF_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 791,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 73, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 639, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 639, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 42), 791,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimAttackAirF_joint6[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -24, -141, -383, -52, 3067, 94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3128, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -165, -237, -435, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -498, -190, -901, -429,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -545, -124, -1295, -222, 3023, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3492, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -747, -206, -1347, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1297, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1317, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1516, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1729, -121, 3465, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3743, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1759, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1679, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1286, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1162, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3792, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3852, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4125, 217,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 4342, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1087, 35, -1614, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1179, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1348, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4360, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 4675, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1201, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1632, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1340, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 18), -1225, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, 0, -1225, 0, 4675, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimAttackAirF_joint7[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, -281,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1082, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -692, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -692, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -512, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -478, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimAttackAirF_joint8[64] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -825, -308, 165, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -1137, -14, -308, -4, 165, -9,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 1023, 4096, 1023, 4096, 1023,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, 1023, 8192, 1024, 8192, 1024,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), -1041, 7, 8192, -744, 8192, -744, 8192, -744,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -378, 21,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 35), -825, -308, 165,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -234, 4096, -234, 4096, -234,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTDonkeyAnimAttackAirF_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimAttackAirF_joint11[16] = {
	ftAnimSetVal(FT_ANIM_ROTX), -452,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), -206, 75,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -681,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -443,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 38), -452,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimAttackAirF_joint12[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1884, 42, 1223, -9, 1599, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2064, 336, 1161, -77, 1768, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2600, 558, 1060, 62, 2198, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3180, 447, 1286, 121, 2603, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3494, 368, 1303, 34, 2784, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 4278, 244, 1545, 162, 3361, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4407, 77, 1681, 52, 3484, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4438, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1673, 43, 3829, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1737, 27, 3795, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1726, -84, 3853, 186,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4438, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 4394, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1559, -104, 4185, 246,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1465, -14, 4425, 27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4418, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 5051, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1451, -12, 4454, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 4816, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 21), 1340, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 5061, 9, 1323, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 5101, 1, 1225, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5101, 0, 1223, -1, 4816, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimAttackAirF_joint13[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1114, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -414, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -324, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 103,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -561, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -589, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 30), -832, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -829, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -827, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTDonkeyAnimAttackAirF_joint14[84] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 893, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 1023, 4096, 1023, 4096, 1023,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1490, 33, 103, 37, 433, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1162, -33, 296, 21, 205, -28,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, 1024, 8192, 1024, 8192, 1024,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 1092, -3, 356, 2, 96, -4, 8192, -744, 8192, -744, 8192, -744,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 1092, -5, 356, -10, 96, -2,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, -234, 4096, -234, 4096, -234,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 31), 4096, 4096, 4096,
	ftAnimBlock(0, 11),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 893, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimAttackAirF_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimAttackAirF_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 714, 1072,
	ftAnimBlock(0, 50),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimAttackAirF_joint18[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 5, -14, -62, -196, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -324, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 133, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -573, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -593, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1110, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, -31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -338, 6,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 151, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), -267, -4,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -278, 21,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -331, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -16, 2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -271, -3, -258, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -278, 0, -198, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -278, 0, -14, 1, -196, 1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimAttackAirF_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 587, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 511, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 304, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 342, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 1000, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 980, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 654, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimAttackAirF_joint22[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -10, 0, -31, 105, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -75, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 26, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 103, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 92, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -102, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 39), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 37), 104, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 0, 0, 0, 105, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimAttackAirF_joint23[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -21, 189, 14, -727, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -339, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 252, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -705, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -782, -83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1350, -20,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -392, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -498, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 213, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 58, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1360, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), -810, 22,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -502, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 26), -161, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 59, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 189, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -729, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, 1, 189, 0, -727, 1,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimAttackAirF_joint25[120] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, -88,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 780, -191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 599, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 659, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), 1148, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1139, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1072, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -1,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0602, 0x0018, 0x06FB, 0xFFE4, 0xFA38, 0xFFFD, 0x2809, 0x000B, 0xF9C8, 0xFFF0, 0x2805, 0x0011, 0x05CE, 0x0004, 0x2003, 0x0004, 0x059F, 0xFFC5, 0x2003, 0x0001, 0x0575, 0xFFF9, 0x2003, 0x0005, 0x070D, 0x001B, 0x2003, 0x0001, 0x0717, 0x0006, 0x2803, 0x0013, 0x0620, 0xFFC0, 0x2009, 0x0001, 0xF9BE, 0xFFFB, 0x2809, 0x0025, 0xFA37, 0x0000, 0x0801, 0x0005, 0x2005, 0x0001, 0x05D3, 0x0005, 0x2805, 0x001F, 0x06FB, 0x0001, 0x0801, 0x000C, 0x2003, 0x0001, 0x05E1, 0xFFC7, 0x2003, 0x0010, 0x05FA, 0x0005, 0x2003, 0x0001, 0x05FE, 0x0003, 0x2003, 0x0001, 0x0601, 0x0001, 0x200F, 0x0001, 0x0602, 0x0000, 0x06FB, 0x0000, 0xFA38, 0x0000, 0x0000,
};
