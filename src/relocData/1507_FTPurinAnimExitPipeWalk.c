/* AnimJoint data for relocData file 1507 (FTPurinAnimExitPipeWalk) */
/* 2032 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimExitPipeWalk_joint1[44];
extern u16 dFTPurinAnimExitPipeWalk_joint2[32];
extern u16 dFTPurinAnimExitPipeWalk_joint3[70];
extern u16 dFTPurinAnimExitPipeWalk_joint5[10];
extern u16 dFTPurinAnimExitPipeWalk_joint6[96];
extern u16 dFTPurinAnimExitPipeWalk_joint7[24];
extern u16 dFTPurinAnimExitPipeWalk_joint9[10];
extern u16 dFTPurinAnimExitPipeWalk_joint10[74];
extern u16 dFTPurinAnimExitPipeWalk_joint11[14];
extern u16 dFTPurinAnimExitPipeWalk_joint13[62];
extern u16 dFTPurinAnimExitPipeWalk_joint14[96];
extern u16 dFTPurinAnimExitPipeWalk_joint16[16];
extern u16 dFTPurinAnimExitPipeWalk_joint18[146];
extern u16 dFTPurinAnimExitPipeWalk_joint19[124];
extern u16 dFTPurinAnimExitPipeWalk_joint21[154];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimExitPipeWalk_joints[] = {
	(u32)dFTPurinAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimExitPipeWalk_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimExitPipeWalk_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimExitPipeWalk_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimExitPipeWalk_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimExitPipeWalk_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimExitPipeWalk_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimExitPipeWalk_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimExitPipeWalk_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimExitPipeWalk_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimExitPipeWalk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimExitPipeWalk_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimExitPipeWalk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF01BA, /* [21] END */
};

/* Joint 1 */
u16 dFTPurinAnimExitPipeWalk_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 576, 3686, 3686, 3686,
	ftAnimSetValRate(FT_ANIM_TRAZ), -1800, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 3686, 0, 3686, 0, 3686, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 40), 0, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 576,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 20), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 660,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 10), 576,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimExitPipeWalk_joint2[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, -402, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, -446, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 44, 2, -402, 2, 0, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 44, -402, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 44, -402, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimExitPipeWalk_joint3[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 44, -178, 4300, 3522, 4300,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -89, 0, 312, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -70, 4096, 111, 4096, -71,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -134,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 44, -178,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 99, 4096, -123, 4096, 97,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3522, 4300,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 4096, -72, 4096, 100, 4096, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, -134,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 44, -178,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4096, 102, 4096, -136, 4096, 100,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 4300, 3522, 4300,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimExitPipeWalk_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimExitPipeWalk_joint6[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 172, -7, -166, 4, -425, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -408, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -15, 8, 17, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -4, 12, 5, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 179, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -381, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -421, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -243, 42,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 157, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 134, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -204, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -253, -44,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -372, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -177, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 153, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 175, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -415, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 171, -4, -167, 9, -422, -6,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimExitPipeWalk_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimExitPipeWalk_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 284, -420, 282,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimExitPipeWalk_joint10[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1560, -1, 1674, -2, -1933, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1603, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), -1987, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 1589, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 1703, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1593, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -1510, -17,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2001, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -1938, 11,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1527, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1555, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1689, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1678, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1560, -4, 1674, -4, -1933, 5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimExitPipeWalk_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimExitPipeWalk_joint13[62] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, 0, -1795,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 221, 34, 61, 12, -1919, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 317, 27, 62, -3, -1918, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 304, -7, 52, 1, -1890, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 282, -7, 69, -4, -1920, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 247, -23, 17, -2, -1832, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 44, -11, 46, -3, -1652, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -50, -61, -1676,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimExitPipeWalk_joint14[96] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -20, 18, -212, -46, 245, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -402, 36, -110, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), 273, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 229, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 28, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 36, -75, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 590, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -168, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, 55,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -60, -52,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 62, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 24, -31,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 564, -28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 292, -49,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -31, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -113, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -165, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -20, 10, -212, -46, 245, -46,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimExitPipeWalk_joint16[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimExitPipeWalk_joint18[146] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1381, -33, -1279, 26, -1731, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1071, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 966, -116, -1200, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 849, -105, -1062, 124,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -880, -58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 795, 99,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1082, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1236, 8,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -962, -88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1640, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 904, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1583, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1220, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1252, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1724, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1954, 21,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1228, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1114, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1630, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1631, -32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1912, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1817, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1610, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1447, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1147, -35, -1831, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1289, 4, -1764, 31,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1408, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1373, -35, -1279, 9, -1731, 33,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimExitPipeWalk_joint19[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -53, 6, 321, 19, 103, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 480, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 498, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 243, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 252, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -54, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 456, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -156, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 483, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 126, -32,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -245, 10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -246, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -343, 68,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 96, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 224, 68,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -233, 10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -214, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, 61,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2, 103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -192, 48, 300, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -64, 31, 318, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -53, 10, 321, 3, 103, 18,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimExitPipeWalk_joint21[154] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x200E, 0xFABD, 0x000A, 0xF93D, 0x0008, 0x05D6, 0x001B, 0x2805, 0x000C, 0xFA34, 0xFFE7, 0x2803, 0x000E, 0xFAAC, 0x0007, 0x2009, 0x0008, 0x05A0, 0xFFFE, 0x2009, 0x0001, 0x05A0, 0xFFFF, 0x2809, 0x000C, 0x05D4, 0x0000, 0x0801, 0x0003, 0x2005, 0x0001, 0xFA15, 0xFFDF, 0x2805, 0x000C, 0xF94A, 0x0010, 0x0801, 0x0001, 0x2003, 0x0001, 0xFAB3, 0x0006, 0x2803, 0x0009, 0xFB07, 0x001F, 0x0801, 0x0006, 0x2009, 0x0001, 0x05DA, 0x000C, 0x2809, 0x0008, 0x06D8, 0x0013, 0x0801, 0x0002, 0x2003, 0x0001, 0xFB26, 0x001A, 0x2803, 0x0009, 0xFADD, 0xFFDC, 0x2005, 0x0001, 0xF95C, 0x0012, 0x2805, 0x0007, 0xF9FC, 0x0012, 0x0801, 0x0004, 0x2009, 0x0001, 0x06EA, 0x0014, 0x2809, 0x0005, 0x06B2, 0xFFAD, 0x0801, 0x0002, 0x2005, 0x0001, 0xFA06, 0xFFFB, 0x2805, 0x0005, 0xF954, 0xFFE3, 0x2003, 0x0001, 0xFABD, 0xFFFD, 0x2803, 0x0003, 0xFAEB, 0xFFE5, 0x0801, 0x0001, 0x2009, 0x0001, 0x0650, 0xFFA4, 0x2809, 0x0002, 0x05D8, 0xFFEF, 0x0801, 0x0001, 0x2003, 0x0001, 0xFACB, 0xFFED, 0x200F, 0x0001, 0xFAC5, 0xFFFB, 0xF93D, 0xFFEA, 0x05D6, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
