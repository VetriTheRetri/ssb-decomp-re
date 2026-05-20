/* AnimJoint data for relocData file 1555 (FTCaptainAnimCeilingBonk) */
/* 1232 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimCeilingBonk_joint1[56];
extern u16 dFTCaptainAnimCeilingBonk_joint2[8];
extern u16 dFTCaptainAnimCeilingBonk_joint4[30];
extern u16 dFTCaptainAnimCeilingBonk_joint5[68];
extern u16 dFTCaptainAnimCeilingBonk_joint6[24];
extern u16 dFTCaptainAnimCeilingBonk_joint7[30];
extern u16 dFTCaptainAnimCeilingBonk_joint10[12];
extern u16 dFTCaptainAnimCeilingBonk_joint11[60];
extern u16 dFTCaptainAnimCeilingBonk_joint12[32];
extern u16 dFTCaptainAnimCeilingBonk_joint13[26];
extern u16 dFTCaptainAnimCeilingBonk_joint16[10];
extern u16 dFTCaptainAnimCeilingBonk_joint17[42];
extern u16 dFTCaptainAnimCeilingBonk_joint19[24];
extern u16 dFTCaptainAnimCeilingBonk_joint21[42];
extern u16 dFTCaptainAnimCeilingBonk_joint22[34];
extern u16 dFTCaptainAnimCeilingBonk_joint24[24];
extern u16 dFTCaptainAnimCeilingBonk_joint25[44];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimCeilingBonk_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimCeilingBonk_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimCeilingBonk_joint1[56] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 1300, 0, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), -4,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4915, -163, 3072, 327, 4915, -163,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1577, 2082, -230, -1264,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1535, -317, -165, 1103,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3686, -273, 4915, 341, 3686, -273,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1278, 965,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1300, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimCeilingBonk_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimCeilingBonk_joint4[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, -21, 56,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 476, 58, -155, 0, 112, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 476, -33, -155, 154, 112, -63,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 240, -21, 56,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimCeilingBonk_joint5[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1589, -260, -1618, 293, 1674, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1850, -110, -1324, 166, 1907, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1810, -33, -1285, 19, 1773, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1914, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1399, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1950, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2032, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1882, 110, 2065, -89,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1605, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1852, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1555, -109, 1693, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1589, 15, -1618, -62, 1674, -19,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimCeilingBonk_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1045, -209,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1284, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1201, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1085, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, 39,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimCeilingBonk_joint7[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, 0, 0, 151, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0, 0, 151, -51,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 536, 0, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimCeilingBonk_joint10[12] = {
	ftAnimSetVal(FT_ANIM_ROTX), 419,
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), 196,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), 419,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimCeilingBonk_joint11[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -269, 122, 75, 251, -62, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 413, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -88, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -110, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -87, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 408, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 130, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -141, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -267, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -51, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -269, -2, 75, -54, -62, -10,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimCeilingBonk_joint12[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -977, 164,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -813, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -884, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1010, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1011, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimCeilingBonk_joint13[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -534, 302, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -161, 238, 35, -40, 199, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -156, -135, 140, 38, 197, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -534, 302, 160,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimCeilingBonk_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1756, 0, 0, 86, 63, 60,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimCeilingBonk_joint17[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, 8, -51, -5, -566, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 34, -3, -49, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -584, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -709, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -387, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -530, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 31, -2, -51, -1, -566, -35,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimCeilingBonk_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, 38,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1433, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1371, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1342, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimCeilingBonk_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 34, 10, 21, 26, 48, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 23, 15, 28, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -99, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -51, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -270, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 34, 11, 21, -6, 48, 71,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimCeilingBonk_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -11, 38, 0, -592, -124,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), -3, 5, 36, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -809, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -668, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -596, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 3, 38, 1, -592, 4,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimCeilingBonk_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 131,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1305, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1267, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1135, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, -34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimCeilingBonk_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, -67, 64, -46, 59, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -91, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 54, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 101, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -18, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 29, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -61, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, -8, 64, 9, 59, 29,
	ftAnimEnd(),
};
