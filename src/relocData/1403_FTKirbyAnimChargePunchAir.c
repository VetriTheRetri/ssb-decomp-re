/* AnimJoint data for relocData file 1403 (FTKirbyAnimChargePunchAir) */
/* 1152 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargePunchAir_joint1[22];
extern u16 dFTKirbyAnimChargePunchAir_joint2[14];
extern u16 dFTKirbyAnimChargePunchAir_joint3[28];
extern u16 dFTKirbyAnimChargePunchAir_joint5[32];
extern u16 dFTKirbyAnimChargePunchAir_joint6[50];
extern u16 dFTKirbyAnimChargePunchAir_joint7[16];
extern u16 dFTKirbyAnimChargePunchAir_joint9[84];
extern u16 dFTKirbyAnimChargePunchAir_joint10[92];
extern u16 dFTKirbyAnimChargePunchAir_joint11[16];
extern u16 dFTKirbyAnimChargePunchAir_joint13[12];
extern u16 dFTKirbyAnimChargePunchAir_joint14[30];
extern u16 dFTKirbyAnimChargePunchAir_joint16[14];
extern u16 dFTKirbyAnimChargePunchAir_joint18[36];
extern u16 dFTKirbyAnimChargePunchAir_joint19[30];
extern u16 dFTKirbyAnimChargePunchAir_joint21[14];
extern u16 dFTKirbyAnimChargePunchAir_joint22[42];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargePunchAir_joints[] = {
	(u32)dFTKirbyAnimChargePunchAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargePunchAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargePunchAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargePunchAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargePunchAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargePunchAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargePunchAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargePunchAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargePunchAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargePunchAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargePunchAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargePunchAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargePunchAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargePunchAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargePunchAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimChargePunchAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimChargePunchAir_joint1[22] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, -119, -240, -59,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 12), -240, 274,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), 600,
	ftAnimLoop(0x6800, -42),
};

/* Joint 2 */
u16 dFTKirbyAnimChargePunchAir_joint2[14] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 3 */
u16 dFTKirbyAnimChargePunchAir_joint3[28] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -178, -22, -178, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), -178, 31, -178, 38, 4096, 117, 4096, -58, 4096, -58,
	ftAnimLoop(0x6800, -54),
};

/* Joint 5 */
u16 dFTKirbyAnimChargePunchAir_joint5[32] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -357, -17, 223, 2, -30, 29, -90, -14, -150, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), -357, 51, 223, -15, -30, -68, -150, 171,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 12), -90,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimChargePunchAir_joint6[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1937, -70, -568, 6, 1681, 43,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -659, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -1817, 156, 1483, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1645, 120, 1315, -115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1788, -137, 1495, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1905, -77, 1626, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1942, -36, -566, 93, 1687, 61,
	ftAnimLoop(0x6800, -96),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimChargePunchAir_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimChargePunchAir_joint9[84] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 114, -268, -19, -268, -6, 60, 160, -120, -120, 150, 160,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -268, -268,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1608, 268,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, 180, -90, 120, 120, -180,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 150, 120, -60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 60,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 180, -59, 30, 119, 120, 299,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 3216, 201, -268, 67, -268, 67,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -299, 0, -179, 210, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 30, -120, -60, -240, 180, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 60, 400, -120, -80, 150, -320,
	ftAnimLoop(0x6800, -166),
};

/* Joint 10 */
u16 dFTKirbyAnimChargePunchAir_joint10[92] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -578, -103, 1111, -94, -200, -268,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 897, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -682, -230, -468, -444,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1039, -395, -1089, -683,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1474, -204, -1835, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1448, 27, 935, 45, -2115, -325,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1149, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1206, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2791, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2946, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -3469, -69,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1185, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1064, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1157, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -860, 289, -3444, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -578, 281, 1112, 47, -3417, 26,
	ftAnimLoop(0x6800, -180),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimChargePunchAir_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimChargePunchAir_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargePunchAir_joint14[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 927, 35, -244, 17, -666, -13,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 968, -34, -234, -9, -691, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 927, -40, -244, -10, -666, 25,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargePunchAir_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTKirbyAnimChargePunchAir_joint18[36] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -2971, -19, -1095, -20, -343, 12, 4096, 40, 4096, 40, 4096, 40,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -3033, 45, -1116, 18, -283, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2971, 61, -1095, 21, -343, -59,
	ftAnimLoop(0x6800, -70),
};

/* Joint 19 */
u16 dFTKirbyAnimChargePunchAir_joint19[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -13, 0, -14, 372, 34,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -9, 9, -9, 8, 365, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 9, 0, 9, 372, 6,
	ftAnimLoop(0x6800, -56),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargePunchAir_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 22 */
u16 dFTKirbyAnimChargePunchAir_joint22[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2134, 32, 1397, -18, 1886, -11, 4096, 40, 4096, 40, 4096, 40,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 12), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 2123, 5, 1403, -2, 1875, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2134, 10, 1397, -6, 1886, 10,
	ftAnimLoop(0x6800, -70),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
