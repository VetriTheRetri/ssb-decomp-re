/* AnimJoint data for relocData file 1845 (FTYoshiAnimDamaged4) */
/* 3392 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged4_joint1[14];
extern u16 dFTYoshiAnimDamaged4_joint2[146];
extern u16 dFTYoshiAnimDamaged4_joint3[104];
extern u16 dFTYoshiAnimDamaged4_joint4[124];
extern u16 dFTYoshiAnimDamaged4_joint6[18];
extern u16 dFTYoshiAnimDamaged4_joint7[126];
extern u16 dFTYoshiAnimDamaged4_joint8[44];
extern u16 dFTYoshiAnimDamaged4_joint10[10];
extern u16 dFTYoshiAnimDamaged4_joint11[140];
extern u16 dFTYoshiAnimDamaged4_joint12[60];
extern u16 dFTYoshiAnimDamaged4_joint13[10];
extern u16 dFTYoshiAnimDamaged4_joint14[8];
extern u16 dFTYoshiAnimDamaged4_joint15[50];
extern u16 dFTYoshiAnimDamaged4_joint17[50];
extern u16 dFTYoshiAnimDamaged4_joint18[144];
extern u16 dFTYoshiAnimDamaged4_joint20[66];
extern u16 dFTYoshiAnimDamaged4_joint22[138];
extern u16 dFTYoshiAnimDamaged4_joint23[154];
extern u16 dFTYoshiAnimDamaged4_joint25[66];
extern u16 dFTYoshiAnimDamaged4_joint26[172];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamaged4_joints[] = {
	(u32)dFTYoshiAnimDamaged4_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamaged4_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamaged4_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamaged4_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamaged4_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamaged4_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamaged4_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamaged4_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamaged4_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamaged4_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamaged4_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamaged4_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamaged4_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamaged4_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTYoshiAnimDamaged4_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamaged4_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamaged4_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTYoshiAnimDamaged4_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamaged4_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTYoshiAnimDamaged4_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged4_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged4_joint2[146] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 51,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 79, 0, -25, 286, 79, -42, 74, -79, -678,
	ftAnimSetValBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 5), -248,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 164, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 58, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 501, 2,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 14, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -129, -1,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4851, 4851, 2919,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4511, 4511, 3391,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 19), 20, 288,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -154, -39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 99, 372,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 382, -50,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 148, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 33, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAY, 9), 67, -245,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -40, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 118, -53,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 0, 76, -89, -31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, -198,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 30, -6,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged4_joint3[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -175, -50,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -118, 39, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3389, 3389, 5980,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -434, 7,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 81, 24,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 7, 65,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 224, 24, 3907, 4079, 4409,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 59,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 356, -19,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -4, -26,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3967, 3967, 4366,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4120, 4167, 4455,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 449, 66,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -180, 87,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -130, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 16, -271, 0, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 131,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged4_joint4[124] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -179, -42,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 397, 197, 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4070, 4356,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -119, 69,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 95, 32,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 70, -13,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -432,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -361, -64,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -124, 3989, 3755, 4581,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -40, 10,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 3829, 4332,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -11, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -418, 23,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3782, 3414, 4562,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 3874, 3719, 4384,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 77, 10,
	ftAnimSetValBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 16), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -181, 40,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 126, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, -64,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -140, -15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 78, 139,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged4_joint6[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 357, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 544, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 0, -191,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged4_joint7[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1566, -77, -1597, -9, 1829, -196,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2023, -218, -1653, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1632, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1754, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1654, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1739, 13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1687, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2309, -260, -1665, 128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2589, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1395, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1314, 84, 1766, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2197, 256,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -905, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2610, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2920, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3256, -333, 2541, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3586, -249, 2876, 251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3755, -293, -902, 13, 3044, 290,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1344, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4703, -343, 3983, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4860, -109, 4149, 123,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -4962, 19, 4435, 41,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1412, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4935, 26, -1476, -63, 4473, 38,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamaged4_joint8[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -982, 194,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -551, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -722, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -987, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -935, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -651, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -658, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -712, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -749, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -764, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged4_joint10[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 24), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged4_joint11[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, -44, 1477, 11, -2019, -130,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1397, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1566, 28, -2149, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1464, 52, -1986, 76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1568, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2987, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1432, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1112, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1719, -220,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2244, -202,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1110, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 977, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2413, -180, -3128, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2976, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -3617, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 985, 1, -3678, -61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4183, -352,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1024, 166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3035, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -3460, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3843, -317, -4573, -298,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -4358, -273, -4842, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1277, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4641, -212, 1476, 43, -5041, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4888, -65, 1679, 40, -5164, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4970, -81, 1711, 32, -5044, 119,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged4_joint12[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -793, -39,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -833, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -819, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -748, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -721, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -563, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -684, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -696, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -985, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1090, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -536, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1002, -275,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged4_joint13[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged4_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -536, -893, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged4_joint15[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 317, 0, -178, 1, -57, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -145, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -34, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), 128, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -189, -152,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -28, 62,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -70, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -190, 85, 0, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 29,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged4_joint17[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 312, 1, -176, 0, -56, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 121, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -152, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -118, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -65, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -154, -215,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -16, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -153, 107, 0, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, -6,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged4_joint18[144] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2185, 245, -1512, -59, 1378, 302,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1900, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1571, 30, 1680, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1452, 74, 1774, 180,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1415, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1950, -94, 2040, 137,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2306, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2049, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 2108, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2352, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -2331, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1437, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1231, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2325, 53, -1178, 88, 2153, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2223, -270, -1054, 298, 2124, 321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2867, -283, -581, 430, 2796, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2791, -321, -193, 81, 2406, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3511, -432, -417, 124, 2886, 474,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3557, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 246, 3355, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 74, -4, 3428, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -7, -20, 3273, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3465, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3352, 121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3222, 129, 5, 12, 3194, -79,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged4_joint20[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 448, -98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 350, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -205,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 6, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 89, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 430, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1108, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 774, -554,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -387,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 294, 74,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged4_joint22[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 675, -125, 1596, -147, 2116, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2168, 207,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1488, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 549, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 610, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 425, -268, 2485, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2372, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 73, -157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 213, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1600, 73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1642, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 269, 41, 2327, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 204, -62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1875, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1646, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1778, 118,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 126, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -104, -374,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -621, -204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -512, 366, 1910, -83, 1935, -184,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1290, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 111, 304, 1506, -150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 95, -46, 1635, 45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1402, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 17, -54, 1285, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -11, 9, 1533, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 17, 1692, 159, 1335, -67,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged4_joint23[154] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1083, -260, 1645, 198, 1358, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 547, -124, 1902, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1356, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1505, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1288, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 574, 36, 1764, -107,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 687, 75, 1515, -204,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1315, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1252, 59,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 753, 48, 1257, -276,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 290, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1205, 53,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1356, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1378, 31,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 289, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 594, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1410, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1560, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1243, 402, 1643, 438,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2010, 615, 761, -47, 2438, 623,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 184, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2474, 203, 2890, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2417, -31, 2834, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 32, 32, -147, 2828, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -157, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2483, 208, 2809, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2828, 366, 2665, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3217, 388, 0, 157, 3062, 397,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged4_joint25[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 735, 204,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1070, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 988, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1028, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 863, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 398, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 247, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -123,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 790, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1022, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1046, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, -667,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTYoshiAnimDamaged4_joint26[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1589, 216, 265, 238, -329, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1372, 340, 503, 95, -44, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -909, 211, 455, -10, 430, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1053, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 487, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 324, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 258, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -956, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1062, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 464, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 421, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 15, -264,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -333, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1232, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1109, 71,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 285, -119, -240, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 240, 65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 245, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1025, 92,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -951, 31,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 298, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 249, -65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 118, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -137, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -891, 111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -700, -40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, -29, 53, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -24, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 238, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -810, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -938, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1354, -334, -273, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1607, -253, -89, -327, -228, 44,
	ftAnimEnd(),
	0x0000, 0x0000,
};
