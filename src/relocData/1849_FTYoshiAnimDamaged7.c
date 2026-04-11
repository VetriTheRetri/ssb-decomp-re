/* AnimJoint data for relocData file 1849 (FTYoshiAnimDamaged7) */
/* 3504 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTYoshiAnimDamaged7_joint1[14];
extern u16 dFTYoshiAnimDamaged7_joint2[90];
extern u16 dFTYoshiAnimDamaged7_joint3[122];
extern u16 dFTYoshiAnimDamaged7_joint4[146];
extern u16 dFTYoshiAnimDamaged7_joint6[24];
extern u16 dFTYoshiAnimDamaged7_joint7[150];
extern u16 dFTYoshiAnimDamaged7_joint8[68];
extern u16 dFTYoshiAnimDamaged7_joint10[10];
extern u16 dFTYoshiAnimDamaged7_joint11[136];
extern u16 dFTYoshiAnimDamaged7_joint12[72];
extern u16 dFTYoshiAnimDamaged7_joint13[44];
extern u16 dFTYoshiAnimDamaged7_joint14[8];
extern u16 dFTYoshiAnimDamaged7_joint15[90];
extern u16 dFTYoshiAnimDamaged7_joint16[60];
extern u16 dFTYoshiAnimDamaged7_joint17[22];
extern u16 dFTYoshiAnimDamaged7_joint18[132];
extern u16 dFTYoshiAnimDamaged7_joint20[64];
extern u16 dFTYoshiAnimDamaged7_joint21[148];
extern u16 dFTYoshiAnimDamaged7_joint22[22];
extern u16 dFTYoshiAnimDamaged7_joint23[106];
extern u16 dFTYoshiAnimDamaged7_joint25[172];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTYoshiAnimDamaged7_joints[] = {
	(u32)dFTYoshiAnimDamaged7_joint1, /* [0] joint 1 */
	(u32)dFTYoshiAnimDamaged7_joint2, /* [1] joint 2 */
	(u32)dFTYoshiAnimDamaged7_joint3, /* [2] joint 3 */
	(u32)dFTYoshiAnimDamaged7_joint4, /* [3] joint 4 */
	(u32)dFTYoshiAnimDamaged7_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTYoshiAnimDamaged7_joint7, /* [6] joint 7 */
	(u32)dFTYoshiAnimDamaged7_joint8, /* [7] joint 8 */
	(u32)dFTYoshiAnimDamaged7_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTYoshiAnimDamaged7_joint11, /* [10] joint 11 */
	(u32)dFTYoshiAnimDamaged7_joint12, /* [11] joint 12 */
	(u32)dFTYoshiAnimDamaged7_joint13, /* [12] joint 13 */
	(u32)dFTYoshiAnimDamaged7_joint14, /* [13] joint 14 */
	(u32)dFTYoshiAnimDamaged7_joint15, /* [14] joint 15 */
	(u32)dFTYoshiAnimDamaged7_joint16, /* [15] joint 16 */
	(u32)dFTYoshiAnimDamaged7_joint17, /* [16] joint 17 */
	(u32)dFTYoshiAnimDamaged7_joint18, /* [17] joint 18 */
	(u32)dFTYoshiAnimDamaged7_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTYoshiAnimDamaged7_joint21, /* [20] joint 21 */
	(u32)dFTYoshiAnimDamaged7_joint22, /* [21] joint 22 */
	(u32)dFTYoshiAnimDamaged7_joint23, /* [22] joint 23 */
	(u32)dFTYoshiAnimDamaged7_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0330, /* [25] END */
};

/* Joint 1 */
u16 dFTYoshiAnimDamaged7_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 672, 2, 4096, 4096, 4096,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTYoshiAnimDamaged7_joint2[90] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), -759, 127, -176, -532,
	ftAnimSetValBlock(FT_ANIM_TRAY | FT_ANIM_SCAY), 0, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -235, 171,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -479, 4,
	ftAnimSetValT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY, 2), 5937,
	ftAnimSetValT(FT_ANIM_SCAY, 4), 2260,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -57, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 146, 104,
	ftAnimBlock(0, 2),
	ftAnimSetValT(FT_ANIM_SCAY, 2), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -462, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 16), -37, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY, 22), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 264, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 13), 266, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAZ, 7), 0, -68, 63, 276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -268, 86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTYoshiAnimDamaged7_joint3[122] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1055, 0, 0, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1110, 3385, 3611,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 867, 3763, 2902,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 1036, 3835, 3769,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 988, -47,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4219, 4878,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -105, -8, -59, -59,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 78, 0,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 2589, 6160,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4699, 4611,
	ftAnimSetValT(FT_ANIM_ROTZ, 2), 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -290, -14,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 77, 0,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 39, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 46, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 19, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -157, -9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -44, 81, 0, -42,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 0, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTYoshiAnimDamaged7_joint4[146] = {
	ftAnimSetValAfter(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_SCAY), 4096, 1088,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAZ), -239, 0, 0, 4096,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAY, 5), 3839, -399,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 1), -275, 3776,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 1), -202, 4123,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAZ, 1), -358, 3688,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -382, 13,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 1), 4096,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -10, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 122, 108,
	ftAnimSetValBlockT(FT_ANIM_SCAZ, 1), 4747,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -152, 126,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 9109, 3345,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -224, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -89, 3,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4601, 3849,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 254, -1,
	ftAnimSetValBlockT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -374, 3,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 22), 4096, 4096,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 225, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -41, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -349, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, 100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 96, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -73, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 69, 136,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 43, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 446, 9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -1, 0, 86,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTYoshiAnimDamaged7_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 409, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 764, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 689, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 86, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 255, 119,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTYoshiAnimDamaged7_joint7[150] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 49, 28, -218, 9, -921, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -172, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 77, -41, -964, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -33, 0, -705, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, -17, -1109, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -69, -216, -641, 475,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -355, -40, -156, 14, -159, 261,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -92, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -150, 108, -117, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -328, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 117, 233,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 323, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -18, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 86, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -343, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -507, -22,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 253, -19,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 79, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -456, -110,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -547, -99, 246, 24,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1010, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 437, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -562, -36, 420, -223,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -449, 71, -539, -445,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -638, 420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -168, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 66, 234, -387, 61, -900, -360,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTYoshiAnimDamaged7_joint8[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -400, -45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -416, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1118, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -493, 527,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -375, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -627, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -639, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -794, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -748, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -721, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTYoshiAnimDamaged7_joint10[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), -332,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTYoshiAnimDamaged7_joint11[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1502, 43, 1417, 1, 535, 109,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1625, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1474, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1593, 29, 642, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1893, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1136, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1504, -36, 1525, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1981, 119, 1402, 7, 1553, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2157, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1520, 17, 1707, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1678, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1437, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2137, -20, 1457, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 1802, -76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1466, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1669, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1733, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1713, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1078, -158,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1738, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1616, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1441, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1300, -82,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 895, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1542, -74, 1220, -80, 708, -187,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTYoshiAnimDamaged7_joint12[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -204, -129,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -334, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -548, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -260, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -656, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -861, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -475, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -520, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -615, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -627, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -560, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, -20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTYoshiAnimDamaged7_joint13[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -117, 931, 0, -266, -109,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 963, -72, -361, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 104, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 203, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -117, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 902, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 22), 965, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 330, 74, 893, -45, 0, 53,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTYoshiAnimDamaged7_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1072, 1608, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTYoshiAnimDamaged7_joint15[90] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 89, 4096, 4096,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 0, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -52, 3254, 3856,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -171, 2685, 3883,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -258, 3051, 3957,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -301, 3886, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -312, 5039, 4116,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), -306, 6449, 4220,
	ftAnimSetValT(FT_ANIM_SCAZ, 2), 4833,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY, 1), -288, 8456,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_SCAY, 1), -253, 7071,
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -253,
	ftAnimSetValT(FT_ANIM_ROTX, 2), -299,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAY | FT_ANIM_SCAZ, 19), 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -370,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -416,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -413,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), -353,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -270,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -85,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 428,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTYoshiAnimDamaged7_joint16[60] = {
	ftAnimSetVal(FT_ANIM_ROTX), 96,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 40,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -19,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -28,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -32,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -26,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -5,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 26,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 28,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 9,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -28,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -82,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -117,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -138,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -200,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -252,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -271,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -278,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTYoshiAnimDamaged7_joint17[22] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1949,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 3), 3571, 1174,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 3), 7935, 4573,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 3), 4096, -3477,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 21), 4096,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTYoshiAnimDamaged7_joint18[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 6, -1, -139, 7, 377, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -76, -41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -241, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 336, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 173, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 253, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 604, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -110, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 37, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, 125, -243, -59, 490, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 364, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -361, -52, 641, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -349, 8, 657, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 423, -61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -140, 36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 370, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 393, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 364, -69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 74, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, -38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 296, -147,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -109, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -80, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 139, 82, 90, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 238, 93, -96, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 327, 89, -130, -49, -235, -139,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTYoshiAnimDamaged7_joint20[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 188, -82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 353, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 190, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 306, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 519, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 622, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 723, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 739, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 502, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 239, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 336, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTYoshiAnimDamaged7_joint21[148] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1702, 26, -5, 32, 359, 107,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 30, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1656, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 467, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, -156,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -60, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 93, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1750, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2185, -27,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -232, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -225, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -131, 11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2211, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2157, 50,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 92, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 53, -36,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -116, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 223, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2089, 108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1732, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -9, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -166, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -141, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -368, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 304, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1875, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2109, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2074, 34, -627, -259, 156, -147,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTYoshiAnimDamaged7_joint22[22] = {
	ftAnimSetValRate(FT_ANIM_SCAX), 4096, -1730,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 3), 3353, 996,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 2), 7092, 6353,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX, 4), 4096, -4253,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 21), 4096,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTYoshiAnimDamaged7_joint23[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, -49, 65, -16, 225, -164,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -83, 51, -37, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 61, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -195, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -185, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 278, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 572, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -28, 27, -11, -6, 562, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -39, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 30, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 637, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 571, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 569, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 432, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -38, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -174, -99,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 319, -142,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -112, -191,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -291, -76, 25, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -36, 130, 104, -235, -123,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTYoshiAnimDamaged7_joint25[172] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 131, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 207, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 547, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 457, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 542, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 540, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 458, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 555, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 613, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 347, -265,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0012, 0x0023, 0xF961, 0xFFE7, 0x079F, 0x0051, 0x2807, 0x0005, 0x006B, 0xFFF2, 0xF92F, 0xFFC8, 0x2009, 0x0001, 0x07F0, 0x0029, 0x2009, 0x0001, 0x07F2, 0x0068, 0x2009, 0x0001, 0x08C2, 0x0041, 0x2009, 0x0001, 0x0874, 0xFF58, 0x2009, 0x0001, 0x0770, 0xFF38, 0x200F, 0x0001, 0x0068, 0xFFF5, 0xF8FE, 0xFFDF, 0x06E4, 0xFF41, 0x2805, 0x0005, 0xF90E, 0x000A, 0x2803, 0x0006, 0x009E, 0xFFFA, 0x2009, 0x0001, 0x05F2, 0x0012, 0x2009, 0x0001, 0x070A, 0x0093, 0x2009, 0x0002, 0x073F, 0x001E, 0x2009, 0x0001, 0x0755, 0x0014, 0x2809, 0x000E, 0x0788, 0x0009, 0x2005, 0x0001, 0xF918, 0x0009, 0x2805, 0x000D, 0xF8F7, 0xFFEF, 0x2003, 0x0001, 0x009A, 0xFFFE, 0x2003, 0x000C, 0x0157, 0x004B, 0x200F, 0x0001, 0x01B8, 0x008F, 0xF8DC, 0xFFD1, 0x079F, 0x001B, 0x280B, 0x0003, 0x032B, 0xFF63, 0x07D8, 0xFF84, 0x2005, 0x0002, 0xF813, 0xFFB0, 0x2005, 0x0001, 0xF7F7, 0xFF99, 0x200F, 0x0001, 0x01D4, 0xFEA9, 0xF744, 0xFF4E, 0x06E5, 0xFF0D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
