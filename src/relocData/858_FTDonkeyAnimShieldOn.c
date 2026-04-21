/* AnimJoint data for relocData file 858 (FTDonkeyAnimShieldOn) */
/* 800 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimShieldOn_joint2[14];
extern u16 dFTDonkeyAnimShieldOn_joint3[10];
extern u16 dFTDonkeyAnimShieldOn_joint5[14];
extern u16 dFTDonkeyAnimShieldOn_joint6[24];
extern u16 dFTDonkeyAnimShieldOn_joint7[16];
extern u16 dFTDonkeyAnimShieldOn_joint8[18];
extern u16 dFTDonkeyAnimShieldOn_joint9[14];
extern u16 dFTDonkeyAnimShieldOn_joint11[10];
extern u16 dFTDonkeyAnimShieldOn_joint12[24];
extern u16 dFTDonkeyAnimShieldOn_joint13[16];
extern u16 dFTDonkeyAnimShieldOn_joint14[30];
extern u16 dFTDonkeyAnimShieldOn_joint15[14];
extern u16 dFTDonkeyAnimShieldOn_joint17[8];
extern u16 dFTDonkeyAnimShieldOn_joint18[24];
extern u16 dFTDonkeyAnimShieldOn_joint20[16];
extern u16 dFTDonkeyAnimShieldOn_joint22[24];
extern u16 dFTDonkeyAnimShieldOn_joint23[24];
extern u16 dFTDonkeyAnimShieldOn_joint25[16];
extern u16 dFTDonkeyAnimShieldOn_joint26[30];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimShieldOn_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimShieldOn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimShieldOn_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimShieldOn_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimShieldOn_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimShieldOn_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimShieldOn_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimShieldOn_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimShieldOn_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimShieldOn_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimShieldOn_joint26, /* [25] joint 26 */
};

/* 4-byte alignment padding */
static u32 dFTDonkeyAnimShieldOn_pad[1] = { 0 };

/* Joint 2 */
u16 dFTDonkeyAnimShieldOn_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1031, -400,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 187, 911, -600,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimShieldOn_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, 0, -214, -154,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimShieldOn_joint5[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 750, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 41, 0, 319, -157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 697, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimShieldOn_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -62, -16, -84, 15, -473, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -109, 0, 7, 17, -373, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -105, 4, 7, 0, -470, -96,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimShieldOn_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -407, -142,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1001, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, -128,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimShieldOn_joint8[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 88, 0, -29, 7, 386, -80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimShieldOn_joint9[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -67, -44, 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -187, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimShieldOn_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -398, 70, 29, 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimShieldOn_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1492, 31, 1436, -11, -2087, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1659, 46, 1488, 41, -1965, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1687, 28, 1517, 28, -2060, -95,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimShieldOn_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -416, -138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1000, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1129, -129,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimShieldOn_joint14[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 98, 0, 0, 700, 16, -9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 702, 18, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 90, -20, 402, 4, 291, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 15, -80, 16, -136, 363, -55,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTDonkeyAnimShieldOn_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -1340, 2502, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 120, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 4), -1715, 2412, 120,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimShieldOn_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -404, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTDonkeyAnimShieldOn_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -60, 21, -392, 9, -329, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 2, 7, -329, 24, -723, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4, 2, -310, 18, -777, -54,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimShieldOn_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1026, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1020, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1006, -14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimShieldOn_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 0, 14, -8, -369, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2, 45, -43, -22, -211, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, 26, -61, -17, -180, 30,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimShieldOn_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 104, 11, 217, 11, -295, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 192, 35, 284, 22, -592, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 218, 26, 299, 14, -630, -38,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimShieldOn_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 975, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, -15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimShieldOn_joint26[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1600, -6, -1712, 9, 1221, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1736, -59, -1666, 14, 1353, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1777, -41, -1656, 9, 1377, 24,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
