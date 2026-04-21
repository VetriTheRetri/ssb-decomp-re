/* AnimJoint data for relocData file 472 (FTPurinAnimWin2) */
/* 1024 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimWin2_joint1[20];
extern u16 dFTPurinAnimWin2_joint2[8];
extern u16 dFTPurinAnimWin2_joint3[70];
extern u16 dFTPurinAnimWin2_joint5[10];
extern u16 dFTPurinAnimWin2_joint6[62];
extern u16 dFTPurinAnimWin2_joint7[14];
extern u16 dFTPurinAnimWin2_joint9[10];
extern u16 dFTPurinAnimWin2_joint10[72];
extern u16 dFTPurinAnimWin2_joint11[16];
extern u16 dFTPurinAnimWin2_joint13[10];
extern u16 dFTPurinAnimWin2_joint14[24];
extern u16 dFTPurinAnimWin2_joint16[14];
extern u16 dFTPurinAnimWin2_joint18[48];
extern u16 dFTPurinAnimWin2_joint19[24];
extern u16 dFTPurinAnimWin2_joint21[14];
extern u16 dFTPurinAnimWin2_joint22[52];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTPurinAnimWin2_joints[] = {
	(u32)dFTPurinAnimWin2_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimWin2_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimWin2_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimWin2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTPurinAnimWin2_joint6, /* [5] joint 6 */
	(u32)dFTPurinAnimWin2_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimWin2_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTPurinAnimWin2_joint10, /* [9] joint 10 */
	(u32)dFTPurinAnimWin2_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimWin2_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTPurinAnimWin2_joint14, /* [13] joint 14 */
	(u32)dFTPurinAnimWin2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTPurinAnimWin2_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTPurinAnimWin2_joint19, /* [18] joint 19 */
	(u32)dFTPurinAnimWin2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTPurinAnimWin2_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimWin2_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 30), 576, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 30), 612,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 35), 576, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 25), 624,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimWin2_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimWin2_joint3[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 4218, -5, 3686, 6, 4218, -5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 89, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 30), 0, 3, 0, 0, 0, -1, 3932, 2, 4300, 3, 3932, 2,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -44, 0, -223, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 35), 4300, 5, 3809, -6, 4300, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, -44, -223,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_SCAY, 25), 4096, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAZ, 25), 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTPurinAnimWin2_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -310, -380, 237,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimWin2_joint6[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, -1, -301, 2, -296, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -266, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 55, 7, -95, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 85, 7, -154, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 40), 82, -17, -69, 15,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -293, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -453, 0,
	ftAnimBlock(0, 24),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 15, -14, -12, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), -37, 0, 30, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -36, 0, 30, 0, -448, 1,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimWin2_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 116), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -6, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimWin2_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 284, -420, 282,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimWin2_joint10[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, 2, 194, -2, -336, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 44), -41, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), -287, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 40), 29, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 65, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), 67, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -66, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 32), -21, 8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -301, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 60), -400, 1,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 24, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 36), -58, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 10, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 32), 57, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 57, 0, -58, 0, -398, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimWin2_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 116), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimWin2_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -50, -61, -1676, 106, -21, 16,
	ftAnimBlock(0, 120),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimWin2_joint14[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 0, -302, 0, 237, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 116), -16, 0, -294, 0, 224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -17, 0, -293, 0, 227, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimWin2_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 116), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimWin2_joint18[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 0, 1785, 1, -1704, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 56), -1692, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 48), -1945, 3, 1824, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1930, 3, 1806, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 64), -1909, 0, 1782, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1698, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 56), -1692, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1908, 0, 1782, 0, -1685, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimWin2_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 0, 302, 0, 233, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 116), 16, 0, 294, 0, 224, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 15, 0, 293, 0, 223, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimWin2_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 116), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimWin2_joint22[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, 0, -1785, -1, 1508, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 52), 1533, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 48), -1271, -3, -1824, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1286, -3, -1806, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 64), -1307, 0, -1782, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1524, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 60), 1524, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1308, 0, -1782, 0, 1527, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
