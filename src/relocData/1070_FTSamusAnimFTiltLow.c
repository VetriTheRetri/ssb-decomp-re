/* AnimJoint data for relocData file 1070 (FTSamusAnimFTiltLow) */
/* 2080 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFTiltLow_joint1[42];
extern u16 dFTSamusAnimFTiltLow_joint2[32];
extern u16 dFTSamusAnimFTiltLow_joint4[32];
extern u16 dFTSamusAnimFTiltLow_joint5[138];
extern u16 dFTSamusAnimFTiltLow_joint6[48];
extern u16 dFTSamusAnimFTiltLow_joint7[32];
extern u16 dFTSamusAnimFTiltLow_joint8[10];
extern u16 dFTSamusAnimFTiltLow_joint9[8];
extern u16 dFTSamusAnimFTiltLow_joint11[8];
extern u16 dFTSamusAnimFTiltLow_joint12[138];
extern u16 dFTSamusAnimFTiltLow_joint14[54];
extern u16 dFTSamusAnimFTiltLow_joint15[88];
extern u16 dFTSamusAnimFTiltLow_joint17[24];
extern u16 dFTSamusAnimFTiltLow_joint19[82];
extern u16 dFTSamusAnimFTiltLow_joint20[116];
extern u16 dFTSamusAnimFTiltLow_joint22[54];
extern u16 dFTSamusAnimFTiltLow_joint23[88];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFTiltLow_joints[] = {
	(u32)dFTSamusAnimFTiltLow_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFTiltLow_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFTiltLow_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFTiltLow_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFTiltLow_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFTiltLow_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFTiltLow_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFTiltLow_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimFTiltLow_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFTiltLow_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFTiltLow_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFTiltLow_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFTiltLow_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFTiltLow_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFTiltLow_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFTiltLow_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimFTiltLow_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimFTiltLow_joint1[42] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 1600,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1072, -273,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 240, 70,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -367,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2309, -150,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 336, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 486, 249,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), -3401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -3216, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimFTiltLow_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 138, 2, -281, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -238, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimFTiltLow_joint4[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 223, -491, 0, -95, -10, 22,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 40, -580, 41, -76, 4, -6,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimFTiltLow_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 62, 114, -12, -231, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 618, -207, -365, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 74, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -25, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 323, -285, -47, 268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 329, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -188, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -220, -20, -18, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -126, 40, -23, -53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 339, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 256, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 123, -108, -130, 52, -295,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -378, -18, -744, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 120, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 468, 235,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 402, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -321, 82, -884, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -636, 74,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 143, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 359, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 468, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -561, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -252, 25,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 142, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 117, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 8, 114, -3, -231, 20,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFTiltLow_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -637, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1211, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1204, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1211, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1245, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -743, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -720, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -725, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFTiltLow_joint7[32] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 253, -72, 130,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -324, -28, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -20, 0, 101, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 10, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFTiltLow_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimFTiltLow_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimFTiltLow_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimFTiltLow_joint12[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, -94, -195, 34, -232, 223,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 7, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 91, 61, 476, 259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 173, 17, 731, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 387, -209,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -181, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 335, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 168, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -36, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -168, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 331, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 415, 66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -172, 68, -38, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 343, 12, 584, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 458, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 4, -92,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 297, -52, 530, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 45, 36, -63, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 44, -83, -77, -114, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 134, 46, -150, -56, -170, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 46, -195, -44, -232, -61,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFTiltLow_joint14[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1188, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1148, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1146, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), -1029,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1029,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -954, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -831, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -949, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -689, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFTiltLow_joint15[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -85, -27, -42, -389, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 11, 107, -267, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -294, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -512, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 97, 34, -316, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 93, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -123, 28,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -533, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -428, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 112, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 134, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -97, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -3, -21,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 165, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 138, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -50, -27, -24, -389, 38,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFTiltLow_joint17[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 32,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 440, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 454, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFTiltLow_joint19[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 64, -28, -4, -41, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 17, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -246, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 10, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 17, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 97, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 35, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 5, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -214, 26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -39, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 110, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -169, 7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -25, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -159, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -111, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, 35, -28, -3, -41, -2,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFTiltLow_joint20[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -70, 160, 23, -49, -109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -536, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -194, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 89, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 230, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -431, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 60, 185, 48, 177,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 161, 66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 381, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 78, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 32, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 406, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 464, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 99, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 162, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 23, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -49, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 423, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 234, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -8, 160, -1, -49, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFTiltLow_joint22[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 195,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 947, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1193, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 517, -446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 286, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 444, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimFTiltLow_joint23[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, -16, 193, -52, -212, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -13, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 78, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -9, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -167, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 63, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 60, 45, 74, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -95, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 52, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -212, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -77, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -137, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 65, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 193, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -124, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 133, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, 9, 193, 0, -212, 0,
	ftAnimEnd(),
};
