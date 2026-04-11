/* AnimJoint data for relocData file 1848 (FTYoshiAnimDamageAir) */
/* 3104 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamageAir_joint1[10];
extern u16 dFTYoshiAnimDamageAir_joint2[102];
extern u16 dFTYoshiAnimDamageAir_joint3[118];
extern u16 dFTYoshiAnimDamageAir_joint4[130];
extern u16 dFTYoshiAnimDamageAir_joint6[22];
extern u16 dFTYoshiAnimDamageAir_joint7[138];
extern u16 dFTYoshiAnimDamageAir_joint8[64];
extern u16 dFTYoshiAnimDamageAir_joint10[8];
extern u16 dFTYoshiAnimDamageAir_joint11[138];
extern u16 dFTYoshiAnimDamageAir_joint12[72];
extern u16 dFTYoshiAnimDamageAir_joint13[8];
extern u16 dFTYoshiAnimDamageAir_joint14[8];
extern u16 dFTYoshiAnimDamageAir_joint15[88];
extern u16 dFTYoshiAnimDamageAir_joint16[26];
extern u16 dFTYoshiAnimDamageAir_joint17[34];
extern u16 dFTYoshiAnimDamageAir_joint18[110];
extern u16 dFTYoshiAnimDamageAir_joint20[56];
extern u16 dFTYoshiAnimDamageAir_joint21[104];
extern u16 dFTYoshiAnimDamageAir_joint22[34];
extern u16 dFTYoshiAnimDamageAir_joint23[92];
extern u16 dFTYoshiAnimDamageAir_joint25[138];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamageAir_joints[] = {
	(u32)dFTYoshiAnimDamageAir_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamageAir_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamageAir_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamageAir_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamageAir_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamageAir_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamageAir_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamageAir_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamageAir_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamageAir_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamageAir_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamageAir_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamageAir_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamageAir_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDamageAir_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimDamageAir_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamageAir_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamageAir_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimDamageAir_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimDamageAir_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamageAir_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF02D4, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamageAir_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 672, 2,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTYoshiAnimDamageAir_joint2[102] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_SCAZ), 0, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -660, -55, 78, 162, 22, -19, 4096, -361,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 0, -182, 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 2), 7188,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 3), -130, -105, 3686, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1004, -4, 534, 38,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 34, -233,
	ftAnimSetValT(FT_ANIM_TRAZ, 2), -198,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 13,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAY), -3000,
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 3153, -1086,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -246, -1,
	ftAnimSetValT(FT_ANIM_TRAZ, 17), -191,
	ftAnimSetValT(FT_ANIM_TRAY, 21), 0,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 4423,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 4096,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 526, -264,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -1066, -4,
	ftAnimSetValT(FT_ANIM_SCAX, 19), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 17), 4096,
	ftAnimBlock(0, 13),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, -30, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -268, 320, 0, -234, 0, 125,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 4), 63,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDamageAir_joint3[118] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 172,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -61, -140, -16, -223,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 841, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -395, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -552, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1099, 4096, 3240, 3223,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1082, 3814, 3656, 2936,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAZ), 848,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 3), 4549, 1328,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 1336, 4169, 3991,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -366, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 1164, 4055, 4094,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 1347, 4640, 4491,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4177, 3973,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -543, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1218,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1300,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -547, 0,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 1259,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 9), 1254,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1078, -148,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -96, 192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -44, -393,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTYoshiAnimDamageAir_joint4[130] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -24, -193, 76, 4, -192, -95, 4096, 812,
	ftAnimSetValBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAX, 2), 213, 183, 5160, 1364,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -671, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -472, 72,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4911, 3963,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4836, 3191,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), -828,
	ftAnimSetValRateT(FT_ANIM_SCAX, 2), 3932, -1547,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4409, 3393,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -638, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4302, 4217,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -369, 1,
	ftAnimSetTargetRateBlock(FT_ANIM_SCAX), -21,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 4096, 325,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3692, 4579,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -631, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3856, 4334,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -357, 5,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096, 4096,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -349, 212,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -106, -85,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 446, 174,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 25,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamageAir_joint6[22] = {
	ftAnimSetVal(FT_ANIM_ROTX), 446,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 670,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 562,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 117, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDamageAir_joint7[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, -74, 9, -130, 2508, 119,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -167, -59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -259, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2628, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2894, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -240, 34, 2842, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -194, 50, -97, 28, 3032, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -335, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -183, 12, 2799, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, 27, 3071, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -128, -6, 2974, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -100, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3096, 70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 3132, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -363, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -451, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -109, -9, 3128, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -228, -130, 2977, -124,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -449, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -358, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -351, 176, -413, -117, 2850, -277,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -359, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4, 131, 2421, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -88, 36, 2551, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 69, 158, -390, -30, 2316, -235,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamageAir_joint8[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -530, -220,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -750, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -978, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -812, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -934, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -788, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -841, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -848, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -908, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -736, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamageAir_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamageAir_joint11[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1528, -79, 1452, -5, 559, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 537, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1448, -1, 1447, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1524, -70, 1532, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1308, 20, 1396, -32, 369, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1565, 59, 1468, 45, 625, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1415, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1427, -40, 265, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1484, 41, 513, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1544, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, 23, 399, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1478, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 473, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 466, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 360, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1491, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1515, -37,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1545, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1376, -140,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1446, -162, 293, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1018, -89, 367, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1218, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1191, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, 173, 1011, 100, 590, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1538, 132, 1218, 207, 707, 117,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamageAir_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -339, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -315, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -343, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -629, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -250, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -496, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -383, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -396, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -395, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -267, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -312, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -579, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -664, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -64,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamageAir_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 330, 893, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTYoshiAnimDamageAir_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 1608, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamageAir_joint15[88] = {
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAY | FT_ANIM_SCAZ), -251, 248, 20, -87, 4096, -3814, 4096, 1706,
	ftAnimSetValBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValT(FT_ANIM_ROTZ, 3), -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 170, 45, -164, -13,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 2840, 21, 5308, 109,
	ftAnimSetValRateT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4412, 990, 4096, -2811,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 330, -62, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAY, 3), 4096, -1392,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 1), 4341,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 17), 4096, 4096,
	ftAnimBlock(0, 9),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 8, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 226, -123, 66, 138,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 1), -11,
	ftAnimSetValT(FT_ANIM_ROTZ, 3), -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 428, 194, 0, -88,
	ftAnimBlock(0, 2),
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTYoshiAnimDamageAir_joint16[26] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -214, 23, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 138, -162, -55,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -139, -54, -18,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -360, 61, -101,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -278, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTYoshiAnimDamageAir_joint17[34] = {
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 3067, 4628,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 2324, 5119,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 3084, 4915,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 3891, 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 20), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 5480,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 17), 4096,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamageAir_joint18[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 12, -35, -39, -82, 246, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 95, 168, -301, -122, 407, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 313, 108, -367, 61, 304, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 235, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 272, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -178, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -236, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -198, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 245, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 259, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 214, -14,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -195, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -94, -13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 259, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -19, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 191, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 91, 60, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 163, 151, -101, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 164, -130, -35, -235, -133,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamageAir_joint20[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 151, 206,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 468, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 518, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 338, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 395, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 406, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 499, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 371, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 407, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -60,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimDamageAir_joint21[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 71, 61, -1727, 93, -1085, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 106, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1550, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1083, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1272, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 89, 98, -1104, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 302, 128, -1148, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 345, 24, -1574, -9, -1033, 43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 379, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1514, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1060, -16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -1048, -14,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 390, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 491, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 682, 5, -1516, -102, -1067, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -156, -336, -1674, 452,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1028, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1193, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1442, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -466, -309, -980, 694, -1451, -9,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamageAir_joint22[34] = {
	ftAnimSetVal(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_SCAZ), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 3364, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 2362, 4792,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 3184, 4505,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY, 1), 3853, 4096,
	ftAnimSetValT(FT_ANIM_SCAY, 20), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 1), 5262,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 17), 4096,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamageAir_joint23[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 109, 58, 235, -157, 519,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 308, -93, 803, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 225, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 239, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, -160, 980, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -10, 0, 1103, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 279, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 253, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, 0, 1106, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -11, 0, 1129, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 253, -5, -13, 33, 1136, -50,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 61, -257, 213, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 834, -255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 516, -534,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -389, 130, -83, -235, -752,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamageAir_joint25[138] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 368, -118,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 250, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 261, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 6, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, 347,
	ftAnimEnd(),
	0x200E, 0xF9EC, 0xFEB1, 0xFFFB, 0xFFA0, 0x0263, 0xFFA1, 0x2805, 0x0002, 0xFF2D, 0x002C, 0x2809, 0x0003, 0x0181, 0x0043, 0x2003, 0x0001, 0xF89C, 0xFF76, 0x2003, 0x0001, 0xF8D7, 0x007E, 0x2007, 0x0001, 0xF999, 0x007B, 0xFFF4, 0x0083, 0x2805, 0x0004, 0x0034, 0xFFFF, 0x200B, 0x0001, 0xF9CE, 0x001E, 0x01EA, 0x003D, 0x2809, 0x0006, 0x020B, 0x0002, 0x2803, 0x000F, 0xF9E6, 0xFFFF, 0x0801, 0x0003, 0x2005, 0x0001, 0x0032, 0xFFFE, 0x2805, 0x000C, 0x001A, 0x0010, 0x0801, 0x0002, 0x2009, 0x0001, 0x020E, 0x0001, 0x2809, 0x000B, 0x0221, 0xFFEC, 0x0801, 0x0008, 0x2003, 0x0001, 0xF9E4, 0x0033, 0x2007, 0x0001, 0xFA4D, 0x00F4, 0x003D, 0x0037, 0x2805, 0x0002, 0x0176, 0x00F5, 0x2003, 0x0001, 0xFBCD, 0x0110, 0x200B, 0x0001, 0xFC6E, 0xFFE0, 0x01ED, 0xFF3E, 0x200F, 0x0001, 0xFB8C, 0xFF1F, 0x0273, 0x00FD, 0x009C, 0xFEAF, 0x0000, 0x0000, 0x0000,
};
