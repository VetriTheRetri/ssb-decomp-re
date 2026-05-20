/* AnimJoint data for relocData file 389 (FTDonkeyAnimIntro) */
/* 3088 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimIntro_joint1[26];
extern u16 dFTDonkeyAnimIntro_joint2[50];
extern u16 dFTDonkeyAnimIntro_joint3[10];
extern u16 dFTDonkeyAnimIntro_joint5[94];
extern u16 dFTDonkeyAnimIntro_joint6[124];
extern u16 dFTDonkeyAnimIntro_joint7[56];
extern u16 dFTDonkeyAnimIntro_joint8[116];
extern u16 dFTDonkeyAnimIntro_joint9[10];
extern u16 dFTDonkeyAnimIntro_joint11[24];
extern u16 dFTDonkeyAnimIntro_joint12[128];
extern u16 dFTDonkeyAnimIntro_joint13[56];
extern u16 dFTDonkeyAnimIntro_joint14[136];
extern u16 dFTDonkeyAnimIntro_joint15[8];
extern u16 dFTDonkeyAnimIntro_joint17[168];
extern u16 dFTDonkeyAnimIntro_joint18[112];
extern u16 dFTDonkeyAnimIntro_joint20[40];
extern u16 dFTDonkeyAnimIntro_joint22[92];
extern u16 dFTDonkeyAnimIntro_joint23[94];
extern u16 dFTDonkeyAnimIntro_joint25[40];
extern u16 dFTDonkeyAnimIntro_joint26[108];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTDonkeyAnimIntro_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTDonkeyAnimIntro_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimIntro_joint1[26] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -3600, -9600,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 1, -102, 25, 10800,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 90), -3600, -9600,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 2532, 240,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 276,
	ftAnimSetValRateT(FT_ANIM_TRAY, 55), 1389, -423,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 55), 2067,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimIntro_joint2[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 101), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 90), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -296, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -262, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -47, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -47,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 65), -1, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 65), 168, 6,
	ftAnimBlock(0, 55),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimIntro_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -257, -28, 131, 0, -214, -154,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimIntro_joint5[94] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 791,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 73, -78, 0, 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 90), 791, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 639, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 639, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 639, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 649,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 650,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 649,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 651,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 651,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 651,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 639,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 651,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 639,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimIntro_joint6[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1632, 0, -1225, 0, 1458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -1632, 0, -1225, 0, 1458, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1632, -25, -1225, 4, 1458, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1145, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1804, -111, 1579, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1905, 70, 1506, -286,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 359, -405,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1662, 359, -1003, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1729, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1187, 266,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1292, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 196, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 229, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 248, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1294, 2, -1762, -39, 453, 137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1806, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 60), -1286, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 524, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 526, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 50), 524, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1807, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 46), -1807, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 0, -1806, 1, 526, 2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimIntro_joint7[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -727, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1128, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -451, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimIntro_joint8[116] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -308, 165, 702, 15, 17,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -825,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 90), -825, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 90), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1137, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 1023, 4096, 1023, 4096, 1023,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 8192, 1089, 8192, 851, 8192, 2047,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 72), -1137,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 7404, 7197, 9518,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 7880, 165, 7880, 308, 7880, -969,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 8353, 8579, 6806,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 7548, -610, 7548, 542,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 7548,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6490, 6433, 7959,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 6983, 5, 6983, -527,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 6983,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6965, 7230, 6373,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 6496, -11, 6496, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 6496,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6226, 5887, 6598,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5872, 5872, 5872,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 5872, 5872, 5872,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimIntro_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 393, 144, 74, 0, 1354, 213,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimIntro_joint11[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -452,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -206, 75, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 90), -452, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -681,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), -443,
	ftAnimSetValT(FT_ANIM_ROTX, 68), -443,
	ftAnimBlock(0, 58),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimIntro_joint12[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 276, 0, 384, 0, 3208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), 276, 0, 384, 0, 3207, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 276, 21, 384, 4, 3208, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 456, 337, 446, 76, 3377, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 993, 557, 547, -62, 3809, 417,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1572, 445, 321, -121, 4212, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1885, 368, 304, -34, 4392, 246,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2669, 245, 62, -162, 4969, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2799, 76, -72, -50, 5093, 188,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -64, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2817, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5346, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5437, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 5437, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -63, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 58), -63, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2817, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), 2817, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5437, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 52), 5437, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2817, 0, -63, 0, 5437, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimIntro_joint13[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -826, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), -826, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -826, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1114, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 239,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -414, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -226, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -328, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 53), -207, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -207, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimIntro_joint14[136] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, 0, 0,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2162, 2162, 2162,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 90), 893, 6, 0, 1, 0, 4,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 90), 2162, 2162, 2162,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 2162, 1023, 2162, 1023, 2162, 1023,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1490, 33, 103, 37, 433, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1162, -4, 296, 2, 205, -2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 6258, 1089, 6258, 851, 6258, 2047,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 72), 1162, 296, 205,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5470, 5264, 7585,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5946, 165, 5946, 308, 5946, -969,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 6420, 6645, 4873,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 5615, -610, 5615, 542,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 5615,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4556, 4499, 6025,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 5049, 5, 5049, -527,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 5049,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 5031, 5296, 4439,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 5), 4562, -11, 4562, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 5), 4562,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4293, 3953, 4664,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 3938, 3938, 3938,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 3938, 3938, 3938,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimIntro_joint15[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimBlock(0, 160),
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimIntro_joint17[168] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -404,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -440,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 3), -404,
	ftAnimBlock(0, 1),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimIntro_joint18[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -278, 0, -14, 0, -196, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 90), -278, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -14, 0, -196, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -14, -31, -196, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -545, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -240, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -272, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -90, 36,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -573, -23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -838, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -266, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -431, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -60, 20, -887, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -909, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -46, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -431, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 49), -431, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -909, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 46), -905, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -48, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -48, 0, -431, 0, -905, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimIntro_joint20[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 651, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), 651, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 651, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 701, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 587, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 343, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), 343, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 343, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimIntro_joint22[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, 0, 0, 0, 105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -4, 0, 0, 0, 105, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -5, 0, -15, 105, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 76, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 26, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -99, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -91, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -57, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 40, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -15, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 19, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 57), 19, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -15, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -19, 0,
	ftAnimBlock(0, 40),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -57, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -57, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 0, -57, 0, 19, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimIntro_joint23[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, 0, 189, 0, -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 89), -160, 0, 189, 0, -727, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -160, -10, 189, 6, -727, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -347, -60, 290, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -704, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -780, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1350, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -400, -41, 242, -42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -421, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 206, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1353, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -1354, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -420, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), -434, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 46), 195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -434, 0, 194, 0, -1354, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimIntro_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1071, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 89), 1071, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1071, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 532, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 496, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 675, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 56), 676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 675, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimIntro_joint26[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, 0, -179, 0, 127, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 90), 127, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 89), -70, 0, -179, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -69, 12, -179, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -164, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 52, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 124, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 15, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 201, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 82, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), 138, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 211, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), 203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 57), 6, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 138, 0,
	ftAnimBlock(0, 31),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 204, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 208, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 208, 0, 138, 0, 6, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
