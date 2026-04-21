/* AnimJoint data for relocData file 874 (FTDonkeyAnimCliffCatch) */
/* 720 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimCliffCatch_joint1[12];
extern u16 dFTDonkeyAnimCliffCatch_joint2[8];
extern u16 dFTDonkeyAnimCliffCatch_joint3[14];
extern u16 dFTDonkeyAnimCliffCatch_joint5[14];
extern u16 dFTDonkeyAnimCliffCatch_joint6[24];
extern u16 dFTDonkeyAnimCliffCatch_joint7[16];
extern u16 dFTDonkeyAnimCliffCatch_joint8[14];
extern u16 dFTDonkeyAnimCliffCatch_joint9[8];
extern u16 dFTDonkeyAnimCliffCatch_joint11[10];
extern u16 dFTDonkeyAnimCliffCatch_joint12[24];
extern u16 dFTDonkeyAnimCliffCatch_joint13[16];
extern u16 dFTDonkeyAnimCliffCatch_joint14[10];
extern u16 dFTDonkeyAnimCliffCatch_joint17[10];
extern u16 dFTDonkeyAnimCliffCatch_joint18[24];
extern u16 dFTDonkeyAnimCliffCatch_joint20[16];
extern u16 dFTDonkeyAnimCliffCatch_joint22[24];
extern u16 dFTDonkeyAnimCliffCatch_joint23[24];
extern u16 dFTDonkeyAnimCliffCatch_joint25[16];
extern u16 dFTDonkeyAnimCliffCatch_joint26[24];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimCliffCatch_joints[] = {
	(u32)dFTDonkeyAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimCliffCatch_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimCliffCatch_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimCliffCatch_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimCliffCatch_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimCliffCatch_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimCliffCatch_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimCliffCatch_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimCliffCatch_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimCliffCatch_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimCliffCatch_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimCliffCatch_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimCliffCatch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimCliffCatch_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimCliffCatch_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTDonkeyAnimCliffCatch_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTDonkeyAnimCliffCatch_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -2250, -582,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -3004, -49, 0, 55,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimCliffCatch_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -24, 1032, -402,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimCliffCatch_joint3[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 386, -48, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 135, -6, -52, 0, -31, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimCliffCatch_joint5[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -337, 17, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -230, 5, 17, 0, 6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimCliffCatch_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -128, 7, -162, -6, -320, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -60, 26, -193, -5, -611, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -42, 17, -195, -1, -673, -61,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimCliffCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1004, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -939, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -911, 28,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimCliffCatch_joint8[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -250, -251, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -258, 0, -178, 1, -100, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimCliffCatch_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 393, 144, 74,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimCliffCatch_joint11[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -584, -194, 83,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -822, -174, 94,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimCliffCatch_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1662, 2, 1522, -7, 1307, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1659, -1, 1493, 0, 1018, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1661, 1, 1500, 7, 952, -66,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimCliffCatch_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -972, -8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -933, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -904, 29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimCliffCatch_joint14[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 536,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 446, 0,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimCliffCatch_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimCliffCatch_joint18[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -66, 14, -487, -1, 2616, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -51, -17, -522, -22, 2375, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, -20, -543, -20, 2343, -31,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimCliffCatch_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 994, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1048, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1049, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimCliffCatch_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -48, 19, 32, -3, 71, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 106, 65, 13, -5, 46, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 51, 9, -3, 41, -4,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimCliffCatch_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -143, -11, 278, -4, 2400, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -190, -10, 252, -6, 2235, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -196, -5, 248, -3, 2205, -29,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimCliffCatch_joint25[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1089, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1087, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1083, -4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTDonkeyAnimCliffCatch_joint26[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1562, -3, 1683, 8, -1300, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1576, -3, 1729, 14, -1275, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1578, -1, 1738, 9, -1270, 5,
	ftAnimEnd(),
};
