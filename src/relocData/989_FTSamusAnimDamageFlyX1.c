/* AnimJoint data for relocData file 989 (FTSamusAnimDamageFlyX1) */
/* 2192 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamageFlyX1_joint1[60];
extern u16 dFTSamusAnimDamageFlyX1_joint2[48];
extern u16 dFTSamusAnimDamageFlyX1_joint4[58];
extern u16 dFTSamusAnimDamageFlyX1_joint5[138];
extern u16 dFTSamusAnimDamageFlyX1_joint6[48];
extern u16 dFTSamusAnimDamageFlyX1_joint7[44];
extern u16 dFTSamusAnimDamageFlyX1_joint8[10];
extern u16 dFTSamusAnimDamageFlyX1_joint9[38];
extern u16 dFTSamusAnimDamageFlyX1_joint11[10];
extern u16 dFTSamusAnimDamageFlyX1_joint12[124];
extern u16 dFTSamusAnimDamageFlyX1_joint14[40];
extern u16 dFTSamusAnimDamageFlyX1_joint15[86];
extern u16 dFTSamusAnimDamageFlyX1_joint17[48];
extern u16 dFTSamusAnimDamageFlyX1_joint19[68];
extern u16 dFTSamusAnimDamageFlyX1_joint20[96];
extern u16 dFTSamusAnimDamageFlyX1_joint22[134];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamageFlyX1_joints[] = {
	(u32)dFTSamusAnimDamageFlyX1_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamageFlyX1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamageFlyX1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamageFlyX1_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamageFlyX1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamageFlyX1_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamageFlyX1_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamageFlyX1_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamageFlyX1_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamageFlyX1_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamageFlyX1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamageFlyX1_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamageFlyX1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamageFlyX1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamageFlyX1_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamageFlyX1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01F7, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimDamageFlyX1_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1600, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1709, 196, 0, -49,
	ftAnimSetValT(FT_ANIM_ROTX, 24), -72,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 7), 0, 0, -49, -54,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 7), 1796,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 16), 0, 0, -156, -45,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 16), 1769,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_TRAY), -18, -341,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -536, 0, 0, 901, -168,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimDamageFlyX1_joint2[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 29), -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, -48, 0, 0, 2, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -386, -21, 3, 0, 99, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 3, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -386, 99,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -22, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -65,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -860, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimDamageFlyX1_joint4[58] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 508, -48, 1, 71, 0, -28, -5, 21, -150, 34, 139, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -389, -24, 573, 13, -226, 0, 21, 3, 34, 46, -102, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -457, 1, 661, 0, -267, 3, 4, 20, -16, -18, -65, 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 425, 417, 240, 74, -14, 57,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamageFlyX1_joint5[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2745, -325, 116, -331, 2989, -640,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -356, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3070, -161, 2349, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3068, -78, 2435, 176,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -3480, 227, 3384, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -459, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -494, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2998, 437, -677, -104, 3414, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -714, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2605, 181, 3251, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2634, 6, 3351, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3280, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -2452, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -704, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -727, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3267, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 3275, 54,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2445, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -2537, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2634, -347, 3351, 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3233, -501, -744, 45, 3880, 382,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -433, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3637, -257, 4116, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3814, -45, 3941, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3839, -24, -411, 21, 3919, -22,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamageFlyX1_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 294,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -445, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -699, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -232, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -203, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -327, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -878, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, -39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamageFlyX1_joint7[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 701, 0, 0, 424, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 29), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 101, -181, 0, 35, 0, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -751, -32, 287, 1, -420, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -653, 36, -67,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 35, -13, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimDamageFlyX1_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamageFlyX1_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 480, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 40, 1, 64, 0, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 325, 14, 517, 22, 366, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 325, -14, 517, -10, 366, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 22, 303, 12,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamageFlyX1_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 29),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamageFlyX1_joint12[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -132, -128, 250, -215, -246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -74, -20, 122, 147, -461, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, 102, 166, 48, -437, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 632, 155,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 401, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -86, 286,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 276, 318,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 814, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 739, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 838, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 369, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 290, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, 21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 785, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 844, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 883, -12,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, 33, 763, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 445, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 859, -111, 673, -211,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 129, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 340, -350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 395, -34, -27, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 377, -3, -141, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -86, 387, 10, -180, -39,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamageFlyX1_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -939, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -907, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -999, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1004, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1223, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1235, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1202, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1178, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamageFlyX1_joint15[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, -66, -27, -32, -391, -406,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), -86, -4, 43, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -356, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, 103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -194, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -90, -2, 43, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -60, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -97, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -192, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -346, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -28, 44, -420, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 169, 48, -551, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -115, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -72, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 198, 29, -54, 18, -552, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamageFlyX1_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 474, -101,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 373, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 690, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 558, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 328, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 600, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 738, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1003, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1023, 19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamageFlyX1_joint19[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -76, 96, -28, 30, -41, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -2, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -24, 8, 414, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -11, 11, 448, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), 557, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 5, -16,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 88, 6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 551, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 247, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -20, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -212, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, -39, 91, 3, 206, -41,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamageFlyX1_joint20[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -167, 160, -68, -49, -402,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -92, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -81, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -452, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -867, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -893, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -946, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -91, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -201, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -82, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -40, 42,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -925, 67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -295, 378,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 29, 113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 336, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -187, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 304, 188, 289, -24, 161, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 350, 45, 288, -1, 191, 29,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamageFlyX1_joint22[134] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -438,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 326, 278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 1085, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1073, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1040, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1013, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 588, -438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimEnd(),
	0x0000, 0x200E, 0xFA46, 0xFF2E, 0xF8F6, 0x0102, 0x0572, 0x0354, 0x200F, 0x0001, 0xF974, 0xFFA1, 0xF9F9, 0x0082, 0x08C7, 0x01AE, 0x200F, 0x0001, 0xF987, 0x0006, 0xF9FB, 0x0000, 0x08CF, 0xFFFF, 0x2805, 0x000F, 0xF9E2, 0x0008, 0x2803, 0x0015, 0xF991, 0xFFF9, 0x2009, 0x0009, 0x0814, 0xFFFE, 0x2009, 0x0001, 0x0812, 0xFFFF, 0x2809, 0x000D, 0x07FD, 0xFFD9, 0x0801, 0x0005, 0x2005, 0x0001, 0xF9EB, 0x0008, 0x2805, 0x000A, 0xF9B8, 0xFFE9, 0x0801, 0x0005, 0x2003, 0x0001, 0xF988, 0xFFEE, 0x2803, 0x0003, 0xF97F, 0x003C, 0x0801, 0x0001, 0x2009, 0x0001, 0x07C8, 0xFFC5, 0x2809, 0x0002, 0x074C, 0xFFD8, 0x0801, 0x0001, 0x2003, 0x0001, 0xF9CC, 0x0034, 0x200F, 0x0001, 0xF9E8, 0x001B, 0xF9AA, 0xFFF2, 0x0734, 0xFFE8, 0x0000, 0x0000, 0x0000,
};
