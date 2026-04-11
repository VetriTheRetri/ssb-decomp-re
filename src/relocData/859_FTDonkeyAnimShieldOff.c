/* AnimJoint data for relocData file 859 (FTDonkeyAnimShieldOff) */
/* 1200 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimShieldOff_joint2[14];
extern u16 dFTDonkeyAnimShieldOff_joint3[12];
extern u16 dFTDonkeyAnimShieldOff_joint5[20];
extern u16 dFTDonkeyAnimShieldOff_joint6[86];
extern u16 dFTDonkeyAnimShieldOff_joint7[40];
extern u16 dFTDonkeyAnimShieldOff_joint8[26];
extern u16 dFTDonkeyAnimShieldOff_joint9[18];
extern u16 dFTDonkeyAnimShieldOff_joint11[12];
extern u16 dFTDonkeyAnimShieldOff_joint12[82];
extern u16 dFTDonkeyAnimShieldOff_joint13[40];
extern u16 dFTDonkeyAnimShieldOff_joint14[38];
extern u16 dFTDonkeyAnimShieldOff_joint15[14];
extern u16 dFTDonkeyAnimShieldOff_joint17[16];
extern u16 dFTDonkeyAnimShieldOff_joint18[24];
extern u16 dFTDonkeyAnimShieldOff_joint20[16];
extern u16 dFTDonkeyAnimShieldOff_joint22[24];
extern u16 dFTDonkeyAnimShieldOff_joint23[24];
extern u16 dFTDonkeyAnimShieldOff_joint25[40];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimShieldOff_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTDonkeyAnimShieldOff_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimShieldOff_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimShieldOff_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimShieldOff_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimShieldOff_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimShieldOff_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimShieldOff_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimShieldOff_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimShieldOff_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimShieldOff_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimShieldOff_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimShieldOff_joint15, /* [14] joint 15 */
	(u32)dFTDonkeyAnimShieldOff_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimShieldOff_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimShieldOff_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimShieldOff_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimShieldOff_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimShieldOff_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF0120, /* [25] END */
};

/* 4-byte alignment padding */
static u32 dFTDonkeyAnimShieldOff_pad[1] = { 0 };

/* Joint 2 */
u16 dFTDonkeyAnimShieldOff_joint2[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 187, 911, -600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 0, 1031, -400,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTDonkeyAnimShieldOff_joint3[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -265, -41, -16, 0, -214, -154,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimShieldOff_joint5[20] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 319, -157,
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 697, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 41,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 12), 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 750, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 9), 750,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimShieldOff_joint6[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -105, 22, 7, -32, -470, -253,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -127, -70, -144, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1104, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1232, 473,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, 43, -515, -163, -157, 385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 83, -470, 52, -462, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -34, -42, -410, 68, -558, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -140, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -92, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -449, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -468, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -113, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -83, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -62, 21, -84, 7, -473, -4,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimShieldOff_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, -61,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1191, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1049, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 487,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -153, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -276, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -404, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimShieldOff_joint8[26] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 15, 17,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 88, 0, -29, 7, 386, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 4, -7, 62, 2, -643, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimShieldOff_joint9[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 1354, 213,
	ftAnimSetValRate(FT_ANIM_ROTX), -187, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -67, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 187, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 7), 174,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTDonkeyAnimShieldOff_joint11[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -398, 70, 29, 0, 0, 0,
	_FT_ANIM_CMD(11, 0, 1), 4,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimShieldOff_joint12[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1687, -10, 1517, -23, -2060, -257,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1646, 27, 1497, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2318, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2705, -260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1732, 43, 1454, -218, -2838, 480,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1733, -96, 1059, -163, -1744, 384,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1539, -106, 1128, 68, -2068, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1615, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1431, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2165, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2048, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1592, -30, -2046, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1517, -30, -2078, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1492, -25, 1436, 4, -2087, -9,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimShieldOff_joint13[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1129, -62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1192, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1093, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1049, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -329, 485,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -163, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -413, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimShieldOff_joint14[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 15, -80, 16, -136, 363, -55,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 702, 18, -13,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 700, 16, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -151, -4, -7, 11, 124, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -4, 22, 62, 0, -643, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 98, 0, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTDonkeyAnimShieldOff_joint15[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), -1715, 2412, 120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, 120, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX, 12), -1340, 2502, 120,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimShieldOff_joint17[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -404,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -404, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), -921,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -404,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimShieldOff_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 4, 0, -310, -2, -777, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -57, -5, -391, -2, -340, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -60, -2, -392, -1, -329, 11,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimShieldOff_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1006, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1027, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimShieldOff_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 23, 0, -61, 2, -180, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -135, 12, 13, 1, -366, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 21, 14, 1, -369, -3,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimShieldOff_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 218, -3, 299, -1, -630, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 105, -2, 218, -2, -304, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -1, 217, -1, -295, 8,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimShieldOff_joint25[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 959, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 995, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, 0,
	ftAnimEnd(),
	0x0000, 0x200E, 0xF90F, 0x0000, 0xF988, 0xFFFF, 0x0561, 0xFFFD, 0x200F, 0x000B, 0xF9D2, 0xFFF6, 0xF951, 0xFFFE, 0x04C8, 0xFFFB, 0x200F, 0x0001, 0xF9C0, 0xFFEE, 0xF950, 0xFFFF, 0x04C5, 0xFFFE, 0x0000,
};
