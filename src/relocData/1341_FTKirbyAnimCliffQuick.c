/* AnimJoint data for relocData file 1341 (FTKirbyAnimCliffQuick) */
/* 1440 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimCliffQuick_joint1[24];
extern u16 dFTKirbyAnimCliffQuick_joint2[42];
extern u16 dFTKirbyAnimCliffQuick_joint3[16];
extern u16 dFTKirbyAnimCliffQuick_joint4[32];
extern u16 dFTKirbyAnimCliffQuick_joint6[40];
extern u16 dFTKirbyAnimCliffQuick_joint7[68];
extern u16 dFTKirbyAnimCliffQuick_joint8[14];
extern u16 dFTKirbyAnimCliffQuick_joint10[40];
extern u16 dFTKirbyAnimCliffQuick_joint11[80];
extern u16 dFTKirbyAnimCliffQuick_joint12[16];
extern u16 dFTKirbyAnimCliffQuick_joint14[24];
extern u16 dFTKirbyAnimCliffQuick_joint15[64];
extern u16 dFTKirbyAnimCliffQuick_joint17[14];
extern u16 dFTKirbyAnimCliffQuick_joint19[66];
extern u16 dFTKirbyAnimCliffQuick_joint20[62];
extern u16 dFTKirbyAnimCliffQuick_joint22[72];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimCliffQuick_joints[] = {
	(u32)dFTKirbyAnimCliffQuick_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimCliffQuick_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimCliffQuick_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimCliffQuick_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimCliffQuick_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimCliffQuick_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimCliffQuick_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimCliffQuick_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimCliffQuick_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimCliffQuick_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimCliffQuick_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimCliffQuick_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimCliffQuick_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimCliffQuick_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimCliffQuick_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimCliffQuick_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF014B, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimCliffQuick_joint1[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1320, -600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -480, 1679, -930, -179,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 360, 1055, -780, 450,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 840, 384, -480, 528,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimCliffQuick_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 0, -67, 600,
	ftAnimSetValRate(FT_ANIM_TRAX), -120, 84,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 134,
	ftAnimSetValRateT(FT_ANIM_TRAY, 10), 600, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1608, 178,
	ftAnimBlock(0, 6),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimCliffQuick_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -804,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimCliffQuick_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY), -357, 268, 432,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 44, 44, 0, -22, 312, -80,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAY, 8), 0, 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 8,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimCliffQuick_joint6[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, -285, 0, -120, -60, -180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 80, 0, -40, -180, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 446, -446, -357,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, -27, -357, 8, 178, 8, 0, -57, -120, 57,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -120,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimCliffQuick_joint7[68] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -869, -62, -395, -132, 1623, 49,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -392, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -981, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1673, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1610, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1783, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 126, 1676, -77,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -180, -92, 1657, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -888, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -647, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -279, -64, 1766, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -613, 33, -310, -30, 1800, 34,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimCliffQuick_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTKirbyAnimCliffQuick_joint10[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 357, 120, 120, 60,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -80, 0, -160, -192, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 446, 446, 357,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 0, -27, 357, -8, -178, -8, 0, 57, -120, 61,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), -120,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimCliffQuick_joint11[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1590, 274, 1153, -34, 2415, 321,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2430, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1174, -25, 2967, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1068, 59, 3074, 274,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1510, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2717, 113, 3515, 198,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2536, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3471, -66,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3285, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1585, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1331, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2396, -115,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2256, -22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3379, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2222, -33, 1301, -29, 3410, 30,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimCliffQuick_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimCliffQuick_joint14[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -670, 134, -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -622, 609, -910,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -804, 0, -1072,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimCliffQuick_joint15[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -87, -23, -401, 24, 263, 79,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -27, 83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -328, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 528, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 90,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 442, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 50, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -30, 43,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 67, -93,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 21, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 36, -329, 0, 0, -67,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimCliffQuick_joint17[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimCliffQuick_joint19[66] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, 42, 213, 9, -2661, 18,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3481, 3686, 3891,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2552, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 208, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -41, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -97, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -24, -46,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4096, 4096, 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2536, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -2526, -20,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -120, -40, 197, -10, -2550, -23,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTKirbyAnimCliffQuick_joint20[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1547, 24, 1415, -25, 1384, 131,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1592, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1279, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1515, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1854, 341,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 2319, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2242, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1797, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1590, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1641, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1584, -46, 1671, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -36, 1279, 0, 1604, -67,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimCliffQuick_joint22[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x280E, 0x002D, 0xFFF3, 0xFF88, 0xFFED, 0x031D, 0xFFF3, 0x3F00, 0x0D99, 0x0E66, 0x0F33, 0x280B, 0x0008, 0xFFFC, 0xFFEE, 0x02C2, 0x0005, 0x2805, 0x000B, 0xFF32, 0x0005, 0x3F01, 0x0004, 0x1000, 0x1000, 0x1000, 0x4701, 0x0008, 0x1000, 0x1000, 0x1000, 0x0801, 0x0004, 0x200B, 0x0001, 0xFFF8, 0x0010, 0x02C7, 0x0000, 0x200B, 0x0002, 0x0050, 0x002E, 0x02AE, 0xFFEB, 0x200F, 0x0001, 0x0078, 0x0027, 0xFF3B, 0x0008, 0x0297, 0xFFE9, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
