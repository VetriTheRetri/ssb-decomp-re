/* AnimJoint data for relocData file 1399 (FTKirbyAnimChargePunchStartGround) */
/* 1040 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargePunchStartGround_joint1[26];
extern u16 dFTKirbyAnimChargePunchStartGround_joint2[14];
extern u16 dFTKirbyAnimChargePunchStartGround_joint3[18];
extern u16 dFTKirbyAnimChargePunchStartGround_joint5[34];
extern u16 dFTKirbyAnimChargePunchStartGround_joint6[72];
extern u16 dFTKirbyAnimChargePunchStartGround_joint7[14];
extern u16 dFTKirbyAnimChargePunchStartGround_joint9[36];
extern u16 dFTKirbyAnimChargePunchStartGround_joint10[54];
extern u16 dFTKirbyAnimChargePunchStartGround_joint11[8];
extern u16 dFTKirbyAnimChargePunchStartGround_joint13[10];
extern u16 dFTKirbyAnimChargePunchStartGround_joint14[36];
extern u16 dFTKirbyAnimChargePunchStartGround_joint16[14];
extern u16 dFTKirbyAnimChargePunchStartGround_joint18[52];
extern u16 dFTKirbyAnimChargePunchStartGround_joint19[28];
extern u16 dFTKirbyAnimChargePunchStartGround_joint21[14];
extern u16 dFTKirbyAnimChargePunchStartGround_joint22[46];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargePunchStartGround_joints[] = {
	(u32)dFTKirbyAnimChargePunchStartGround_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargePunchStartGround_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargePunchStartGround_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargePunchStartGround_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargePunchStartGround_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargePunchStartGround_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargePunchStartGround_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimChargePunchStartGround_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimChargePunchStartGround_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -120, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, -119, -240, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimChargePunchStartGround_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimChargePunchStartGround_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -178, -8, -178, -8,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimChargePunchStartGround_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -357, -17, 223, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -180, -29, -60, -89, -60, -149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -30, 74, -90, -14, -150, -44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimChargePunchStartGround_joint6[72] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -127, 1829, 74, 1608, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1703, 206,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 2291, 22,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -931, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1450, -397,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2042, -305,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2011, 295,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2721, 430,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2338, -380, 2289, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3330, -370, 2231, -56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3156, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3545, -215, 2176, -54, 3290, 133,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimChargePunchStartGround_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimChargePunchStartGround_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 114, -268, -19, -268, -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 59, 0, -119, 0, 149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 60, 160, -120, -120, 150, 160,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimChargePunchStartGround_joint10[54] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 40, 217, 31, 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -50, -49,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -457, 107, 377, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -339, 18, 428, 152,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -466, -77, 1027, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -132, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -576, -110, 1109, 81, -198, -138,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimChargePunchStartGround_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimChargePunchStartGround_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargePunchStartGround_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 23, -302, 0, 237, -41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -264, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 545, 221, -461, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 782, 190, -598, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 927, 145, -244, 20, -666, -68,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargePunchStartGround_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimChargePunchStartGround_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 0, 1785, 8, -1704, 36,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2078, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1962, -30, -1419, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1998, -120, -1368, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2202, -403, 2237, 73, -1136, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2805, -384, 2224, -58, -514, 396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2971, -165, 2121, -102, -343, 171,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargePunchStartGround_joint19[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -7, 302, -29, 233, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 3, -3, 13, -17, 337, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -3, 0, -13, 368, 30,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargePunchStartGround_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimChargePunchStartGround_joint22[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -9, -1785, 0, -1708, 47,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1342, -82, -2046, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1479, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1617, -160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1447, -90, -2107, -40, -1800, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1524, -76, -2128, -20, -1920, -119,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
