/* AnimJoint data for relocData file 1261 (FTKirbyAnimWalk2) */
/* 1792 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimWalk2_joint1[30];
extern u16 dFTKirbyAnimWalk2_joint2[14];
extern u16 dFTKirbyAnimWalk2_joint3[98];
extern u16 dFTKirbyAnimWalk2_joint5[34];
extern u16 dFTKirbyAnimWalk2_joint6[82];
extern u16 dFTKirbyAnimWalk2_joint7[16];
extern u16 dFTKirbyAnimWalk2_joint9[34];
extern u16 dFTKirbyAnimWalk2_joint10[76];
extern u16 dFTKirbyAnimWalk2_joint11[24];
extern u16 dFTKirbyAnimWalk2_joint13[14];
extern u16 dFTKirbyAnimWalk2_joint14[98];
extern u16 dFTKirbyAnimWalk2_joint16[14];
extern u16 dFTKirbyAnimWalk2_joint18[96];
extern u16 dFTKirbyAnimWalk2_joint19[108];
extern u16 dFTKirbyAnimWalk2_joint21[14];
extern u16 dFTKirbyAnimWalk2_joint22[100];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimWalk2_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimWalk2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimWalk2_joint1[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 630, 90,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 630, 90,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 600, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 630, 90,
	ftAnimLoop(0x6800, -58),
};

/* Joint 2 */
u16 dFTKirbyAnimWalk2_joint2[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimWalk2_joint3[98] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -22, -89, 44,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 312, 13, 4096, -18, 4096, 37, 4096, -18,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 5, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 312, -19, 4096, 27, 4096, -54, 4096, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 276, 4300, 3686, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 312, 13, 4096, -18, 4096, 37, 4096, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -22, 89, -44,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 44,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -5, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 7), 312, -19, 4096, 27, 4096, -54, 4096, 27,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 276, 4300, 3686, 4300,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 15), 312, 13, 4096, -18, 4096, 37, 4096, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -22, -89, 44,
	ftAnimLoop(0x6800, -194),
};

/* Joint 5 */
u16 dFTKirbyAnimWalk2_joint5[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -60, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, -89,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -17, -178, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -268, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 17, -178, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 268, -89,
	ftAnimLoop(0x6800, -66),
};

/* Joint 6 */
u16 dFTKirbyAnimWalk2_joint6[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2198, 1, -1217, 0, -1118, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 2499, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 30), -1178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -1704, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1720, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -1621, 28,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2500, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 2272, -19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1179, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1216, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1589, 35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -1122, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2254, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2201, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2197, -3, -1214, 2, -1116, 5,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimWalk2_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTKirbyAnimWalk2_joint9[34] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 60, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 268, 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, -17, 178, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -268, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 17, 178, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 268, 178,
	ftAnimLoop(0x6800, -66),
};

/* Joint 10 */
u16 dFTKirbyAnimWalk2_joint10[76] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2327, 0, 426, 5, -180, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 2571, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), 430, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 253, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), 151, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2586, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 30), 2325, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 430, -1, 102, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 426, -3, -179, 0,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2324, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2326, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2327, 0, 426, 0, -180, 0,
	ftAnimLoop(0x6800, -148),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimWalk2_joint11[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimWalk2_joint13[14] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	_FT_ANIM_CMD(11, 0, 1), 15,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimWalk2_joint14[98] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 286, 6, -202, 0, -326, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -281, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 92, -49, 41, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45, -43, 118, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 614, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -193, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -271, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), -285, -12,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 625, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -276, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -197, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 265, 9,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -296, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -208, 5,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -292, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 275, 9, -309, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 284, 9, -204, 4, -323, -14,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimWalk2_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 59), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTKirbyAnimWalk2_joint18[96] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1881, -12, 1972, -7, -1376, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -1929, 12, 1785, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1505, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1569, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1660, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1918, 10, 1785, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 33), 1835, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -1861, 7,
	ftAnimBlock(0, 22),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1695, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1469, 21,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1854, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1972, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1855, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1871, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1446, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1395, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1881, -10, 1972, 0, -1373, 22,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimWalk2_joint19[108] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 168, 3, 185, -2, 587, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 21, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 257, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 361, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 293, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 24), -226, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -7, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -264, 23,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 321, 6,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -234, 34, -179, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 352, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 108, 11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 324, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 189, -3,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 385, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 577, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 119, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 165, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 168, 3, 185, -3, 587, 9,
	ftAnimLoop(0x6800, -212),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimWalk2_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 59), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 22 */
u16 dFTKirbyAnimWalk2_joint22[100] = {
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1306, 2, -1698, 4, -1581, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1367, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1972, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1708, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1687, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1305, -6,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1365, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1274, -13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1972, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1786, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1315, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1748, -13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1287, -12, -1785, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -1309, 2, -1704, 6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1758, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1597, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1306, 2, -1698, 5, -1581, 16,
	ftAnimLoop(0x6800, -188),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
