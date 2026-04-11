/* AnimJoint data for relocData file 1737 (FTNessAnimCliffCatch) */
/* 880 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCliffCatch_joint1[18];
extern u16 dFTNessAnimCliffCatch_joint2[18];
extern u16 dFTNessAnimCliffCatch_joint5[16];
extern u16 dFTNessAnimCliffCatch_joint6[40];
extern u16 dFTNessAnimCliffCatch_joint7[16];
extern u16 dFTNessAnimCliffCatch_joint8[8];
extern u16 dFTNessAnimCliffCatch_joint9[18];
extern u16 dFTNessAnimCliffCatch_joint11[8];
extern u16 dFTNessAnimCliffCatch_joint12[38];
extern u16 dFTNessAnimCliffCatch_joint13[16];
extern u16 dFTNessAnimCliffCatch_joint14[22];
extern u16 dFTNessAnimCliffCatch_joint16[10];
extern u16 dFTNessAnimCliffCatch_joint17[24];
extern u16 dFTNessAnimCliffCatch_joint19[14];
extern u16 dFTNessAnimCliffCatch_joint20[24];
extern u16 dFTNessAnimCliffCatch_joint22[14];
extern u16 dFTNessAnimCliffCatch_joint23[24];
extern u16 dFTNessAnimCliffCatch_joint25[14];
extern u16 dFTNessAnimCliffCatch_joint26[44];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTNessAnimCliffCatch_joints[] = {
	(u32)dFTNessAnimCliffCatch_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCliffCatch_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCliffCatch_joint5, /* [2] joint 5 */
	0x00000000, /* [3] NULL */
	0x00000000, /* [4] NULL */
	(u32)dFTNessAnimCliffCatch_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCliffCatch_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCliffCatch_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCliffCatch_joint9, /* [8] joint 9 */
	(u32)dFTNessAnimCliffCatch_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTNessAnimCliffCatch_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCliffCatch_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCliffCatch_joint14, /* [13] joint 14 */
	(u32)dFTNessAnimCliffCatch_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTNessAnimCliffCatch_joint17, /* [16] joint 17 */
	(u32)dFTNessAnimCliffCatch_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTNessAnimCliffCatch_joint20, /* [19] joint 20 */
	(u32)dFTNessAnimCliffCatch_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTNessAnimCliffCatch_joint23, /* [22] joint 23 */
	(u32)dFTNessAnimCliffCatch_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTNessAnimCliffCatch_joint26, /* [25] joint 26 */
	0xFFFF00D2, /* [26] END */
};

/* Joint 1 */
u16 dFTNessAnimCliffCatch_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -240, -1320,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -900, -2029, -960, 2160,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -1254, -52, -240, 84,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimCliffCatch_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY, 4), 0, 0, 0, 0, 0, 84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimCliffCatch_joint5[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAY), 634, 600,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY, 4), 0, -9, 600, -84,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTNessAnimCliffCatch_joint6[40] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2452, 382, -878, -143, 245, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2834, 206, -1022, -237, -146, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2865, -48, -1354, -234, -83, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2737, -137, -1490, -57, 125, 141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2591, -146, -1468, 22, 198, 72,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimCliffCatch_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCliffCatch_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTNessAnimCliffCatch_joint9[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -389, -188, 169,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 288, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -357, -1, 0, 3, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimCliffCatch_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 44, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTNessAnimCliffCatch_joint12[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 239, 24, 1372, 18, -229, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 469, 214,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1415, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 38, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 694, 78, 223, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 626, -68, 1467, 51, 198, -25,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCliffCatch_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -9, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTNessAnimCliffCatch_joint14[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -268, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -84, 368,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -25, 409,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1206, 279, 0, -111, 0, 20,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimCliffCatch_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTNessAnimCliffCatch_joint17[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 374, 16, -404, 46, 92, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 405, -9, -107, 97, 4, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 393, -12, -42, 64, -9, -14,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimCliffCatch_joint19[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTNessAnimCliffCatch_joint20[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2102, -40, 1564, 56, 2071, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2197, -3, 1901, 98, 2270, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2200, -2, 1959, 57, 2319, 49,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimCliffCatch_joint22[14] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -124, 65, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 3, 0, -1, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTNessAnimCliffCatch_joint23[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -9, 0, 42, 0, -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -10, 0, 44, 0, -9, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, 0, 42, -1, -13, -3,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimCliffCatch_joint25[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimCliffCatch_joint26[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1836, -1, 1392, 4, 2108, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1827, -4, 1416, 7, 2100, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1824, -2, 1421, 4, 2097, -2,
	ftAnimEnd(),
	0x380E, 0xFFDB, 0x002B, 0x0068, 0x200F, 0x0004, 0x0000, 0x0001, 0x0000, 0xFFFF, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
