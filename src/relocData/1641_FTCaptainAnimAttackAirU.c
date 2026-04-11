/* AnimJoint data for relocData file 1641 (FTCaptainAnimAttackAirU) */
/* 2688 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimAttackAirU_joint1[104];
extern u16 dFTCaptainAnimAttackAirU_joint2[14];
extern u16 dFTCaptainAnimAttackAirU_joint4[116];
extern u16 dFTCaptainAnimAttackAirU_joint5[156];
extern u16 dFTCaptainAnimAttackAirU_joint6[72];
extern u16 dFTCaptainAnimAttackAirU_joint7[8];
extern u16 dFTCaptainAnimAttackAirU_joint10[26];
extern u16 dFTCaptainAnimAttackAirU_joint11[150];
extern u16 dFTCaptainAnimAttackAirU_joint12[68];
extern u16 dFTCaptainAnimAttackAirU_joint13[8];
extern u16 dFTCaptainAnimAttackAirU_joint14[10];
extern u16 dFTCaptainAnimAttackAirU_joint16[8];
extern u16 dFTCaptainAnimAttackAirU_joint17[100];
extern u16 dFTCaptainAnimAttackAirU_joint19[70];
extern u16 dFTCaptainAnimAttackAirU_joint21[96];
extern u16 dFTCaptainAnimAttackAirU_joint22[120];
extern u16 dFTCaptainAnimAttackAirU_joint24[168];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimAttackAirU_joints[] = {
	(u32)dFTCaptainAnimAttackAirU_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimAttackAirU_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimAttackAirU_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimAttackAirU_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimAttackAirU_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimAttackAirU_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimAttackAirU_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimAttackAirU_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimAttackAirU_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimAttackAirU_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimAttackAirU_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimAttackAirU_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimAttackAirU_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimAttackAirU_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimAttackAirU_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimAttackAirU_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimAttackAirU_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0268, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimAttackAirU_joint1[104] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1232, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -16, -180,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1210, -217, -51, -455,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1178, -82, -115, -266,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1189, 629, -117, 2461,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1335, 4290, 500, 2176,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1598, -212,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2262, 3751, 426, -2303,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2273, -1047, -75, -2681,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 2000, -1550, -244, -200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1885, -640, -125, 728,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 26), -3216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1840, -169, -62, 226,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1737, -188, 72, 140,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 1557, -212,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 78, -51,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 20, -37,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_TRAY, 13), 1232, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 11), -1, -25,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimAttackAirU_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 4, -76, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 34), 95, 49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimAttackAirU_joint4[116] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAZ), 242, 0, 47,
	ftAnimSetValRate(FT_ANIM_TRAY), -31, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -182, -12,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 45, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 477, 191, -18, -112, -109, -310,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 620, -451,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -18, 133, -109, 234,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 10, 293, -54, 371, 28, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 2), -1045, -10, -444, -138,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 54, 407, -16, -693,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 1), 104, -68, -227, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -123, 133, 20, -147, 7, 224, -39, 694,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 198, 94, -6, -33, -59, -131, 76, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 540, 66, -11, -7, -118, -96, 99, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 640, -2, -12, 4, -143, -4, 94, -31,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 242,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -7, 6, -122, 55, 72, -23,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, -31, 47,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimAttackAirU_joint5[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 274, -291, -120, 67, 2610, 307,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -176, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, -3, 2917, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -64, 2912, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -214, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2913, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4, 122, 2265, -378,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 112, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -186, 4, 2156, -98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -209, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2068, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1864, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 188, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 59, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1960, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2309, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -170, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -118, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -106, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2386, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 2441, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -154, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -87, -13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -57, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 291, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -104, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -127, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2414, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 2418, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2505, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 278, -8, 2579, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 274, -4, -120, 6, 2610, 30,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimAttackAirU_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, 97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -814, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -529, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -625, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -658, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -685, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -807, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1097, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimAttackAirU_joint7[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimAttackAirU_joint10[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -153,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -273, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 66, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -311, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -441, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 22), -153,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimAttackAirU_joint11[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 5, 249, 62, 628, -534,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 427, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 139, -128, 94, -467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -122, -315, -305, -397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -491, 22, 559, -67, -700, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -77, 193, 291, -141, -757, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, -4, 275, -48, -988, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 105, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -86, 30, -1095, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1018, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -51, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 269, 77,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -973, 51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -389, 195,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -108, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 90, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 346, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 284, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -176, 194,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 557, 43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 134, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 138, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 276, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 248, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 591, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 628, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 133, -4, 249, 1, 628, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimAttackAirU_joint12[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -217,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -817, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -695, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -508, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -525, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -962, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -662, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimAttackAirU_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, 167, 63,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimAttackAirU_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimAttackAirU_joint16[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimBlock(0, 34),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimAttackAirU_joint17[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -27, 81, 13, -557, -155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 24, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -16, 38, -806, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 67, 65, -641, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 159, 69, -485, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 252, 60, -359, 107,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -211, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 133, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 116, -12, 28, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 52, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -280, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -304, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -561, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 49, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 54, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 0, 81, 0, -557, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimAttackAirU_joint19[70] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 333,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 570, 356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 949, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1069, -415,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 333, -414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 240, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 102, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 249, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 320, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 301, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 243, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -6,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimAttackAirU_joint21[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -4, -2, 14, 513, -330,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 9, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 22, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 183, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 235, 83,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 32, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 341, 95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 513, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -2, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 34, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 188, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 463, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 499, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 0, -2, 0, 513, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimAttackAirU_joint22[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1594, -73, 1319, 47, 783, -226,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1500, -13, 1444, 51, 359, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1493, -87, 1470, 87, 344, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1326, -46, 1620, -63, 91, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1401, 80, 1343, -162, 526, 254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 563, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1668, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1296, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1260, -32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1545, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 557, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 928, 121,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1687, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1739, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1055, 99,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1110, -25,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1729, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1593, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1525, -22, 1082, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 1321, -3, 783, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1594, 0, 1319, -2, 783, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimAttackAirU_joint24[168] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 938, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 854, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 811, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1185, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1222, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1111, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1064, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1051, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1035, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 880, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, -4,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFFFE, 0x0019, 0xFFC7, 0xFFF7, 0xFF66, 0xFFC9, 0x2807, 0x0003, 0x0000, 0x0002, 0xFFDE, 0x0038, 0x2009, 0x0002, 0xFF6D, 0x0050, 0x2009, 0x0001, 0xFFCF, 0x00CE, 0x200F, 0x0001, 0x000E, 0xFF75, 0x0039, 0x001A, 0x010A, 0x009C, 0x200F, 0x0001, 0xFEEA, 0xFF3D, 0x0012, 0xFFFC, 0x0107, 0x002E, 0x2809, 0x0003, 0x0210, 0x0017, 0x2007, 0x0001, 0xFE88, 0xFFC8, 0x0030, 0x0023, 0x2803, 0x0003, 0xFEC9, 0x0015, 0x2805, 0x000C, 0x004A, 0xFFF7, 0x0801, 0x0002, 0x2009, 0x0001, 0x020B, 0xFFFA, 0x2809, 0x0010, 0x0014, 0xFFDA, 0x2003, 0x0001, 0xFED8, 0x0011, 0x2803, 0x000A, 0xFFB7, 0x0000, 0x0801, 0x0008, 0x2005, 0x0001, 0x0041, 0xFFF6, 0x2805, 0x000E, 0xFFC8, 0xFFFF, 0x0801, 0x0001, 0x2003, 0x0001, 0xFFB7, 0x0000, 0x2803, 0x000C, 0xFFFB, 0x0004, 0x0801, 0x0004, 0x2009, 0x0001, 0xFFF0, 0xFFDE, 0x2009, 0x0007, 0xFF69, 0xFFFC, 0x200F, 0x0001, 0xFFFE, 0x0002, 0xFFC7, 0x0000, 0xFF66, 0xFFFE, 0x0000,
};
