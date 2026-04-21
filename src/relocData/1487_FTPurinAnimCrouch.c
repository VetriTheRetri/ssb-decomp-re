/* AnimJoint data for relocData file 1487 (FTPurinAnimCrouch) */
/* 1104 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimCrouch_joint1[20];
extern u16 dFTPurinAnimCrouch_joint2[24];
extern u16 dFTPurinAnimCrouch_joint3[10];
extern u16 dFTPurinAnimCrouch_joint4[32];
extern u16 dFTPurinAnimCrouch_joint6[14];
extern u16 dFTPurinAnimCrouch_joint7[52];
extern u16 dFTPurinAnimCrouch_joint8[22];
extern u16 dFTPurinAnimCrouch_joint10[14];
extern u16 dFTPurinAnimCrouch_joint11[52];
extern u16 dFTPurinAnimCrouch_joint12[20];
extern u16 dFTPurinAnimCrouch_joint14[10];
extern u16 dFTPurinAnimCrouch_joint15[44];
extern u16 dFTPurinAnimCrouch_joint17[18];
extern u16 dFTPurinAnimCrouch_joint19[54];
extern u16 dFTPurinAnimCrouch_joint20[44];
extern u16 dFTPurinAnimCrouch_joint22[14];
extern u16 dFTPurinAnimCrouch_joint23[62];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimCrouch_joints[] = {
	(u32)dFTPurinAnimCrouch_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimCrouch_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimCrouch_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimCrouch_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimCrouch_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimCrouch_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimCrouch_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimCrouch_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimCrouch_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimCrouch_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimCrouch_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimCrouch_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimCrouch_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimCrouch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimCrouch_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimCrouch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPurinAnimCrouch_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimCrouch_joint1[20] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAY), 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAY, 4), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 2), 4096, -819,
	ftAnimSetValRateBlockT(FT_ANIM_SCAY, 2), 2457, -327,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimCrouch_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 720,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, -239,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 600, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimCrouch_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimCrouch_joint4[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), -178, 3891, 4505, 3891,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimCrouch_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimCrouch_joint7[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -6, -217, 4, 0, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 764, 15, -204, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 87, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 105, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 16, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 782, 15, -220, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 795, 10, -225, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 9, -220, 4, 0, -16,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimCrouch_joint8[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimCrouch_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimCrouch_joint11[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, 6, 1391, 1, -1608, 14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 843, -15, 1401, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1520, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1503, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1592, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 825, -15, 1384, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 813, -10, 1383, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -9, 1391, 7, -1608, -16,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimCrouch_joint12[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimCrouch_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimCrouch_joint15[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1629, 2, -1305, -7, 1841, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1632, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1330, 21, 1815, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, 14, 1845, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1657, -21,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1301, 1850,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1674, -16, -1305, -4, 1845, -4,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimCrouch_joint17[18] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimCrouch_joint19[54] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, 5, 1785, -6, -1708, 24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1904, -17, 1757, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1595, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1575, -13,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1685, -41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1924, -11, 1772, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1927, 1, 1760, -14, -1705, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1921, 5, 1743, -16, -1702, 3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimCrouch_joint20[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1629, -4, 1305, 7, 1841, -7,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1629, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1330, -21, 1815, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1305, -14, 1841, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1654, 21, 1301, 0, 1846, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1671, 16, 1305, 4, 1841, -4,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimCrouch_joint22[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimCrouch_joint23[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1298, -5, -1785, 6, -1708, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -1312, 17, -1757, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1641, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1595, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1575, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1622, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1292, 11, -1772, -1, -1689, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1289, -1, -1760, 14, -1709, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1295, -5, -1743, 16, -1705, 3,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
