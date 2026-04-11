/* AnimJoint data for relocData file 1632 (FTCaptainAnimDTilt) */
/* 3296 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDTilt_joint1[56];
extern u16 dFTCaptainAnimDTilt_joint2[60];
extern u16 dFTCaptainAnimDTilt_joint4[88];
extern u16 dFTCaptainAnimDTilt_joint5[188];
extern u16 dFTCaptainAnimDTilt_joint6[72];
extern u16 dFTCaptainAnimDTilt_joint7[10];
extern u16 dFTCaptainAnimDTilt_joint8[10];
extern u16 dFTCaptainAnimDTilt_joint10[48];
extern u16 dFTCaptainAnimDTilt_joint11[102];
extern u16 dFTCaptainAnimDTilt_joint12[48];
extern u16 dFTCaptainAnimDTilt_joint13[28];
extern u16 dFTCaptainAnimDTilt_joint14[10];
extern u16 dFTCaptainAnimDTilt_joint16[30];
extern u16 dFTCaptainAnimDTilt_joint17[172];
extern u16 dFTCaptainAnimDTilt_joint19[78];
extern u16 dFTCaptainAnimDTilt_joint21[198];
extern u16 dFTCaptainAnimDTilt_joint22[174];
extern u16 dFTCaptainAnimDTilt_joint24[226];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTCaptainAnimDTilt_joints[] = {
	(u32)dFTCaptainAnimDTilt_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimDTilt_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimDTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTCaptainAnimDTilt_joint5, /* [4] joint 5 */
	(u32)dFTCaptainAnimDTilt_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimDTilt_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimDTilt_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimDTilt_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTCaptainAnimDTilt_joint11, /* [10] joint 11 */
	(u32)dFTCaptainAnimDTilt_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimDTilt_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimDTilt_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimDTilt_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTCaptainAnimDTilt_joint17, /* [16] joint 17 */
	(u32)dFTCaptainAnimDTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTCaptainAnimDTilt_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTCaptainAnimDTilt_joint22, /* [21] joint 22 */
	(u32)dFTCaptainAnimDTilt_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF02E7, /* [24] END */
};

/* Joint 1 */
u16 dFTCaptainAnimDTilt_joint1[56] = {
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, -106, 0, -890,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAY), 793,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 794, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), -53, -86, -420, -2,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -420, -4,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), -54,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), -52, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 672, -2, 79, 2352,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 466,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -52, -5, 672, 2, 85, -157,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 793, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimDTilt_joint2[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -141, -154, 116, -334, 30, 128,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), -437,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 284, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -714, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -714, 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 3), 284,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -437, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -446, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -446, 0, 284, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -441,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 116, 0, 30, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), -141,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimDTilt_joint4[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 611, 2, 10, -48, -23, -63,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -5, -168, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 623, 0, -66, 0, -204, 0, -5, 1, -168, 0, 93, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 580, 0, -357, 0, -491, 0, -12, -17, -33, 0, 21, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 6), 580, 0, -357, 0, -491, 0, -28, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -33, 21,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 93, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, 45,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), 611,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 10, 0, -23, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -42, 22, -130, -116,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), -5, 0, -168, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -5, -168, 93,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimDTilt_joint5[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 561, -133, -166, 71, -960, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 427, -54, -95, 27, -837, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 41, -110, -24, -845, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -164, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 554, 22, -927, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 555, 1, -934, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 558, 2, -165, 0, -946, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 41, -166, -36, -960, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 704, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, -71, -804, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -308, -35, -554, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 704, 0, -308, 0, -554, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -308, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 709, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -554, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -641, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -319, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -463, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 716, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 604, -113,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -565, -88,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -666, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 454, -164, -526, 129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -306, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 274, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 176, -46, -657, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 471, 75, -448, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -738, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, 39, -342, 98, -841, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 559, 5, -188, 42, -946, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 561, 2, -166, 22, -960, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDTilt_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -978, -13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -987, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1145, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1194, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1194, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1171, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1119, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1040, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -939, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -993, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1110, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -996, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, 18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDTilt_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 2865, -54, -201, 424, 0, 0,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimDTilt_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 360, -108,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDTilt_joint10[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -277, 0, -78, 0, 77, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -194, 30, 374, 47, -111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -37, 0, 540, 0, -65, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -37, 0, 540, 0, -65, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -59, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -277, -17, -78, 0, 77, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDTilt_joint11[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1962, 0, -1669, 0, -1430, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1963, 0, -1669, 0, -1429, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1963, 12, -1669, -59, -1428, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1987, -15, -1788, -85, -1018, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1932, -27, -1839, -25, -799, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1933, 0, -1839, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1003, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1933, 0, -1839, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1844, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 1972, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1989, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1982, -18,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1838, 9, -1075, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1701, 30, -1426, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1962, -20, -1669, 31, -1430, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDTilt_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -988, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -991, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -758, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -799, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -825, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -958, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -975, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDTilt_joint13[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 84, -76, 425, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), 82, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -137,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -137,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 82,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimDTilt_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 31),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDTilt_joint16[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 706, -258, -630,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -191, -210, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 706, -1, -258, 0, -630, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1032, -93, -761,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 706, -37, -258, -14, -630, 18,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimDTilt_joint17[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -29, -54, -89, 154, -1034, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 162, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, 59, -933, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 90, 201, -912, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 319, 148, 140, -27, -820, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 387, 20, 108, -12, -799, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -824, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 361, -15, 115, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 156, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 356, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 380, -45, -795, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 23, 178, -277, -779, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 427, 79, -399, -289, -235, 273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 424, -1, -401, -1, -231, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 415, -14, -395, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -231, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -228, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 399, 18, -379, 113, -228, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 452, 7, -168, 169, -410, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 414, -53, -40, 98, -516, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 13, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -986, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 131, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -24, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -7, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -85, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1025, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, -4, -89, -4, -1034, -8,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDTilt_joint19[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1166, 66,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1233, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1198, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1121, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1118, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1119, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1120, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1252, -558,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -626,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 461, 364,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 729, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1004, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1081, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1168, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1166, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimDTilt_joint21[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, -144, 150, -270, 81, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, -185, -120, -116, -11, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -299, -192, -83, 81, 62, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -457, -97, 42, 88, 21, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -494, -2, 93, 27, -9, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 87, -15, 9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -462, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -463, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -504, 26, 66, 4, 9, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -113, 96, -13, -332, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -731, -161, 38, -25, 8, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 49, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -733, 7, -21, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -652, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -35, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 11, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 51, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 64, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -660, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -627, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 96, 23, -6, -101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 83, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -617, 42, -191, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -542, 72, -172, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -83, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -472, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -132, 51,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, -15, -65, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -13, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 148, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 60, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 67, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 71, 10, 150, 2, 81, 13,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDTilt_joint22[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1841, -262, -1954, 73, 1321, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2104, -105, -1881, 40, 1109, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2053, 230, -1873, 9, 761, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1643, 271, -1862, 48, 916, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1509, 52, -1777, 41, 1022, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1041, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1538, -17, -1778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1545, -2, -1778, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1544, -173, -1778, -108, 1039, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1891, -521, -1996, -201, 1039, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2586, -347, -2181, -92, 986, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 983, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2586, -2, -2182, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2599, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2175, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 978, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1025, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2591, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2455, 69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1070, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1310, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2386, 66, -2160, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1975, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1996, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1982, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1955, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1932, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1848, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1316, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1321, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1841, 6, -1954, 0, 1321, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDTilt_joint24[226] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1378, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1402, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1451, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1425, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1417, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1416, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1512, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1392, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1346, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1346, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1431, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1432, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1380, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1378, -1,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0735, 0x009A, 0xF9A8, 0x0069, 0x047A, 0xFFE4, 0x200F, 0x0001, 0x07CF, 0xFFE6, 0xFA11, 0x00AC, 0x045E, 0x0027, 0x200F, 0x0001, 0x06FF, 0xFF21, 0xFB01, 0x003B, 0x04C8, 0x0034, 0x200F, 0x0001, 0x0610, 0xFF6E, 0xFA89, 0xFF9E, 0x04C7, 0xFFD8, 0x200F, 0x0001, 0x05DA, 0xFFEE, 0xFA3B, 0xFFDB, 0x0478, 0xFFC4, 0x2809, 0x0002, 0x0444, 0x000B, 0x2007, 0x0001, 0x05EB, 0x000C, 0xFA3F, 0x0005, 0x2007, 0x0001, 0x05F2, 0x0008, 0xFA46, 0x0006, 0x2805, 0x0002, 0xFA91, 0x006F, 0x200B, 0x0001, 0x05FC, 0x0024, 0x0465, 0x000B, 0x200B, 0x0001, 0x063B, 0x00E4, 0x045C, 0xFF9C, 0x200F, 0x0001, 0x07C4, 0x00D7, 0xFB2B, 0x004C, 0x039C, 0xFFAD, 0x200F, 0x0001, 0x07EA, 0x0021, 0xFB2B, 0x0001, 0x03B5, 0x0011, 0x2803, 0x0004, 0x083E, 0x000C, 0x200D, 0x0001, 0xFB2D, 0x0002, 0x03BF, 0x0004, 0x2809, 0x0004, 0x039F, 0x0004, 0x2805, 0x0007, 0xFAFC, 0xFFEB, 0x0801, 0x0003, 0x2003, 0x0001, 0x0849, 0xFFFC, 0x2803, 0x0003, 0x081E, 0xFFFA, 0x2009, 0x0001, 0x03B4, 0x0015, 0x2809, 0x000A, 0x0468, 0x0007, 0x0801, 0x0002, 0x2007, 0x0001, 0x081A, 0xFFFD, 0xFAE4, 0xFFE8, 0x2805, 0x000B, 0xF9AC, 0xFFF9, 0x2003, 0x0007, 0x07A4, 0xFFE1, 0x200B, 0x0001, 0x0783, 0xFFE1, 0x046F, 0x0005, 0x200B, 0x0003, 0x073B, 0xFFF5, 0x0479, 0x0001, 0x200F, 0x0001, 0x0735, 0xFFFA, 0xF9A8, 0xFFFD, 0x047A, 0x0000, 0x0000, 0x0000, 0x0000,
};
