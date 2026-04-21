/* AnimJoint data for relocData file 2116 (FTBossAnimPunch2) */
/* 3296 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimPunch2_joint1[70];
extern u16 dFTBossAnimPunch2_joint3[48];
extern u16 dFTBossAnimPunch2_joint4[74];
extern u16 dFTBossAnimPunch2_joint5[60];
extern u16 dFTBossAnimPunch2_joint7[60];
extern u16 dFTBossAnimPunch2_joint8[152];
extern u16 dFTBossAnimPunch2_joint10[68];
extern u16 dFTBossAnimPunch2_joint11[156];
extern u16 dFTBossAnimPunch2_joint12[52];
extern u16 dFTBossAnimPunch2_joint14[56];
extern u16 dFTBossAnimPunch2_joint15[130];
extern u16 dFTBossAnimPunch2_joint16[56];
extern u16 dFTBossAnimPunch2_joint17[62];
extern u16 dFTBossAnimPunch2_joint19[38];
extern u16 dFTBossAnimPunch2_joint20[132];
extern u16 dFTBossAnimPunch2_joint21[54];
extern u16 dFTBossAnimPunch2_joint23[62];
extern u16 dFTBossAnimPunch2_joint24[156];
extern u16 dFTBossAnimPunch2_joint25[50];
extern u16 dFTBossAnimPunch2_joint26[60];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimPunch2_joints[] = {
	(u32)dFTBossAnimPunch2_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimPunch2_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimPunch2_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimPunch2_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimPunch2_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimPunch2_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimPunch2_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimPunch2_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimPunch2_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimPunch2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimPunch2_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimPunch2_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimPunch2_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimPunch2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimPunch2_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimPunch2_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimPunch2_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimPunch2_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimPunch2_joint25, /* [24] joint 25 */
	(u32)dFTBossAnimPunch2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTBossAnimPunch2_joint1[70] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 45), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1200, 640, -6000, -3200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 1200, -639, -6000, 2879,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 5), -600, 10240,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 10), 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 10), 13200,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 5184,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1800, 320, 15600, -160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 1200, -960, 12600, -1694,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -240, -1919,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 12000,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 53), 12000,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 0, 58,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTBossAnimPunch2_joint3[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY), 0, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, -1200, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 45), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1440, 336,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 15), 1440,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 95), 1440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 89, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 89, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 95), 0,
	ftAnimBlock(0, 75),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 20), 600,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTBossAnimPunch2_joint4[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -982, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1161, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -1161, 17, 0, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -804, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 804,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 45), 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -804,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 95), -804,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 536, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 178, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 50), 0,
	ftAnimBlock(0, 30),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -982, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -982,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -982,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTBossAnimPunch2_joint5[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -357, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -357, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 45), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -89, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -89, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -178, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 25), -178, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -357, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -357, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -178,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimPunch2_joint7[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -268, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 8, -268, 22, 0, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 178, 178, 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 110), 178, 178, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -11, -268, -29, 0, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -268, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTBossAnimPunch2_joint8[152] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1177, 0, -1273, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -696,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -1273, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), -711, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 24), -1177, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1177, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1589, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1261, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1045, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -695, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -649, -2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1611, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1045,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 107), -1045, 0,
	ftAnimBlock(0, 16),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1609, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1589, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -653, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 67), -653, 0,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1609, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), -1589,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1589, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), -1589, 0,
	ftAnimBlock(0, 38),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -653, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -653, -7,
	ftAnimBlock(0, 21),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1589, 16, -1045, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1177, 23, -1273, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -668, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -696, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1177, 0, -1273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1177, 0, -1273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -696, 0, -1177, 0, -1273, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimPunch2_joint10[68] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -536, -18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -511, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -536, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -514, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -536, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -536,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), -536, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -178, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTBossAnimPunch2_joint11[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1667, 0, -67, -2, 370, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -192, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1608, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -191, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -68, 53,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 804, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1632, -35,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 16), -1697,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -19, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 108), 804, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 98), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1697,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 96), -1697,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1697, -3, 0, -9, 804, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -184, -4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 9), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -188, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -78, 19,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1608, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1667, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 37, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 332, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1667, 0, -67, 10, 370, 38,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimPunch2_joint12[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -187, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -577, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -577,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 108), -577, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -129, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -187, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTBossAnimPunch2_joint14[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -215, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -840, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -840,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 108), -840, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -840, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -10, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -67, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -190, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -215, -24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTBossAnimPunch2_joint15[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, -1583, 0, -1426, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1599, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 49), -31, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1608, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -1608,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -867, 44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1605, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 59), -1605, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 108), -867, 0,
	ftAnimBlock(0, 18),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 40), -26, 0,
	ftAnimBlock(0, 39),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1605,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -1605, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -26, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 51), -29, 3,
	ftAnimBlock(0, 48),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -867, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1608, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1599, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1579, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -22, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -9, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1496, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1446, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, -1583, -3, -1426, 20,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimPunch2_joint16[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -390, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -676, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 108), -676, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -676, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -355, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTBossAnimPunch2_joint17[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -348, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -32, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -753, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -753,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 108), -753, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -753, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -34, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -305, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -348, -43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTBossAnimPunch2_joint19[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 15), 0, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 110), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 0, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 5), -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTBossAnimPunch2_joint20[132] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1608, 0, 26, 0, 8, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1608, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), 60, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 744, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1591, -19,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), 1613,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 74, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 186, -3,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 744,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 108), 744, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 1613,
	ftAnimSetValRateT(FT_ANIM_ROTX, 102), 1613, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 39), 180, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 49), 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1613, -11, 180, -8, 744, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 64, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 4, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 66, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 30, -5,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1608, 0, 26, -3, 8, 3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimPunch2_joint21[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -421, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -678, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -678,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 108), -678,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 56,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -384, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTBossAnimPunch2_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -384, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -31, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -751, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 108), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -33, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 0, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -337, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -47,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTBossAnimPunch2_joint24[156] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1574, 0, 82, 2, 199, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 26), -1608, 5, 168, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 870, 60,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1597, 16, 159, -1,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 7), -1502,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 137, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 870, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 108), 870, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1502, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1475, -5,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 85), 173, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1482, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 52), -1502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1502, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 28), -1502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1502, -15, 870, -60,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 0, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1593, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 165, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 114, -24,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 127, 56,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1590, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1575, 2,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, -15, 178, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1574, 0, 82, -9, 199, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTBossAnimPunch2_joint25[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -196, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 14), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -529, -20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -529,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 108), -529,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -529, 20,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -137, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -196, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTBossAnimPunch2_joint26[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -227, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -866, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -866,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 108), -866, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -866, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -201, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -25,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
