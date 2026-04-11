/* AnimJoint data for relocData file 1356 (FTKirbyAnimItemThrowSmashB) */
/* 3120 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimItemThrowSmashB_joint1[112];
extern u16 dFTKirbyAnimItemThrowSmashB_joint2[32];
extern u16 dFTKirbyAnimItemThrowSmashB_joint3[78];
extern u16 dFTKirbyAnimItemThrowSmashB_joint5[106];
extern u16 dFTKirbyAnimItemThrowSmashB_joint6[196];
extern u16 dFTKirbyAnimItemThrowSmashB_joint7[14];
extern u16 dFTKirbyAnimItemThrowSmashB_joint9[98];
extern u16 dFTKirbyAnimItemThrowSmashB_joint10[198];
extern u16 dFTKirbyAnimItemThrowSmashB_joint11[16];
extern u16 dFTKirbyAnimItemThrowSmashB_joint13[10];
extern u16 dFTKirbyAnimItemThrowSmashB_joint14[142];
extern u16 dFTKirbyAnimItemThrowSmashB_joint16[56];
extern u16 dFTKirbyAnimItemThrowSmashB_joint18[138];
extern u16 dFTKirbyAnimItemThrowSmashB_joint19[160];
extern u16 dFTKirbyAnimItemThrowSmashB_joint21[160];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimItemThrowSmashB_joints[] = {
	(u32)dFTKirbyAnimItemThrowSmashB_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimItemThrowSmashB_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimItemThrowSmashB_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimItemThrowSmashB_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimItemThrowSmashB_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimItemThrowSmashB_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimItemThrowSmashB_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF02C3, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimItemThrowSmashB_joint1[112] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 840, 320, -480, -640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, -159, -480, 719,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 240, 1280,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 720, -799, 4096, 102, 4096, -409, 4096, 204,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 102, 3276, -409, 4505, 102,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 540, -960,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 480, -160,
	ftAnimSetValRateT(FT_ANIM_TRAZ | FT_ANIM_SCAZ, 2), 480, 319, 4300, -68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 480, 4300, 3276,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 480, 239, 480, -479, 4300, -68, 3276, 273, 4300, -68,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 660, 192, 120, -768, 4096, -81, 4096, 327, 4096, -81,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 600, -80, 0, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimItemThrowSmashB_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -804, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -804, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 0, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -268, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -268,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimItemThrowSmashB_joint3[78] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_SCAY), 0, 0, 0, 312, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -402, -29, 402, 29,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 10), 312, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -402, 29, 0, 33, 402, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 89, 104, 268, 22, 0, -33,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAY, 8), 268, -24, 312, -52, 4096, -148,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 89, -24,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 0, -14, 0, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 240, 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 0, 0, 312, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimItemThrowSmashB_joint5[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -357, -59, 178, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -60, -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, 59, 178, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -60, -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 0, 134, -178, -44, 0, 359,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 178, 89, 0, 44, 60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -180, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 357, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, -120, -60, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 357, -29, 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -120, -60, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 178, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -178, -180, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 0, -29, 0, 29, -60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimItemThrowSmashB_joint6[196] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 1449, -217, -498, 0, 1523,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -962, 684, -715, -121, 1523, 809,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1044, -22, -461, 127, 1618, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1032, -17,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -476, -12, 1519, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -485, 7, 1548, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -404, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1044, 135, 1618, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -557, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1379, -91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1648, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -477, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -388, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -767, -169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -780, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1622, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1454, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -455, -79,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -503, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -514, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -495, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1497, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1669, 116,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -604, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1079, -360, -376, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1324, -149, -335, -111, 1792, 77,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1377, 771, -599, -99, 1824, -761,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -246, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 217, 780, 270, -775,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 183, 109, 273, -28,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 435, 277, -189, 18, 212, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 737, 184, -209, -13, 83, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 66, -217, -7, 0, -83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimItemThrowSmashB_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimItemThrowSmashB_joint9[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 178, 29,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 180,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 178, -59,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 4), 180,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ, 2), 0, 89, -178, 44, -60, -239,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 60, -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 357, 35, 357, 53, 0, 360,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 8), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), -120,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 357, -32, 357, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 60, -60,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), -60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 3), 0, -59, 0, -59, 60, -160,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimItemThrowSmashB_joint10[198] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 335, 1391, -296, 1608, -35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1220, -29, 1608, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1094, -339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 711, -226,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 633, 13,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 16), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1081, -113, 1492, -90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 959, 113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1608, 285,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 668, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1220, 344, 711, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1649, 263, 425, -125, 1965, 73,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1683, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1747, -135, 460, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1378, -118, 272, -43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 508, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1510, 153, 2152, 327,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1684, 377, 2338, 349,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2266, 386, 580, 32, 2850, 340,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 555, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2566, 75, 3109, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2606, -3, 3129, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2560, -463, 3070, -422,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1679, -564, 564, -62, 2284, -490,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1679, 396, 2280, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 429, -53,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 457, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 225, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2224, 317, 2752, 332,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2323, 27, 3030, 101,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2370, 44, 227, -3, 3149, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 42, 217, -10, 3216, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimItemThrowSmashB_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimItemThrowSmashB_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimItemThrowSmashB_joint14[142] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 759, -302, 111, 233, -818,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1160, -316,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 737, 748, -190, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1475, 388, -264, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -264, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1515, 22, -1219, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -969, 277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1519, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1475, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1371, -285, -286, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 261, -473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, 0, -605, 290,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -287, -70, -388, 300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -324, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -41, -189, -4, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -177, -15, 206, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -189, -7, 223, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -75, 103, 50, -160,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -314, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -301, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 31, 60, -116, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -17, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 237, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, -1, 241, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 0, -302, -1, 233, -7,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimItemThrowSmashB_joint16[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 752,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 759, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 281, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimItemThrowSmashB_joint18[138] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -24, -176, -430, -99, -74,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -334, 301, -607, -626, -174, -175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 292, 303, -1429, -440, -451, -136,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -456, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 272, -8, -1488, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 275, 7, -1492, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 292, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1332, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -461, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -451, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 287, 163, -427, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 619, 500, -1043, -49, -864, -598,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1288, 344, -1430, -275, -1625, -338,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1308, 0, -1593, -103, -1541, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1651, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1290, -12, -1655, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1295, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1734, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1637, 17, -1699, 80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1418, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1462, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1625, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1703, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 2, -1431, -13, -1708, -4,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimItemThrowSmashB_joint19[160] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -55, 302, -148, 237, -149,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -6, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 153, -196, 87, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -90, -139, 138, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 138, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -127, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 315, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 59, -42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 225, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -45, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 127, -74,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 250, -32, 398, 391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -101, -100, 249, -70, 1007, 403,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, -78, 1205, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1179, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 108, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -75, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -86, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1194, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 966, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 132, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -104, 97, 243, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 108, 96, 226, 2, 434, -309,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 307, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 88, -27, 347, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 16, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 224, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 4, 302, -4, 233, 8,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimItemThrowSmashB_joint21[160] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x280E, 0xFAEE, 0xFF94, 0xF907, 0x0059, 0xF958, 0x0080, 0x4F00, 0x1000, 0x1000, 0x1000, 0x280D, 0x0007, 0xF995, 0xFFE6, 0xFA2F, 0xFFDD, 0x2003, 0x0001, 0xFA81, 0xFF62, 0x2003, 0x0001, 0xF9B0, 0xFF8C, 0x2003, 0x0003, 0xF995, 0x000F, 0x2003, 0x0001, 0xF9B0, 0x003B, 0x2803, 0x0004, 0xFACA, 0xFFC0, 0x0801, 0x0001, 0x200D, 0x0001, 0xF965, 0xFFCA, 0xF9E7, 0xFF89, 0x200D, 0x0002, 0xF914, 0xFFAB, 0xF90E, 0xFFE1, 0x200F, 0x0001, 0xFA6F, 0xFFC4, 0xF87E, 0xFFD3, 0xF902, 0x0092, 0x2805, 0x0002, 0xF8E6, 0x0019, 0x2803, 0x0005, 0xFA68, 0xFFF4, 0x2009, 0x0001, 0xFA33, 0x00B4, 0x2009, 0x0001, 0xFA6B, 0x0025, 0x2809, 0x0002, 0xFA72, 0xFFDE, 0x2005, 0x0001, 0xF8EC, 0xFFF6, 0x2805, 0x0002, 0xF895, 0xFFC8, 0x0801, 0x0001, 0x2009, 0x0001, 0xFA38, 0xFF4B, 0x200F, 0x0001, 0xFA4A, 0x0032, 0xF85E, 0x004F, 0xF906, 0xFF9F, 0x200F, 0x0001, 0xFACD, 0x0044, 0xF935, 0x0058, 0xF975, 0x0022, 0x2809, 0x0002, 0xF951, 0x0004, 0x2007, 0x0001, 0xFAD2, 0x000C, 0xF90F, 0xFFE8, 0x2807, 0x0004, 0xFAED, 0x0000, 0xF90F, 0xFFF9, 0x0801, 0x0001, 0x2009, 0x0001, 0xF954, 0x0000, 0x2009, 0x0002, 0xF953, 0x0000, 0x200F, 0x0001, 0xFAEE, 0x0000, 0xF907, 0xFFF9, 0xF954, 0x0000, 0x0000, 0x0000, 0x0000,
};
