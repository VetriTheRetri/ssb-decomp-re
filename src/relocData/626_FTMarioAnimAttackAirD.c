/* AnimJoint data for relocData file 626 (FTMarioAnimAttackAirD) */
/* 3472 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTMarioAnimAttackAirD_joint1[30];
extern u16 dFTMarioAnimAttackAirD_joint2[50];
extern u16 dFTMarioAnimAttackAirD_joint3[68];
extern u16 dFTMarioAnimAttackAirD_joint5[98];
extern u16 dFTMarioAnimAttackAirD_joint6[194];
extern u16 dFTMarioAnimAttackAirD_joint7[72];
extern u16 dFTMarioAnimAttackAirD_joint8[12];
extern u16 dFTMarioAnimAttackAirD_joint9[8];
extern u16 dFTMarioAnimAttackAirD_joint11[56];
extern u16 dFTMarioAnimAttackAirD_joint12[162];
extern u16 dFTMarioAnimAttackAirD_joint13[56];
extern u16 dFTMarioAnimAttackAirD_joint14[56];
extern u16 dFTMarioAnimAttackAirD_joint16[10];
extern u16 dFTMarioAnimAttackAirD_joint17[150];
extern u16 dFTMarioAnimAttackAirD_joint19[104];
extern u16 dFTMarioAnimAttackAirD_joint21[120];
extern u16 dFTMarioAnimAttackAirD_joint22[164];
extern u16 dFTMarioAnimAttackAirD_joint24[92];
extern u16 dFTMarioAnimAttackAirD_joint25[184];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTMarioAnimAttackAirD_joints[] = {
	(u32)dFTMarioAnimAttackAirD_joint1, /* [0] joint 1 */
	(u32)dFTMarioAnimAttackAirD_joint2, /* [1] joint 2 */
	(u32)dFTMarioAnimAttackAirD_joint3, /* [2] joint 3 */
	(u32)dFTMarioAnimAttackAirD_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTMarioAnimAttackAirD_joint6, /* [5] joint 6 */
	(u32)dFTMarioAnimAttackAirD_joint7, /* [6] joint 7 */
	(u32)dFTMarioAnimAttackAirD_joint8, /* [7] joint 8 */
	(u32)dFTMarioAnimAttackAirD_joint9, /* [8] joint 9 */
	(u32)dFTMarioAnimAttackAirD_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTMarioAnimAttackAirD_joint12, /* [11] joint 12 */
	(u32)dFTMarioAnimAttackAirD_joint13, /* [12] joint 13 */
	(u32)dFTMarioAnimAttackAirD_joint14, /* [13] joint 14 */
	(u32)dFTMarioAnimAttackAirD_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTMarioAnimAttackAirD_joint17, /* [16] joint 17 */
	(u32)dFTMarioAnimAttackAirD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTMarioAnimAttackAirD_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTMarioAnimAttackAirD_joint22, /* [21] joint 22 */
	(u32)dFTMarioAnimAttackAirD_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTMarioAnimAttackAirD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTMarioAnimAttackAirD_joint1[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 268, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 580, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 554, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 536, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 11), 0, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTMarioAnimAttackAirD_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAZ), 4096,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 7), 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAZ, 2), 0, 3, 4096, 491,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 620,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 9650, 71,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 3), 5324,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 4), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 23), 4096,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTMarioAnimAttackAirD_joint3[68] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -30,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValT(FT_ANIM_TRAZ, 9), 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 7), -634, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -634, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 0, 90,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 0, 960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -45, 0, 290, 360, 498,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -34, 217, 374,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 11, 0, -75, 360, -130,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 8), 0, -320,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 8), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTMarioAnimAttackAirD_joint5[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 134, -8, 0, 45, 0, -27, -27, 21, -94, -7,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 0, 0, 40, -88, -111, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -365, 9, -397, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 477, 102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1027, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, -160, -69, -111, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 230, -240, 178, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -846, -511, 0, -526, -244, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -791, 2, -26, -1, 578, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -791, 34, -26, 0, 578, -21, 0, 0, -160, 39, -111, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 134, 92, 0, 2, 0, -57, 0, 0, -27, 116, -94, 14,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTMarioAnimAttackAirD_joint6[194] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 504, -127, -557, -38, -150, 149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -587, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 377, -245, 0, 299,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 13, -248, 448, 403,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 970, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -120, 42, -442, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -245, 202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 520, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 168, 752, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 556, 25, 92, 27, 786, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 629, -457,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 572, -238, 110, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 79, -35, -389, -266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 500, 240, -422, 153, -117, -468,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -278, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 560, -38, -81, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 424, 194, 134, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 950, 276, 99, -1, -552, -164,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -657, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 977, 21, 130, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -14, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 993, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 859, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -659, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -668, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 877, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 876, -74,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -153, 22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 789, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 542, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -88, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -559, -12,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 506, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 504, -1, -557, 2, -150, 3,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTMarioAnimAttackAirD_joint7[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -544, -119,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -893, -202,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1069, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -691, 502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 345,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -573,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, -547,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1094, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -511, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -305, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -679, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -679, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -544, 135,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTMarioAnimAttackAirD_joint8[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -625, 0, 0,
	ftAnimBlock(0, 39),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTMarioAnimAttackAirD_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, 0, 0,
	ftAnimBlock(0, 39),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTMarioAnimAttackAirD_joint11[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 9, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 53, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 189, 21, 64, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 189, -61, 64, -55, 0, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -117, -14, -215, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -107, 4, 0, 7, 0, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 0, 8,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTMarioAnimAttackAirD_joint12[162] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2941, 101, 533, 29, 3179, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 554, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3336, 313, 3559, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3670, 264, 3860, 222,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 3961, 37, 4059, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 483, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 723, 391,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3939, 104, 4023, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4170, 67, 1245, 416, 4224, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4075, 147, 1556, -19, 4180, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4465, 164, 1207, -150, 4767, 235,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1652, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4404, -250, 4652, -401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3963, -324, 3965, -452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3756, -137, 3747, -136,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 3602, -21, 3606, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1713, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1707, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3582, -17, 3598, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 3768, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 3689, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1646, -72, 3749, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 4754, 97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1058, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3870, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 4427, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4535, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 4576, 7, 4811, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4549, -26, 1074, 16, 4788, -23,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTMarioAnimAttackAirD_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -583, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1039, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1150, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -882, 362,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -424, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -816, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -757, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -894, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -752, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -583, 169,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTMarioAnimAttackAirD_joint14[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 625,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 1072,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1187,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 554,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), 0, -4, 0, 32,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 20), 625,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -112, -24, 758, 128,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 9,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -146, 16, 770, -108,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 110,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 29, 0, -154,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 625,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTMarioAnimAttackAirD_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1608, -804, 0, 71, 0, 35,
	ftAnimBlock(0, 39),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTMarioAnimAttackAirD_joint17[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 95, 15, 6, 6, -367, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 338, 25, 48, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -8, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -191, -435,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 356, -42, 59, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 253, -186, 242, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -16, -141, 235, -58, -785, -464,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 16, 20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 76, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 10, 12, -1114, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 132, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -9, -1086, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -37, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -727, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -730, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -705, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 132, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 94, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -38, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 28, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -807, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -480, 107,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 25, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 15, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 95, 0, 6, -8, -367, 112,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTMarioAnimAttackAirD_joint19[104] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 376, -45,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 143, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1222, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1067, -349,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 630, 18,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 277, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -135,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 479, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 376, -103,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTMarioAnimAttackAirD_joint21[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1337, -7, -1540, -12, 2050, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1608, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1519, 119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1859, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1823, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1414, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1670, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1410, -27, -1385, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1530, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1615, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1457, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1406, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1793, 205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1465, -1, 1817, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1004, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 2056, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1518, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1453, -45,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 965, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 864, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 692, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1151, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1239, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1311, 27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1498, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1337, 25, -1540, -41, 2050, -6,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTMarioAnimAttackAirD_joint22[164] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1520, -42, 1402, 33, 1161, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1118, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2043, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1783, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1913, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1851, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1163, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 840, -228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2095, 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1810, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1594, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1610, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1726, 60, 600, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1645, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 677, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 555, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 881, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1371, 211, 1437, -97,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1589, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1058, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 905, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1583, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1050, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1039, -26,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1577, -48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1200, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1049, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1073, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1482, -51,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1216, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1342, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1520, -37, 1402, 60, 1161, 112,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTMarioAnimAttackAirD_joint24[92] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 790, 23,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 1264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1249, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1050, -343,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, 4915, 4915,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 604, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 276, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -138,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 23), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 590, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 718, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 850, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, -60,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTMarioAnimAttackAirD_joint25[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 37, -165, 0, 189, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 90, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 344, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 478, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 388, -213, -13, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 52, -115, -239, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 158, 65, -488, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 99, 262,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 183, -48, -189, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -83, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 61, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -192, -108, 286, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 215, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -90, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -56, 40, -110, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -309, -236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -463, 24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 974, 161,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -593, -304,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1460, -85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, 115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1332, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -437, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -448, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1526, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1667, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1642, 100, 1284, -73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1076, 401,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 694, -274,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -490, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -216, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -663, 337,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -101, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 230, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, 97, -165, 50, 189, -41,
	ftAnimEnd(),
	0x0000, 0x0000,
};
