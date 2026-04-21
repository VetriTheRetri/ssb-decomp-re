/* AnimJoint data for relocData file 1529 (FTCaptainAnimCrouchIdle) */
/* 1952 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCrouchIdle_joint1[42];
extern u16 dFTCaptainAnimCrouchIdle_joint2[22];
extern u16 dFTCaptainAnimCrouchIdle_joint4[52];
extern u16 dFTCaptainAnimCrouchIdle_joint5[162];
extern u16 dFTCaptainAnimCrouchIdle_joint6[56];
extern u16 dFTCaptainAnimCrouchIdle_joint7[32];
extern u16 dFTCaptainAnimCrouchIdle_joint8[8];
extern u16 dFTCaptainAnimCrouchIdle_joint10[36];
extern u16 dFTCaptainAnimCrouchIdle_joint11[94];
extern u16 dFTCaptainAnimCrouchIdle_joint12[32];
extern u16 dFTCaptainAnimCrouchIdle_joint13[24];
extern u16 dFTCaptainAnimCrouchIdle_joint14[8];
extern u16 dFTCaptainAnimCrouchIdle_joint16[32];
extern u16 dFTCaptainAnimCrouchIdle_joint17[54];
extern u16 dFTCaptainAnimCrouchIdle_joint19[32];
extern u16 dFTCaptainAnimCrouchIdle_joint21[56];
extern u16 dFTCaptainAnimCrouchIdle_joint22[84];
extern u16 dFTCaptainAnimCrouchIdle_joint24[32];
extern u16 dFTCaptainAnimCrouchIdle_joint25[68];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimCrouchIdle_joints[] = {
	(u32)dFTCaptainAnimCrouchIdle_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimCrouchIdle_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimCrouchIdle_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimCrouchIdle_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimCrouchIdle_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimCrouchIdle_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimCrouchIdle_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimCrouchIdle_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimCrouchIdle_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimCrouchIdle_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimCrouchIdle_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimCrouchIdle_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimCrouchIdle_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimCrouchIdle_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimCrouchIdle_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimCrouchIdle_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimCrouchIdle_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimCrouchIdle_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTCaptainAnimCrouchIdle_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimCrouchIdle_joint1[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 793, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 35), 941, 16, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 908, -38, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 25), 793, 4, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), 941, 16, 1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 908, -38, -3, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 793, 0,
	ftAnimLoop(0x6800, -80),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimCrouchIdle_joint2[22] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 116, 0, 30, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, 4, -76, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), 116, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), 116, 0, 30, 0,
	ftAnimLoop(0x6800, -42),
};

/* Joint 4 */
u16 dFTCaptainAnimCrouchIdle_joint4[52] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 10, 0, -23, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 611, -5, -168, 93,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), -24, -165, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 703, 0, -69, 0, -137, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 611, -1, 10, 2, -23, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), -5, -168, 93,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 578, 115, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 10, 0, -23, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 50), 611,
	ftAnimLoop(0x6800, -102),
};

/* Joint 5 */
u16 dFTCaptainAnimCrouchIdle_joint5[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1047, 0, -1442, 0, -2568, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), -1444, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 81), -1048, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), -2459, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2460, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), -2568, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1446, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1423, 15,
	ftAnimBlock(0, 28),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2562, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1813, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1050, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1438, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1404, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1247, -35,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1522, -79, -1695, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -2080, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1383, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1285, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), -1458, 5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2084, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), -1487, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1383, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), -1695, -51,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1451, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1323, -15,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1450, 37, -1748, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -2546, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1048, 2,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1339, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1439, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2562, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1047, 1, -1442, -2, -2568, -5,
	ftAnimLoop(0x6800, -320),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCrouchIdle_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -978, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), -870, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -878, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), -980, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1099, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1071, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -639, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -652, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -1051, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1041, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -979, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, 1,
	ftAnimLoop(0x6800, -110),
};

/* Joint 7 */
u16 dFTCaptainAnimCrouchIdle_joint7[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2865, -54, -201,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 3030, -36, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 2865, 0, -54, 0, -201, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 3085, 0, 12, 0, -79, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 2865, -54, -201,
	ftAnimLoop(0x6800, -62),
};

/* Joint 8 */
u16 dFTCaptainAnimCrouchIdle_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -14),
};

/* Joint 10 */
u16 dFTCaptainAnimCrouchIdle_joint10[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 0, -78, 0, 77, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -278, 31, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -277, -1, -78, 1, 77, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -381, 143, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -277, 0, -78, 0, 77, 0,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCrouchIdle_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1962, 0, -1669, 0, -1430, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -1588, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 61), -1502, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 45), 1838, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1840, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 61), 1846, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 65), -1835, -2,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1496, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 55), -1632, -6,
	ftAnimBlock(0, 45),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1839, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 50), 1960, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1838, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 43), -1670, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1638, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 41), -1431, 0,
	ftAnimBlock(0, 40),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1961, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1962, 0, -1669, 0, -1430, 0,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCrouchIdle_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -988, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), -715, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 56), -1022, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1019, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 55), -988, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 13 */
u16 dFTCaptainAnimCrouchIdle_joint13[24] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 82, 84, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 80), 82, -1, 84, 0, -76, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), -104, 50, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 82, 84, -76,
	ftAnimLoop(0x6800, -46),
};

/* Joint 14 */
u16 dFTCaptainAnimCrouchIdle_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimBlock(0, 160),
	ftAnimLoop(0x6800, -14),
};

/* Joint 16 */
u16 dFTCaptainAnimCrouchIdle_joint16[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 706, -258, -630,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 42), -442, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 42), 296, -243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 38), 706, 0, -258, 0, -630, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 343, -215, -283,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 40), 706, -258, -630,
	ftAnimLoop(0x6800, -62),
};

/* Joint 17 */
u16 dFTCaptainAnimCrouchIdle_joint17[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, 0, -89, 0, -1034, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 61), -952, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 159), -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 60), -64, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 98), -89, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -958, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 84), -972, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1034, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, 0, -89, 0, -1034, 0,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCrouchIdle_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1166, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 70), 1154, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1156, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 79), 1151, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1166, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 21 */
u16 dFTCaptainAnimCrouchIdle_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, 0, 150, 0, 81, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 66), 50, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 159), 150, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 61), 49, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 52, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 97), 71, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 54, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 82), 56, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 80, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 0, 150, 0, 81, 0,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimCrouchIdle_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -233, 0, 345, 0, -286, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 76), 346, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -288, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 64), -197, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -201, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 81), -198, -4,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 346, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 79), 346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -287, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 77), -295, 3,
	ftAnimBlock(0, 68),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -202, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -233, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -287, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 346, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 345, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 0, 345, 0, -286, 0,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCrouchIdle_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1378, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 67), 1359, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1362, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 80), 1357, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1360, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1378, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, 0,
	ftAnimLoop(0x6800, -62),
};

/* Joint 25 */
u16 dFTCaptainAnimCrouchIdle_joint25[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 236, 0, 16, 0, -461, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 69), -434, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 159), 16, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 61), 143, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 149, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 85), 173, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 78), -424, -4,
	ftAnimBlock(0, 77),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 181, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 236, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -429, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -461, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 236, 0, 16, 0, -461, 0,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
	0x0000, 0x0000,
};
