/* AnimJoint data for relocData file 1578 (FTCaptainAnimEggLayPulled) */
/* 848 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimEggLayPulled_joint1[12];
extern u16 dFTCaptainAnimEggLayPulled_joint2[8];
extern u16 dFTCaptainAnimEggLayPulled_joint3[18];
extern u16 dFTCaptainAnimEggLayPulled_joint5[26];
extern u16 dFTCaptainAnimEggLayPulled_joint6[24];
extern u16 dFTCaptainAnimEggLayPulled_joint7[20];
extern u16 dFTCaptainAnimEggLayPulled_joint8[8];
extern u16 dFTCaptainAnimEggLayPulled_joint9[14];
extern u16 dFTCaptainAnimEggLayPulled_joint11[14];
extern u16 dFTCaptainAnimEggLayPulled_joint12[24];
extern u16 dFTCaptainAnimEggLayPulled_joint13[16];
extern u16 dFTCaptainAnimEggLayPulled_joint14[8];
extern u16 dFTCaptainAnimEggLayPulled_joint15[10];
extern u16 dFTCaptainAnimEggLayPulled_joint17[10];
extern u16 dFTCaptainAnimEggLayPulled_joint18[32];
extern u16 dFTCaptainAnimEggLayPulled_joint20[20];
extern u16 dFTCaptainAnimEggLayPulled_joint22[24];
extern u16 dFTCaptainAnimEggLayPulled_joint23[30];
extern u16 dFTCaptainAnimEggLayPulled_joint25[54];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimEggLayPulled_joints[] = {
	(u32)dFTCaptainAnimEggLayPulled_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimEggLayPulled_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimEggLayPulled_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimEggLayPulled_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimEggLayPulled_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimEggLayPulled_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimEggLayPulled_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimEggLayPulled_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimEggLayPulled_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimEggLayPulled_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimEggLayPulled_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimEggLayPulled_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimEggLayPulled_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimEggLayPulled_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimEggLayPulled_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimEggLayPulled_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimEggLayPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimEggLayPulled_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimEggLayPulled_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF00C3, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimEggLayPulled_joint1[12] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1655,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 295,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 1292,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 2), 1292,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimEggLayPulled_joint2[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -64, -295,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTCaptainAnimEggLayPulled_joint3[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 41,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 107, 0, 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 271, 121,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 363,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimEggLayPulled_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, -49, 0, -18, 0, 3,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -115, -110, -35, 23, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -157, -107, 33,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimEggLayPulled_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2977, -10, 5, -81, -524, 155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -3009, -16, -104, -20, -211, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3020, -10, -117, -12, -97, 113,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimEggLayPulled_joint7[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, 318,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -142,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimEggLayPulled_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimEggLayPulled_joint9[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -30, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -30,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimEggLayPulled_joint11[14] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -15,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -92, -30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), -92,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimEggLayPulled_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -129, 58, 144, 8, 592, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -99, -24, 132, -15, 631, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -119, -19, 121, -10, 636, 5,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimEggLayPulled_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 459,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -302, 43,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimEggLayPulled_joint14[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimEggLayPulled_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 3),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimEggLayPulled_joint17[10] = {
	ftAnimSetVal(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimEggLayPulled_joint18[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -211, 70, -70, -472, -559,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -13, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -20, -106, -1032, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -21, 12, -1098, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3, 25, -6, 7, -1101, -3,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimEggLayPulled_joint20[20] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 280,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, 153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 801, 48,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimEggLayPulled_joint22[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 75, 1650, 82, -1528, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1664, -9, 1664, -68, -1584, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1679, -15, 1595, -69, -1594, -10,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimEggLayPulled_joint23[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -106, 110, 82, -76, -481,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 39, -5, 198, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 2, 196, -1, -599, 20,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimEggLayPulled_joint25[54] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 366,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 907, 192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 926, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 924, -2,
	ftAnimEnd(),
	0x0000, 0x200E, 0x00A1, 0xFFEF, 0x016D, 0x0046, 0xFEE9, 0xFF87, 0x2807, 0x0002, 0x00C1, 0x0031, 0x0192, 0xFFDD, 0x2009, 0x0001, 0xFE6F, 0xFFEC, 0x2009, 0x0001, 0xFEBF, 0x0047, 0x200F, 0x0001, 0x00F3, 0x0032, 0x016D, 0xFFDB, 0xFEFF, 0x003F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
