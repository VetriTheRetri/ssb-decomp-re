/* AnimJoint data for relocData file 1960 (FTPikachuAnimWalk3) */
/* 1904 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimWalk3_joint1[12];
extern u16 dFTPikachuAnimWalk3_joint2[36];
extern u16 dFTPikachuAnimWalk3_joint3[36];
extern u16 dFTPikachuAnimWalk3_joint5[60];
extern u16 dFTPikachuAnimWalk3_joint6[62];
extern u16 dFTPikachuAnimWalk3_joint7[16];
extern u16 dFTPikachuAnimWalk3_joint8[36];
extern u16 dFTPikachuAnimWalk3_joint9[12];
extern u16 dFTPikachuAnimWalk3_joint10[48];
extern u16 dFTPikachuAnimWalk3_joint11[48];
extern u16 dFTPikachuAnimWalk3_joint13[62];
extern u16 dFTPikachuAnimWalk3_joint14[54];
extern u16 dFTPikachuAnimWalk3_joint16[32];
extern u16 dFTPikachuAnimWalk3_joint17[72];
extern u16 dFTPikachuAnimWalk3_joint19[40];
extern u16 dFTPikachuAnimWalk3_joint21[68];
extern u16 dFTPikachuAnimWalk3_joint22[62];
extern u16 dFTPikachuAnimWalk3_joint24[36];
extern u16 dFTPikachuAnimWalk3_joint25[108];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTPikachuAnimWalk3_joints[] = {
	(u32)dFTPikachuAnimWalk3_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimWalk3_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimWalk3_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimWalk3_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPikachuAnimWalk3_joint6, /* [5] joint 6 */
	(u32)dFTPikachuAnimWalk3_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimWalk3_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimWalk3_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimWalk3_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimWalk3_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimWalk3_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPikachuAnimWalk3_joint14, /* [13] joint 14 */
	(u32)dFTPikachuAnimWalk3_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPikachuAnimWalk3_joint17, /* [16] joint 17 */
	(u32)dFTPikachuAnimWalk3_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPikachuAnimWalk3_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPikachuAnimWalk3_joint22, /* [21] joint 22 */
	(u32)dFTPikachuAnimWalk3_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTPikachuAnimWalk3_joint25, /* [24] joint 25 */
	0xFFFF01C9, /* [25] END */
};

/* Joint 1 */
u16 dFTPikachuAnimWalk3_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -26, 33, -28, 0, 899, -162,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPikachuAnimWalk3_joint2[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -8, 7,
	ftAnimSetValRate(FT_ANIM_ROTX), 759, 25,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -209, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 941, -1, -11, 0, 20, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 726, -12, -7, 0, 5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 759, 17, -8, 0, 7, 1,
	ftAnimLoop(0x6800, -70),
};

/* Joint 3 */
u16 dFTPikachuAnimWalk3_joint3[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1,
	ftAnimSetValRate(FT_ANIM_ROTX), -42, -97,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -328, 7, -17, 0, 14, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 99, 15, 7, 0, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -42, -59, 0, -1, 1, 1,
	ftAnimLoop(0x6800, -70),
};

/* Joint 5 */
u16 dFTPikachuAnimWalk3_joint5[60] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 0, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 302, 67, 343,
	ftAnimSetValBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 17), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 303, -6, 51, 95, 359, 26,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 295, 0, 174, 8, 373, -5,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 302, 3, 72, -57, 344, -16,
	ftAnimBlock(0, 8),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 4915,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 4096,
	ftAnimSetValT(FT_ANIM_SCAZ, 3), 4096,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 302, 67, 343,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPikachuAnimWalk3_joint6[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 233, 16, -48, -4, -475, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 475, 63,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -44, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -436, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -955, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1229, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 665, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 518, -66,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1217, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1042, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 297, -47, -648, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 234, -20, -48, -1, -472, 58,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimWalk3_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -3,
	ftAnimLoop(0x6800, -30),
};

/* Joint 8 */
u16 dFTPikachuAnimWalk3_joint8[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 53,
	ftAnimSetValRate(FT_ANIM_ROTX), -410, 8,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -358, 0, 22, 0, 52, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -418, -3, 22, 0, 53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -410, 9, 22, 0, 53, 0,
	ftAnimLoop(0x6800, -70),
};

/* Joint 9 */
u16 dFTPikachuAnimWalk3_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 24),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimWalk3_joint10[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -267, -25, -51,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -260, 9, -22, 4, -46, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -194, 3, 7, 1, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -194, -4, 7, -1, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -260, -17, -22, -7, -46, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -25, -51,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimWalk3_joint11[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -176, 33, 42,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -173, 3, 31, -3, 38, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -148, 1, 5, -1, 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -148, -1, 5, 1, 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -173, -6, 31, 6, 38, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -176, 33, 42,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPikachuAnimWalk3_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ), -275, 27, 312, 5324,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY), 1, 0, 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAZ, 3), -277, 5, 99, -32, 386, 43, 4096, -111,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 19), 4096, 117,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), -268, 7, -22, -90, 378, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -266, -12, -35, 181, 414, 9,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -277, -8, 114, 55, 385, -90,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -275, 27, 312,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAZ, 2), 5324,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimWalk3_joint14[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1791, 28, 1596, 5, -2795, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -1704, 0, 1620, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -2266, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2059, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1698, -21, 1539, -5, -2249, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), -1878, 6, 1587, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2807, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2867, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1791, 29, 1597, 3, -2799, 22,
	ftAnimLoop(0x6800, -104),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPikachuAnimWalk3_joint16[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -10, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -10, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -10, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -670, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 3,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPikachuAnimWalk3_joint17[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1498, -96, -1240, 20, 510, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1208, -92, -1179, -11, 576, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 943, 33, -1310, -21, 711, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1406, 93, -1309, -16, 602, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1502, 4, -1410, -24, 896, 104,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1244, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1434, 0, 1230, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1496, 18, 1010, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1547, 0, 628, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1497, -16, -1238, 2, 510, -39,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPikachuAnimWalk3_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 830, -63,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 639, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 320, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 608, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 590, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 389, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 725, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 921, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 833, -29,
	ftAnimLoop(0x6800, -78),
};

/* Joint 21 */
u16 dFTPikachuAnimWalk3_joint21[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 100, 78, 264, 35, -7, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 442, -22, 412, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 369, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 534, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, -61, 225, -60, 331, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 24, -30, 248, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 171, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 320, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -111, -7, -256, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -17, 35, -160, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 100, 39, 267, -17, -8, 50,
	ftAnimLoop(0x6800, -132),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimWalk3_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 195, 0, -10, 51, -130, -168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 418, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 265, 51, -1048, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 507, 72, -1022, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 606, -76, -815, 39,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 232, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 239, -67, 139, -41, -656, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 201, -7, -18, -26, -163, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 195, -2, -17, 0, -114, 16,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPikachuAnimWalk3_joint24[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 102, 188,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 668, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 852, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 605, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 322, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 431, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 6, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 66, 20,
	ftAnimLoop(0x6800, -70),
};

/* Joint 25 */
u16 dFTPikachuAnimWalk3_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1646, -25, -1464, -22, 1996, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1941, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1531, 33, 2028, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1261, 55, 1786, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1184, 10, 2008, -16,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2107, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1825, 80, -1139, -39, 1839, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1626, 30, -1424, -54, 1725, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1640, -3, -1466, -6, 2027, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1646, -2, -1464, 0, 2013, -4,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
	0x280E, 0xFD59, 0xFFDF, 0x00B7, 0xFFDA, 0xFE0B, 0xFFF4, 0x48E0, 0xFFFF, 0xFF4C, 0xFE9E, 0x200F, 0x0006, 0xFCFC, 0x0006, 0x0021, 0x0009, 0xFDED, 0x0002, 0x200F, 0x000D, 0xFDD6, 0x0005, 0x0170, 0x0008, 0xFE3B, 0x0001, 0x200F, 0x0005, 0xFD59, 0xFFDD, 0x00B7, 0xFFD1, 0xFE0B, 0xFFEE, 0x6800, 0xFFB8, 0x0000,
};
