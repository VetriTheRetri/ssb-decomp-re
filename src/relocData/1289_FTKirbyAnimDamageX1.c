/* AnimJoint data for relocData file 1289 (FTKirbyAnimDamageX1) */
/* 1696 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDamageX1_joint1[72];
extern u16 dFTKirbyAnimDamageX1_joint2[10];
extern u16 dFTKirbyAnimDamageX1_joint3[42];
extern u16 dFTKirbyAnimDamageX1_joint5[54];
extern u16 dFTKirbyAnimDamageX1_joint6[100];
extern u16 dFTKirbyAnimDamageX1_joint7[16];
extern u16 dFTKirbyAnimDamageX1_joint9[54];
extern u16 dFTKirbyAnimDamageX1_joint10[92];
extern u16 dFTKirbyAnimDamageX1_joint11[16];
extern u16 dFTKirbyAnimDamageX1_joint13[10];
extern u16 dFTKirbyAnimDamageX1_joint14[76];
extern u16 dFTKirbyAnimDamageX1_joint16[16];
extern u16 dFTKirbyAnimDamageX1_joint18[72];
extern u16 dFTKirbyAnimDamageX1_joint19[72];
extern u16 dFTKirbyAnimDamageX1_joint21[102];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimDamageX1_joints[] = {
	(u32)dFTKirbyAnimDamageX1_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDamageX1_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDamageX1_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDamageX1_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimDamageX1_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimDamageX1_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDamageX1_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimDamageX1_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimDamageX1_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDamageX1_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimDamageX1_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimDamageX1_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimDamageX1_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimDamageX1_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimDamageX1_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF017D, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDamageX1_joint1[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 600, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 720, 59, -300, -359,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 2), 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 660, -213, -360, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 1), 5324,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 3), 2867,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 3), 4505, 4505,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 5), 4505,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 4), 4505, 3072,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 480, -120, -240, 720,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 600, 0, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDamageX1_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimDamageX1_joint3[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 1), 89, 22, 89, 11, -60, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ, 7), 178, 19, 89, -9, -60, 43,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 268, -44, 0, -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimDamageX1_joint5[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -178, -44, 0, 11, -60, -59, -60, -59, -120, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), -357, 16, -60, 26, -180, 26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), 89, -60,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -60, 120, -30, 120, -90, 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimDamageX1_joint6[100] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -1099, -217, -970, 0, 353,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -408, -1188, -500, 353, 74,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 181, -1218, -15, 148, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 49, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1143, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 25, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 225, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -41, -95,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -477, -648,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1179, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1036, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 301, 822,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1870, 1046, -1437, -595,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2395, 271, -1275, -175, -1669, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 17, -1387, -112, -1608, 60,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimDamageX1_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimDamageX1_joint9[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 178, 33, 0, -11, 120, 119, 0, -59, -120, -119,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 268, -16, -60, -53, -120, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX, 7), -89, 120,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 120, -240, -60, 120, -60, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDamageX1_joint10[92] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 1073, 1391, -866, 1608, 334,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1877, 467, 524, -438, 1942, 70,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 3072,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 9), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1739, -116, 513, -15, 1750, -149,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1452, -48, 449, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1562, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1464, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1417, 27, 405, 28, 1389, -69,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 716, 352,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1506, 382, 1325, 257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2181, -342, 1905, 28,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 821, -688, 1212, 337, 1382, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -17, 1391, 178, 1608, 225,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimDamageX1_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimDamageX1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDamageX1_joint14[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1584, 168, -1305, 57, -1371, -258,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1092, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1753, 74, -1629, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1733, 34, -1693, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2086, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 2252, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2293, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2143, -217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2119, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1754, 276,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1850, -257, -1108, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1629, -132, -1224, -98, -1474, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1584, -44, -1305, -81, -1371, 102,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimDamageX1_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTKirbyAnimDamageX1_joint18[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, -52, -176, -85, -96, 227,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -264, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -487, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 130, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 181, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 509, -200,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -351, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -250, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -623, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -357, 47,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 26, 238, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -197, 28, -9, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, 48, -176, 20, -96, -87,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimDamageX1_joint19[72] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, -98, 302, -130, 237, -258,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -62, 57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 156, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -20, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -44, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -41, 52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -46, 30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 163, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 284, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 34, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, 33, 157, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 25, 302, 18, 233, 75,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimDamageX1_joint21[102] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x0135, 0x0045, 0x00B0, 0x00C3, 0xFFA0, 0x014F, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0003, 0x018C, 0xFFB7, 0x2805, 0x0004, 0x0187, 0xFFCC, 0x2009, 0x0001, 0x00EE, 0x00C7, 0x2009, 0x0001, 0x012E, 0x0023, 0x2809, 0x0005, 0x00C5, 0xFFEA, 0x0801, 0x0001, 0x2003, 0x0001, 0x0125, 0xFFA5, 0x2803, 0x0006, 0x00F7, 0x003D, 0x2005, 0x0001, 0x014B, 0xFFDC, 0x2805, 0x0004, 0x0106, 0xFFC9, 0x0801, 0x0002, 0x2009, 0x0001, 0x00AC, 0xFFD3, 0x2809, 0x0003, 0xFFBA, 0xFFC7, 0x0801, 0x0001, 0x2005, 0x0001, 0x00C3, 0xFFD2, 0x2007, 0x0001, 0x012B, 0x001E, 0x00A9, 0xFFF7, 0x200F, 0x0001, 0x0135, 0x000A, 0x00B0, 0x0007, 0xFF9D, 0xFFE3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
