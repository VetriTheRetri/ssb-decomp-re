/* AnimJoint data for relocData file 1012 (FTSamusAnimShieldOff) */
/* 1136 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimShieldOff_joint2[10];
extern u16 dFTSamusAnimShieldOff_joint3[30];
extern u16 dFTSamusAnimShieldOff_joint5[12];
extern u16 dFTSamusAnimShieldOff_joint6[76];
extern u16 dFTSamusAnimShieldOff_joint7[40];
extern u16 dFTSamusAnimShieldOff_joint8[50];
extern u16 dFTSamusAnimShieldOff_joint9[10];
extern u16 dFTSamusAnimShieldOff_joint12[10];
extern u16 dFTSamusAnimShieldOff_joint13[80];
extern u16 dFTSamusAnimShieldOff_joint15[48];
extern u16 dFTSamusAnimShieldOff_joint16[24];
extern u16 dFTSamusAnimShieldOff_joint18[24];
extern u16 dFTSamusAnimShieldOff_joint20[30];
extern u16 dFTSamusAnimShieldOff_joint21[34];
extern u16 dFTSamusAnimShieldOff_joint23[16];
extern u16 dFTSamusAnimShieldOff_joint24[24];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTSamusAnimShieldOff_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTSamusAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTSamusAnimShieldOff_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTSamusAnimShieldOff_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimShieldOff_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimShieldOff_joint12, /* [9] joint 12 */
	0x00000000, /* [10] NULL */
	0x00000000, /* [11] NULL */
	(u32)dFTSamusAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTSamusAnimShieldOff_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTSamusAnimShieldOff_joint16, /* [15] joint 16 */
	(u32)dFTSamusAnimShieldOff_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTSamusAnimShieldOff_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTSamusAnimShieldOff_joint21, /* [20] joint 21 */
	(u32)dFTSamusAnimShieldOff_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTSamusAnimShieldOff_joint24, /* [23] joint 24 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimShieldOff_pad[1] = { 0 };

/* Joint 2 */
u16 dFTSamusAnimShieldOff_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1600, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTSamusAnimShieldOff_joint3[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 158,
	ftAnimSetValRate(FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -60, -104, 240, 297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -13, 0, 0, -104, 40, 297, -160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimShieldOff_joint5[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTSamusAnimShieldOff_joint6[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2759, -34, 62, 0, -174, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -93, 240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -2841, -33, 58, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2860, -152, -64, -91,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -68, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3146, -143, 240, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3147, 2, 232, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2971, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 353, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2792, 124, -71, 36, 146, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2730, -9, 82, 55, -185, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2740, -10, 114, 31, -231, -45,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimShieldOff_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -876, -51,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1004, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1174, 499,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 584,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -304,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -785, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimShieldOff_joint8[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 187, -7, 107, -27, 134, 47,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 428, -107, -160, -67, 348, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -241, -147, -160, 40, 321, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -160, 112, 0, 0, 223, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 432, 172, 206, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -163,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimShieldOff_joint9[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 67, -17, -1474,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimShieldOff_joint12[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTSamusAnimShieldOff_joint13[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -80, -60, -46, 34, -233, -114,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -314, 329,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 80, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -233, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -314, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 46, 241, 220, 254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 169, 85, 195, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 169, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 141, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 91, -110,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -34, -82,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -123, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 96, -52, -42, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 64, -19, -163, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, -6, -128, -5, -215, -51,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTSamusAnimShieldOff_joint15[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1135, 76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -943, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1043, 471,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 518,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -281, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -730, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -716, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -640, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTSamusAnimShieldOff_joint16[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 136, -26, 56, -23, -462, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 86, 2, -28, 1, -392, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 1, -27, 0, -389, 2,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTSamusAnimShieldOff_joint18[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 515, 45,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 538, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 509, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -8,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTSamusAnimShieldOff_joint20[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1541, 15, 1560, -10, 1601, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 11), 1534, -2, 1636, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 1546, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1560, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1532, -1, 1637, 0, 1566, 5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTSamusAnimShieldOff_joint21[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 295, -20, 51, 2, 139, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 159, 3, -46, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 168, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 186, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 220, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 6, 160, 1, -49, -2,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimShieldOff_joint23[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 313, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 443, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTSamusAnimShieldOff_joint24[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 157, 8, 309, 0, -245, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 145, -5, 198, -8, -216, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 142, -3, 193, -4, -213, 3,
	ftAnimEnd(),
};
