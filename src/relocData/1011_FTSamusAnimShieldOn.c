/* AnimJoint data for relocData file 1011 (FTSamusAnimShieldOn) */
/* 736 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimShieldOn_joint2[10];
extern u16 dFTSamusAnimShieldOn_joint3[32];
extern u16 dFTSamusAnimShieldOn_joint5[10];
extern u16 dFTSamusAnimShieldOn_joint6[24];
extern u16 dFTSamusAnimShieldOn_joint7[16];
extern u16 dFTSamusAnimShieldOn_joint8[34];
extern u16 dFTSamusAnimShieldOn_joint9[8];
extern u16 dFTSamusAnimShieldOn_joint12[10];
extern u16 dFTSamusAnimShieldOn_joint13[24];
extern u16 dFTSamusAnimShieldOn_joint15[16];
extern u16 dFTSamusAnimShieldOn_joint16[24];
extern u16 dFTSamusAnimShieldOn_joint18[16];
extern u16 dFTSamusAnimShieldOn_joint20[24];
extern u16 dFTSamusAnimShieldOn_joint21[24];
extern u16 dFTSamusAnimShieldOn_joint23[16];
extern u16 dFTSamusAnimShieldOn_joint24[30];

/* Joint pointer table (24 entries, 96 bytes) */
AObjEvent32 * dFTSamusAnimShieldOn_joints[] = {
	NULL, /* [0] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint12, /* [9] joint 12 */
	NULL, /* [10] NULL */
	NULL, /* [11] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTSamusAnimShieldOn_joint24, /* [23] joint 24 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTSamusAnimShieldOn_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1600, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimShieldOn_joint3[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, -60, -104, 240, 297,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 158,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -13, 0, 0, -104, 40, 297, -160,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimShieldOn_joint5[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimShieldOn_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2740, 0, 114, 0, -231, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2746, -8, 90, -22, -183, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2759, -13, 62, -27, -174, 8,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimShieldOn_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -827, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, -49,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimShieldOn_joint8[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 466, -128, -23, 26, 110, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 187, -7, 107, -27, 134, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 428, -107, -160, -67, 348, 46,
	ftAnimBlock0(0),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimShieldOn_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimShieldOn_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimShieldOn_joint13[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -25, -128, 10, -215, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -44, -36, -65, 22, -170, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, -35, -46, 18, -233, -62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimShieldOn_joint15[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -106,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1061, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1135, -73,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimShieldOn_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 4, -27, 9, -389, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 111, 18, 31, 26, -450, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, 25, 56, 25, -462, -12,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimShieldOn_joint18[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 487, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 515, 27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimShieldOn_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1532, 3, 1637, -16, 1566, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1552, -1, 1555, -12, 1612, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1541, -10, 1560, 4, 1601, -11,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimShieldOn_joint21[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, 6, 160, -10, -49, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 283, 19, 80, -35, 95, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 295, 11, 51, -29, 139, 43,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimShieldOn_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 354, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 313, -41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimShieldOn_joint24[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 142, 5, 193, 22, -213, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 155, 1, 292, 25, -242, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 157, 1, 309, 16, -245, -2,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
