/* AnimJoint data for relocData file 1417 (FTKirbyAnimPKFireAir) */
/* 3328 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimPKFireAir_joint1[106];
extern u16 dFTKirbyAnimPKFireAir_joint2[18];
extern u16 dFTKirbyAnimPKFireAir_joint3[36];
extern u16 dFTKirbyAnimPKFireAir_joint5[76];
extern u16 dFTKirbyAnimPKFireAir_joint6[248];
extern u16 dFTKirbyAnimPKFireAir_joint7[38];
extern u16 dFTKirbyAnimPKFireAir_joint9[60];
extern u16 dFTKirbyAnimPKFireAir_joint10[240];
extern u16 dFTKirbyAnimPKFireAir_joint11[38];
extern u16 dFTKirbyAnimPKFireAir_joint13[10];
extern u16 dFTKirbyAnimPKFireAir_joint14[174];
extern u16 dFTKirbyAnimPKFireAir_joint16[14];
extern u16 dFTKirbyAnimPKFireAir_joint18[184];
extern u16 dFTKirbyAnimPKFireAir_joint19[174];
extern u16 dFTKirbyAnimPKFireAir_joint21[14];
extern u16 dFTKirbyAnimPKFireAir_joint22[190];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimPKFireAir_joints[] = {
	(u32)dFTKirbyAnimPKFireAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimPKFireAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimPKFireAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimPKFireAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimPKFireAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimPKFireAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimPKFireAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimPKFireAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimPKFireAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimPKFireAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimPKFireAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimPKFireAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimPKFireAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimPKFireAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimPKFireAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimPKFireAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimPKFireAir_joint1[106] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 15), -480,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 30), 600,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, 4915, 3891,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 240, 4915, 2457, 4915,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3686, -61, 4915, 122, 3686, -61,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 144,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 168,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 192,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 216,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 240, 17,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 24, 240, -64, 4300, 20, 3686, -40, 4300, 20,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 3891, -20, 4505, 40, 3891, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 20), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimPKFireAir_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 20), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimPKFireAir_joint3[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -268, -41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 446,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 446, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 178, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 268,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimPKFireAir_joint5[76] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -150, -90, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -150, -90, 90,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 5), -536,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 80, 0, 48, -150, -128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -536, -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, 0, -150,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -32, 0, -32, -150, 40,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), -120, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -357, 26, 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 178,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimPKFireAir_joint6[248] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1040, 49, -995, 37, -287, -96,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -962, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1090, 164, -383, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1370, 228, -803, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1547, 54, -1205, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -78, -1016, -34, -1340, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1029, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1031, -311, -1121, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 654, -337, -808, 277,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 37, -94, -305, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1077, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1013, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -88, -93, -1059, 0, -143, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1115, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, 50, -240, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 11, 60, -544, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -29, -19, -1516, -163, -386, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, -355, -1443, 277, -489, 692,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -741, -226, -960, 221, 997, 632,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, 84, -1000, -8, 774, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -571, 35, -978, -7, 854, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -1096, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -409, 57, 699, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -456, 34, 720, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -340, 53, 588, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 483, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -290, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -265, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -228, 44,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 492, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -184, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 339, 61,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1105, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1021, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 497, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -91, -114,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 409, 78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1013, 42,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1006, 10, -195, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1001, 3, -259, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1036, 22, -999, 2, -283, -23,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimPKFireAir_joint7[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 421,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimPKFireAir_joint9[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -357, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 150, -90, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 150, -90, 90,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 536, 0, 0, -150,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 536, 268, 0, 0, -150,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 20), 120, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 357, -26, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -178,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimPKFireAir_joint10[240] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2644, -44, 609, 35, -1891, -90,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 642, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2689, -149, -1982, -242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2943, -221, -2376, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3132, -61, -2792, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3066, 77, 585, -37, -2930, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 574, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -2616, 300, -2703, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2260, 324, -2412, 263,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1732, 16, -2007, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 530, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 594, -15,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1715, 47, -1993, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1464, -45, -1854, -194,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 549, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 494, -250,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1616, -56, -2148, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 14, 91, -160, -1989, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, -449, 172, 434, -2089, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2476, -580, 960, 411, -2219, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2748, -93, 996, 4, -2452, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2663, -45, 969, 5, -2376, -47,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1017, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2838, -67, -2546, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2798, -30, -2532, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2898, -48, -2648, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -2986, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -2739, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1028, 10, -2736, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -2733, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1019, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3023, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -3551, -62,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2758, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -3409, -84,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3624, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -4230, -43,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1007, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1000, -4, -3476, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4253, -22, 999, -1, -3499, -23,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimPKFireAir_joint11[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -862, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 427,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 37), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimPKFireAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 60),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimPKFireAir_joint14[174] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -5, -302, 0, 237, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 125, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -333, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 74, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 234, 85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 88, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -138, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -386, -71,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -557, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -163, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 376, 22, -313, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 280, 9, -195, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 395, 16, -535, -1, -305, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), -393, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 313, 4, -198, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 404, 11, -275, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 337, 1, -182, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 407, 12, -236, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 403, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -112, 55,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 378, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 217, -38,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -52, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 267, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 182, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 290, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -366, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -302, -1,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 239, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 4, -302, 0, 237, -1,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimPKFireAir_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimPKFireAir_joint18[184] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, 2, -158, 9, -2864, 6,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -2412, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), -69, -23, 4096, 40, 4096, 40, 4096, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 131, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 147, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -82, -162,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2455, -55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2748, 38,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -81, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -811, -109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -286, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -494, -96, -2646, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2475, 16,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -863, -49, -480, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1045, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -517, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2455, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -2729, -81,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -27, 4096, -27, 4096, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1041, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -711, 89,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -493, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -125, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -622, 82, -2807, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -2857, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -319, -5,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -127, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -156, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2859, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2863, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -322, -2, -158, -2, -2864, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimPKFireAir_joint19[174] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 13, 300, -4, 233, 1,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 308, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 121, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -82, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -151, -51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 321, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 476, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 84, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -138, -43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -206, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, -85, 538, 21, -163, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 551, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -376, -22, -313, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -280, -9, -195, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -395, -16, -305, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -313, -2, -198, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -400, -11, -270, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -337, -3, -182, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -407, -12, -236, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -403, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -169, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -57, 61,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -383, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -222, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 556, 4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 322, -3,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, 34, 10, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), -294, -5, 235, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 320, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 301, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -297, -3, 300, 0, 233, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimPKFireAir_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 59), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimPKFireAir_joint22[190] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, -9, -1766, 13, -1259, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -810, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), -1538, 22, 4096, 40, 4096, 40, 4096, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), -1476, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1452, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1691, -162,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1139, 38,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1527, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -797, 109,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1895, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2103, -96, -1038, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -867, 14,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -745, 49, -2089, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -563, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -2114, 11,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -847, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -951, -71,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -27, 4096, -27, 4096, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -567, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -923, -108,
	ftAnimBlock(0, 7),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 3686, 3686,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1047, -102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1434, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2103, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1816, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1032, -101,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1289, 6,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1424, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1263, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1809, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1769, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 3, -1766, 2, -1259, 4,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
