/* AnimJoint data for relocData file 753 (FTFoxAnimJabLoopStart) */
/* 912 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimJabLoopStart_joint1[10];
extern u16 dFTFoxAnimJabLoopStart_joint2[30];
extern u16 dFTFoxAnimJabLoopStart_joint4[20];
extern u16 dFTFoxAnimJabLoopStart_joint5[32];
extern u16 dFTFoxAnimJabLoopStart_joint7[16];
extern u16 dFTFoxAnimJabLoopStart_joint10[26];
extern u16 dFTFoxAnimJabLoopStart_joint11[24];
extern u16 dFTFoxAnimJabLoopStart_joint12[16];
extern u16 dFTFoxAnimJabLoopStart_joint13[8];
extern u16 dFTFoxAnimJabLoopStart_joint15[10];
extern u16 dFTFoxAnimJabLoopStart_joint16[44];
extern u16 dFTFoxAnimJabLoopStart_joint18[16];
extern u16 dFTFoxAnimJabLoopStart_joint20[30];
extern u16 dFTFoxAnimJabLoopStart_joint21[24];
extern u16 dFTFoxAnimJabLoopStart_joint23[16];
extern u16 dFTFoxAnimJabLoopStart_joint24[24];
extern u16 dFTFoxAnimJabLoopStart_joint25[20];
extern u16 dFTFoxAnimJabLoopStart_joint26[38];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimJabLoopStart_joints[] = {
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimJabLoopStart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimJabLoopStart_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 912, -20,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimJabLoopStart_joint2[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -141, -58, -338, -49, -3, 63, 0, -104, 0, 53, 0, 67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), -535, 0, -601, 0, 436, 0, -88, 0, -33, -319,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 8), 135,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimJabLoopStart_joint4[20] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -18, 156, 10, 81, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 242, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 129, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 53, -6,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimJabLoopStart_joint5[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -109, 12, -165, -12, 258, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -296, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -223, -65, 362, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -289, -45, 315, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -314, -24, -327, -31, 185, -129,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimJabLoopStart_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1036, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1054, -17,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimJabLoopStart_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 37, 136, 39, -72, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -38, -25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 417, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -143, -11,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 5), -89,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimJabLoopStart_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 132, 7, 271, 30, 336, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 205, 15, 351, -5, 417, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 13, 345, -5, 439, 21,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimJabLoopStart_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 50,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -319, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -285, 34,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimJabLoopStart_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTFoxAnimJabLoopStart_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -706, -804, 2315, 59, -60, 12,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimJabLoopStart_joint16[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, 7, -1385, -37, -1635, 25,
	ftAnimSetVal0RateBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 7), 1596, 153, -1628, -7,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY, 8), 4096, 0, 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1789, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1874, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1779, 183, -1600, 27, -1925, -51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTFoxAnimJabLoopStart_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 353, 68,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1085, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, 197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimJabLoopStart_joint20[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1655, 11, -1734, 40, -1664, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 1490, -100, -1853, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1459, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1447, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1380, -109, -1546, -98, -1976, -123,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimJabLoopStart_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, -79, 137, 52, 134, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 68, 18, 165, -21, -27, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 91, 23, 144, -21, -27, 0,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimJabLoopStart_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 331, 75,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 471, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 458, -13,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimJabLoopStart_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -7, -102, 32, -226, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -74, -27, 7, -1, -98, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, -30, 4, -2, -84, 13,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimJabLoopStart_joint25[20] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 219, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -307, -136, 36,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTFoxAnimJabLoopStart_joint26[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -178, -122, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -252, -12, 405, 87, -231, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -251, 33, 400, -183, -228, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -86, 44, -511, -35, 265, 83,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
