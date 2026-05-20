/* AnimJoint data for relocData file 1486 (FTPurinAnimCeilingBonk) */
/* 944 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimCeilingBonk_joint1[10];
extern u16 dFTPurinAnimCeilingBonk_joint2[24];
extern u16 dFTPurinAnimCeilingBonk_joint3[10];
extern u16 dFTPurinAnimCeilingBonk_joint5[8];
extern u16 dFTPurinAnimCeilingBonk_joint6[46];
extern u16 dFTPurinAnimCeilingBonk_joint7[16];
extern u16 dFTPurinAnimCeilingBonk_joint9[8];
extern u16 dFTPurinAnimCeilingBonk_joint10[38];
extern u16 dFTPurinAnimCeilingBonk_joint11[16];
extern u16 dFTPurinAnimCeilingBonk_joint13[42];
extern u16 dFTPurinAnimCeilingBonk_joint14[34];
extern u16 dFTPurinAnimCeilingBonk_joint16[14];
extern u16 dFTPurinAnimCeilingBonk_joint18[52];
extern u16 dFTPurinAnimCeilingBonk_joint19[34];
extern u16 dFTPurinAnimCeilingBonk_joint21[14];
extern u16 dFTPurinAnimCeilingBonk_joint22[50];
extern u16 dFTPurinAnimCeilingBonk_joint23[10];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTPurinAnimCeilingBonk_joints[] = {
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTPurinAnimCeilingBonk_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimCeilingBonk_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 600, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTPurinAnimCeilingBonk_joint2[24] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_SCAY), -312, 984, 4096, -1040,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, -268, 0, 0, 0, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 4), 172, 2048,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 4), -312, -975, 4096, 1046,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimCeilingBonk_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 268, 0, 0, 0, 312, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimCeilingBonk_joint5[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 178,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimCeilingBonk_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -520, 67, -608, -13, 1262, -4,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -621, 16, 1257, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -306, 186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -90, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -305, -181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -453, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -520, -67, -608, 13, 1261, 4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimCeilingBonk_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimCeilingBonk_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, -178,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimCeilingBonk_joint10[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1091, -63, 997, -10, -351, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 986, 15, -350, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1517, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1660, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1155, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1087, 68, 1000, 13, -345, 5,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimCeilingBonk_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimCeilingBonk_joint13[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 0, 58, -1072, -57,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1400, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1166, -249, 447, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1169, 260, 447, -195,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlock(FT_ANIM_ROTZ), -1401, 123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1072, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -804, 0, 0, -58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimCeilingBonk_joint14[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -69, -302, 16, 237, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -284, -17, 244, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 2, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 122, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 227, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 69, -300, -15, 233, -11,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimCeilingBonk_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 7, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTPurinAnimCeilingBonk_joint18[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1930, 76, 1766, 29, -1255, -107,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1637, 76,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1814, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1534, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1434, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1854, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1520, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1796, -23, -1362, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1931, -76, 1766, -29, -1255, 106,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimCeilingBonk_joint19[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -297, 65, 300, -13, 233, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 288, 15, 248, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -18, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -129, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -229, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -295, -65, 302, 13, 237, -11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimCeilingBonk_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimCeilingBonk_joint22[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1286, -68, -1766, -18, -1259, -127,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 3686, 3686,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1644, 64,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1785, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1623, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1354, 87,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1543, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1387, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1286, 68, -1766, 18, -1259, 127,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPurinAnimCeilingBonk_joint23[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};
