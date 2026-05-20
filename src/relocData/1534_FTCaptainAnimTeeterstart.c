/* AnimJoint data for relocData file 1534 (FTCaptainAnimTeeterstart) */
/* 1184 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTeeterstart_joint1[30];
extern u16 dFTCaptainAnimTeeterstart_joint2[26];
extern u16 dFTCaptainAnimTeeterstart_joint4[26];
extern u16 dFTCaptainAnimTeeterstart_joint5[24];
extern u16 dFTCaptainAnimTeeterstart_joint6[16];
extern u16 dFTCaptainAnimTeeterstart_joint7[14];
extern u16 dFTCaptainAnimTeeterstart_joint8[20];
extern u16 dFTCaptainAnimTeeterstart_joint10[26];
extern u16 dFTCaptainAnimTeeterstart_joint11[32];
extern u16 dFTCaptainAnimTeeterstart_joint12[16];
extern u16 dFTCaptainAnimTeeterstart_joint13[16];
extern u16 dFTCaptainAnimTeeterstart_joint14[18];
extern u16 dFTCaptainAnimTeeterstart_joint16[14];
extern u16 dFTCaptainAnimTeeterstart_joint17[60];
extern u16 dFTCaptainAnimTeeterstart_joint19[40];
extern u16 dFTCaptainAnimTeeterstart_joint21[50];
extern u16 dFTCaptainAnimTeeterstart_joint22[44];
extern u16 dFTCaptainAnimTeeterstart_joint24[26];
extern u16 dFTCaptainAnimTeeterstart_joint25[44];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimTeeterstart_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimTeeterstart_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimTeeterstart_joint1[30] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1555, -104, 100, 11,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_TRAX, 8), 179,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 8), 127, 0, 24, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 1494,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 1679, 113,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimTeeterstart_joint2[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 22, 12, -51, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -234, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 457, 23, -235, -33, 0, 4, 4, 0, -76, -9, 9, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimTeeterstart_joint4[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 220, -11, 0, -8, 0, -5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -46, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -89, -30, -176, -10, -71, -5, 0, 0, 29, 0, -52, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimTeeterstart_joint5[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -156, -5, -2, -5, 230, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -258, -13, -77, -11, 72, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -271, -12, -88, -10, 62, -10,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTeeterstart_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1192, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -894, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimTeeterstart_joint7[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2729, -60, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 3572, 66, -218, -12, -494, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimTeeterstart_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 360, -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -153, -5, 0, 0, 360, 0, -108, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTCaptainAnimTeeterstart_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -16, -7, 199, -2, -44, 2,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 119, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -179, -15, 148, -4, 0, 3, 0, 4, 120, 13, 0, 17,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimTeeterstart_joint11[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1730, 5, -1826, -7, -1461, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2020, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1723, 25, -1228, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1680, 103, -1232, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1516, 164, -1968, 51, -1289, -56,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimTeeterstart_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -801, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -516, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 147,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimTeeterstart_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 19, 12, -28, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 57, -21, 96, 5, -418, 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimTeeterstart_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 89, 53, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1538, -1003, 119,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 85, 0, 49, 0, 38, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTCaptainAnimTeeterstart_joint16[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0, 0, -245, -11,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimTeeterstart_joint17[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1710, -67, -1464, -6, -2028, 90,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1571, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1518, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1938, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1792, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1603, 9, -2078, -223,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1445, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2239, -96,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2226, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1534, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1569, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1419, -25, -1609, -39, -2183, 42,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimTeeterstart_joint19[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 576, -162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 414, -253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 69, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 611, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 388, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 177, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -177,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimTeeterstart_joint21[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -184, 63, -95, -11, -46, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -62, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -37, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -87, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -50, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -64, 3, -135, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -89, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 42, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 9, 8, -52, -14, 81, 39,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimTeeterstart_joint22[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -6, 113, 8, -202, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 47, 32,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 191, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -308, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, 20, -167, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 88, -11, -195, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -15, 206, 15, -208, -13,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimTeeterstart_joint24[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 566, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 423, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 295, -209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -145,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimTeeterstart_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, -2, 159, 4, -231, 13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 222, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 32, -39, 72, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -22, -18, 169, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3, 18, 239, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 14, 18, 219, -2, 269, 30,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
