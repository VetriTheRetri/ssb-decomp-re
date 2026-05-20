/* AnimJoint data for relocData file 1173 (FTLinkAnimShieldOn) */
/* 880 bytes: 120-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimShieldOn_joint1[8];
extern u16 dFTLinkAnimShieldOn_joint2[12];
extern u16 dFTLinkAnimShieldOn_joint3[14];
extern u16 dFTLinkAnimShieldOn_joint5[18];
extern u16 dFTLinkAnimShieldOn_joint6[32];
extern u16 dFTLinkAnimShieldOn_joint7[20];
extern u16 dFTLinkAnimShieldOn_joint10[22];
extern u16 dFTLinkAnimShieldOn_joint11[24];
extern u16 dFTLinkAnimShieldOn_joint12[16];
extern u16 dFTLinkAnimShieldOn_joint13[8];
extern u16 dFTLinkAnimShieldOn_joint14[10];
extern u16 dFTLinkAnimShieldOn_joint17[24];
extern u16 dFTLinkAnimShieldOn_joint18[10];
extern u16 dFTLinkAnimShieldOn_joint19[14];
extern u16 dFTLinkAnimShieldOn_joint21[14];
extern u16 dFTLinkAnimShieldOn_joint22[24];
extern u16 dFTLinkAnimShieldOn_joint24[16];
extern u16 dFTLinkAnimShieldOn_joint26[24];
extern u16 dFTLinkAnimShieldOn_joint27[24];
extern u16 dFTLinkAnimShieldOn_joint29[16];
extern u16 dFTLinkAnimShieldOn_joint30[28];

/* Joint pointer table (30 entries, 120 bytes) */
AObjEvent32 * dFTLinkAnimShieldOn_joints[] = {
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint17, /* [14] joint 17 */
	NULL, /* [15] NULL */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint26, /* [24] joint 26 */
	NULL, /* [25] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint27, /* [26] joint 27 */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint29, /* [27] joint 29 */
	NULL, /* [28] NULL */
	(AObjEvent32 *)dFTLinkAnimShieldOn_joint30, /* [29] joint 30 */
};

/* 4-byte alignment padding */
static u32 dFTLinkAnimShieldOn_pad[1] = { 0 };

/* Joint 1 */
u16 dFTLinkAnimShieldOn_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimShieldOn_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 901, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 729, -11, -61, 53,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTLinkAnimShieldOn_joint3[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 276, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -51, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTLinkAnimShieldOn_joint5[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 259, 166, 56,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 310, -48, -2, -35, -71, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTLinkAnimShieldOn_joint6[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1328, 2, -1281, -17, 1522, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1706, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1194, 192, 1400, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -940, 101, 1024, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -991, -51, -2006, -299, 809, -214,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTLinkAnimShieldOn_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -500, -190,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -836, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -112, 498,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTLinkAnimShieldOn_joint10[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 7, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -32, 141, -411, -171, 363, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 570, 42, -680, 62, -537, -46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTLinkAnimShieldOn_joint11[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 416, -35, 123, -41, -50, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 127, -105, 4, -9, -147, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -68, 5, 0, -213, -65,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTLinkAnimShieldOn_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -587, -79,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -815, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimShieldOn_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTLinkAnimShieldOn_joint14[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1486, -1003, 108,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTLinkAnimShieldOn_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1697, 564, -536, -403, -339, -663,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3122, 393, -1374, -248, -1479, -337,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3271, 18, -1530, 0, -1690, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTLinkAnimShieldOn_joint18[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -7, -102, 36,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTLinkAnimShieldOn_joint19[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -20, 16, -100, 20, 104, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTLinkAnimShieldOn_joint21[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, -59,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTLinkAnimShieldOn_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -242, 33, -244, -32, 108, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -76, 53, -340, -11, -245, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -37, 39, -339, 0, -292, -47,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTLinkAnimShieldOn_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 249, 132,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 721, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 777, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTLinkAnimShieldOn_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 329, -2, -161, 4, -34, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 310, -9, -147, -3, -223, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, -9, -156, -8, -241, -18,
	ftAnimEnd(),
};

/* Joint 27 */
u16 dFTLinkAnimShieldOn_joint27[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, -24, 269, 26, -125, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 118, -53, 375, 20, -451, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80, -38, 384, 8, -508, -57,
	ftAnimEnd(),
};

/* Joint 29 */
u16 dFTLinkAnimShieldOn_joint29[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 424, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 729, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 775, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 30 */
u16 dFTLinkAnimShieldOn_joint30[28] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -427, 4, 3142, -2, -69, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -424, 0, 3126, -3, -127, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -422, 2, 3126, 0, -134, -6,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
