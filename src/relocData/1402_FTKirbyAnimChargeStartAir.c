/* AnimJoint data for relocData file 1402 (FTKirbyAnimChargeStartAir) */
/* 1152 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimChargeStartAir_joint1[26];
extern u16 dFTKirbyAnimChargeStartAir_joint2[14];
extern u16 dFTKirbyAnimChargeStartAir_joint3[18];
extern u16 dFTKirbyAnimChargeStartAir_joint5[34];
extern u16 dFTKirbyAnimChargeStartAir_joint6[76];
extern u16 dFTKirbyAnimChargeStartAir_joint7[16];
extern u16 dFTKirbyAnimChargeStartAir_joint9[38];
extern u16 dFTKirbyAnimChargeStartAir_joint10[76];
extern u16 dFTKirbyAnimChargeStartAir_joint11[16];
extern u16 dFTKirbyAnimChargeStartAir_joint13[10];
extern u16 dFTKirbyAnimChargeStartAir_joint14[36];
extern u16 dFTKirbyAnimChargeStartAir_joint16[14];
extern u16 dFTKirbyAnimChargeStartAir_joint18[58];
extern u16 dFTKirbyAnimChargeStartAir_joint19[38];
extern u16 dFTKirbyAnimChargeStartAir_joint21[8];
extern u16 dFTKirbyAnimChargeStartAir_joint22[54];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimChargeStartAir_joints[] = {
	(u32)dFTKirbyAnimChargeStartAir_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimChargeStartAir_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimChargeStartAir_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimChargeStartAir_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimChargeStartAir_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimChargeStartAir_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimChargeStartAir_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimChargeStartAir_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimChargeStartAir_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimChargeStartAir_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimChargeStartAir_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimChargeStartAir_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimChargeStartAir_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimChargeStartAir_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimChargeStartAir_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTKirbyAnimChargeStartAir_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimChargeStartAir_joint1[26] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), -120, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 840,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, -119, -240, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimChargeStartAir_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, 13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimChargeStartAir_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), -178, -22, -178, -8,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimChargeStartAir_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 178, -120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -357, -17, 223, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -90, 89, -60, 29, -60, -149,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -30, 29, -90, -14, -150, -44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimChargeStartAir_joint6[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2644, -55, -609, -71, -1891, -31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -759, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2589, 323, -1923, -515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3292, 269, -2922, -612,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3051, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3127, -188, -640, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -590, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2915, -183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2370, -619,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2893, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -683, -28, -2510, 588,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1521, -545, -646, 57, -1716, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1279, -242, -568, 78, -1535, 181,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimChargeStartAir_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimChargeStartAir_joint9[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -178, 120, -120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, -59, 0, 149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 114, -268, -19, -268, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 60, 160, -120, -120, 150, 160,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimChargeStartAir_joint10[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 572, 29, 609, 61, -1891, 16,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 601, 775, 670, 90, -1874, 734,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2122, 914, 789, -21, -421, 818,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 532, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2430, 208, -238, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2539, 59, -229, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2550, -339, 569, 85, -295, -377,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1860, -682, 702, -10, -984, -654,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1184, -415, 548, -102, -1604, -412,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1029, -154, 496, -51, -1809, -204,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimChargeStartAir_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimChargeStartAir_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimChargeStartAir_joint14[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 297, 36, -300, 0, 233, -41,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -268, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 759, 119, -462, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 874, 83, -598, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 927, 52, -244, 23, -666, -68,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimChargeStartAir_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimChargeStartAir_joint18[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -27, -158, -5, -2867, 40,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -885, -263,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 40, 4096, 40, 4096, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -231, -115, -2533, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -159, -2380, 219,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -534, 18, -1955, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1193, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1345, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1362, -17, -512, 21, -1951, 3,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimChargeStartAir_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 47, 300, -28, 233, -10,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 13, -18, 337, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 31, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 14, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -14, 0, -13, 368, 30,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimChargeStartAir_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimChargeStartAir_joint22[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 322, -53, 158, 21, 349, 6,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 213, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 216, -12,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 40, 4096, 40, 4096, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 99, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 167, 87,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 410, 126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 525, 115, 210, -5, 274, 17,
	ftAnimEnd(),
};
