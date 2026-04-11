/* AnimJoint data for relocData file 1722 (FTNessAnimShieldOn) */
/* 944 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimShieldOn_joint2[20];
extern u16 dFTNessAnimShieldOn_joint3[8];
extern u16 dFTNessAnimShieldOn_joint5[14];
extern u16 dFTNessAnimShieldOn_joint6[40];
extern u16 dFTNessAnimShieldOn_joint7[22];
extern u16 dFTNessAnimShieldOn_joint8[20];
extern u16 dFTNessAnimShieldOn_joint9[22];
extern u16 dFTNessAnimShieldOn_joint11[14];
extern u16 dFTNessAnimShieldOn_joint12[40];
extern u16 dFTNessAnimShieldOn_joint13[24];
extern u16 dFTNessAnimShieldOn_joint14[18];
extern u16 dFTNessAnimShieldOn_joint16[14];
extern u16 dFTNessAnimShieldOn_joint17[24];
extern u16 dFTNessAnimShieldOn_joint19[16];
extern u16 dFTNessAnimShieldOn_joint20[24];
extern u16 dFTNessAnimShieldOn_joint22[18];
extern u16 dFTNessAnimShieldOn_joint23[24];
extern u16 dFTNessAnimShieldOn_joint25[20];
extern u16 dFTNessAnimShieldOn_joint26[34];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimShieldOn_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTNessAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTNessAnimShieldOn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimShieldOn_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimShieldOn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimShieldOn_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimShieldOn_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimShieldOn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimShieldOn_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimShieldOn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimShieldOn_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimShieldOn_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimShieldOn_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimShieldOn_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimShieldOn_joint26, /* [25] joint 26 */
	0xFFFF00E7, /* [26] END */
};

/* 4-byte alignment padding */
static u32 dFTNessAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTNessAnimShieldOn_joint2[20] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 537, -28,
	ftAnimSetValBlock(FT_ANIM_TRAX), -16,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 466, 2, 7, 160,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 4), -16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTNessAnimShieldOn_joint3[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, -360, 8,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimShieldOn_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 307, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimShieldOn_joint6[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1198, 101, -1347, 143, -1192, -213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1253, -188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1299, 320, -1405, -462,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1839, 301, -2118, -520,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1902, 11, -1581, -202, -2446, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1863, -39, -1657, -75, -2502, -55,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimShieldOn_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, -78,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -552, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 170,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimShieldOn_joint8[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 564, 0, -338, 0, -477, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimShieldOn_joint9[22] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -10, 0, 364, -3, -32, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -10, 0, 364, -3, -32, 4,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimShieldOn_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -358, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimShieldOn_joint12[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, -156, 569, -96, -119, -268,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -628, -236,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -572, -106, 472, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -629, -44, 375, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -661, -5, 123, -171, -861, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -640, 21, 32, -91, -919, -58,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimShieldOn_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -667, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, 243,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 181,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimShieldOn_joint14[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, 54, 126,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -102, 0, 497, 0, -130, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimShieldOn_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -935, 681,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 2314, -868, -656,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimShieldOn_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -365, 16, -279, -22, -297, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -263, 33, -378, -23, -479, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, 22, -391, -12, -513, -33,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimShieldOn_joint19[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 396, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 577, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 607, 30,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimShieldOn_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, 0, 12, -1, 26, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 9, 0, 2, -4, 21, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, -1, -2, -4, 19, -2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimShieldOn_joint22[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -173, 0, 94, 0, 154, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimShieldOn_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, -9, 136, -1, -210, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -172, -12, 142, 12, -308, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -179, -6, 159, 17, -298, 9,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimShieldOn_joint25[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 407, 53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 557, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 644, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTNessAnimShieldOn_joint26[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 76, 5, 25, 0, -202, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 114, 17, 28, 1, -335, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 131, 16, 30, 1, -361, -25,
	ftAnimEnd(),
	0x50EE, 0x0038, 0x0000, 0x0000, 0xFF82, 0xFFAE, 0xFFF4, 0x0801, 0x0004, 0x0000,
};
