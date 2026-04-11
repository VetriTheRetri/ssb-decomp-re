/* AnimJoint data for relocData file 428 (FTKirbyAnimPose2) */
/* 2192 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimPose2_joint1[88];
extern u16 dFTKirbyAnimPose2_joint2[108];
extern u16 dFTKirbyAnimPose2_joint3[118];
extern u16 dFTKirbyAnimPose2_joint5[112];
extern u16 dFTKirbyAnimPose2_joint6[68];
extern u16 dFTKirbyAnimPose2_joint7[34];
extern u16 dFTKirbyAnimPose2_joint9[112];
extern u16 dFTKirbyAnimPose2_joint10[68];
extern u16 dFTKirbyAnimPose2_joint11[24];
extern u16 dFTKirbyAnimPose2_joint13[10];
extern u16 dFTKirbyAnimPose2_joint14[68];
extern u16 dFTKirbyAnimPose2_joint16[14];
extern u16 dFTKirbyAnimPose2_joint18[68];
extern u16 dFTKirbyAnimPose2_joint19[68];
extern u16 dFTKirbyAnimPose2_joint21[92];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimPose2_joints[] = {
	(u32)dFTKirbyAnimPose2_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimPose2_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimPose2_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimPose2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimPose2_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimPose2_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimPose2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimPose2_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimPose2_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimPose2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimPose2_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimPose2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimPose2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimPose2_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimPose2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01FF, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimPose2_joint1[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -13, 0, 29, 0, 45, -1880, -1343, 2046, 2397, -3034, -5337,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -41, -20, 89, 44, 137, 68, -1007, 4617, 2398, -2936, -3762, 2439,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -726, -5015, 1312, 589, -2424, 1715,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 89, 137,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -41, 89, 137,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -2261, 3090, 2545, -2545, -3333, 1840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 46, 12530, 676, -6354, -1964, 1957,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 871, -607, 957, 4621, -2844, -5708,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -105, 3240, 1831, 328, -3391, -2670,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1681, 1039, -3512,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimPose2_joint2[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 119, -35, 532, 162, 289, 0, 86, 0, -298, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAZ), 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -107, -113, 220, -156, 0, -144, 0, -346, -312, -53, 0, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -107, -65, 220, -10, 0, -48, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 1), -239, 53, 198, -110, -96, 0, 0, 0, -311, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 119, 0, -10, 0, 48, 0, 0, -312, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 0, 32, 178, 145, 0, -85, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 64, 0, 291, -89, -171, 0, 0, 0, -311, 1248, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimPose2_joint3[118] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, -29, 0, 14, 0, 0, 312, 0, 0, 0, 4096, -45, 4096, 182, 4096, -45,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, -44, 311, -12, 0, 170,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 0, 0, -11, 0, 42, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 1), 0, 0, 308,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, -31, 0, 0, 0, 44, 311, 12, 0, -170,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -62, -71, 0, 35, 0, 0, 0, 0, 311, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -143, -27, 71, 0, 0, 0, 312, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -117, 103, 0, -73, 0, -72, 0, 0, 311, 1151, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 64, -74, -145, 0, 599, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimPose2_joint5[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 59, 0, 29, 0, 39, 0, 0, 0, 39,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimPose2_joint6[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1292, 629, -1265, 786, -2164, -649,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -663, 139, -478, 80, -2813, -764,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1013, 397, -1104, -341, -3692, -384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, 180, -1161, -162, -3581, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -652, -310, -1429, 337, -4370, -924,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -487, -204, -485, -8, -5430, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1061, -806, -1446, -522, -5328, 635,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2100, -1039, -1530, -83, -4159, 1168,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimPose2_joint7[34] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -420,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -420,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 206,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -263, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -261, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 255,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimPose2_joint9[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 59, 0, -40, 0, 0, 0, -40,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimPose2_joint10[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1003, 272, -2829, -51, 2655, 196,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -731, 154, -2881, -73, 2852, 656,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -694, -263, -2976, 32, 3969, 1050,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1259, 35, -2816, -57, 4952, 806,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -622, -67, -3090, 79, 5581, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1394, -117, -2656, 143, 4886, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -857, 99, -2803, -19, 5335, 406,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1196, -338, -2696, 107, 5699, 364,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimPose2_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -655, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 649,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimPose2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 7),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimPose2_joint14[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1877, 326, -1325, 337, 1802, -415,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1551, 65, -988, 70, 1386, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1747, -15, -1185, -3, 2294, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1582, -72, -995, -70, 1335, -245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1891, -94, -1325, -134, 1802, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1772, 14, -1264, -25, 2063, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1862, -329, -1377, 430, 2155, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2431, -568, -402, 974, 2731, 575,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimPose2_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimPose2_joint18[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1306, -92, 1559, 285, -1644, 158,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1214, 88, 1845, -176, -1485, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1484, 151, 1206, 52, -1144, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1518, -99, 1949, 176, -1560, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1284, 21, 1559, -290, -1644, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1510, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1560, 16, 1369, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1316, 131, 1687, 672,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1822, 505, 2713, 1025, -1904, -394,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimPose2_joint19[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1327, -1, 1325, -1, -1414, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1329, -406, 1323, 10, -1418, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2140, -259, 1347, -91, -797, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1849, 232, 1141, -103, -2190, -621,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1674, -257, 1139, -25, -2039, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2364, -608, 1090, -376, -1990, -360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2891, -1015, 385, -446, -2761, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4395, -1504, 196, -188, -2380, 380,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimPose2_joint21[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, 405,
	ftAnimEnd(),
	0x280E, 0x013C, 0xFED4, 0xFFC4, 0xFF7D, 0xFFD9, 0x0135, 0x4F00, 0x1000, 0x1000, 0x1000, 0x200F, 0x0001, 0x000F, 0x00B7, 0xFF41, 0x0114, 0x010D, 0x00D9, 0x200F, 0x0001, 0x02AA, 0xFF9B, 0x01ED, 0x00EB, 0x018A, 0xFFF1, 0x200F, 0x0001, 0xFF44, 0xFEF2, 0x0117, 0xFEEC, 0x00EF, 0xFF27, 0x200F, 0x0001, 0x008E, 0x003C, 0xFFC4, 0x01E3, 0xFFD9, 0xFEB5, 0x200F, 0x0001, 0xFFBE, 0xFD19, 0x04DF, 0x03B5, 0xFE58, 0xFE2A, 0x200F, 0x0001, 0xFAC0, 0xFCE6, 0x072E, 0x03E1, 0xFC2C, 0xFD9C, 0x200F, 0x0001, 0xF988, 0xFEC9, 0x0CA3, 0x0574, 0xF98F, 0xFD63, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
