/* AnimJoint data for relocData file 868 (FTDonkeyAnimThrownFoxFStart) */
/* 768 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimThrownFoxFStart_joint2[10];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint3[10];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint5[10];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint6[24];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint7[16];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint8[8];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint9[8];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint11[10];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint12[24];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint13[16];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint14[10];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint17[10];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint18[30];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint20[16];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint22[32];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint23[38];
extern u16 dFTDonkeyAnimThrownFoxFStart_joint25[60];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTDonkeyAnimThrownFoxFStart_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint3, /* [2] joint 3 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint9, /* [8] joint 9 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint14, /* [13] joint 14 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint17, /* [14] joint 17 */
	0x00000000, /* [15] NULL */
	0x00000000, /* [16] NULL */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint18, /* [17] joint 18 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint23, /* [22] joint 23 */
	(u32)dFTDonkeyAnimThrownFoxFStart_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF00AA, /* [25] END */
};

/* Joint 2 */
u16 dFTDonkeyAnimThrownFoxFStart_joint2[10] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), -522,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -24, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), -522,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTDonkeyAnimThrownFoxFStart_joint3[10] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -266, -13, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -268, 78, -85,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimThrownFoxFStart_joint5[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 571,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 24, 41,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 709,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTDonkeyAnimThrownFoxFStart_joint6[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -356, -5, -114, -1, -14, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -405, -8, -143, -9, -11, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -4, -150, -6, -14, -2,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTDonkeyAnimThrownFoxFStart_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -550, 12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -411, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, 22,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTDonkeyAnimThrownFoxFStart_joint8[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTDonkeyAnimThrownFoxFStart_joint9[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -67, -44,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimThrownFoxFStart_joint11[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -961,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 70, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -957,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTDonkeyAnimThrownFoxFStart_joint12[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1865, 3, -1799, 3, 1678, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1896, 5, -1775, 3, 1706, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1899, 3, -1773, 1, 1707, 1,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTDonkeyAnimThrownFoxFStart_joint13[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -609, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -534, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -522, 12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTDonkeyAnimThrownFoxFStart_joint14[10] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 103,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), 487,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTDonkeyAnimThrownFoxFStart_joint17[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -893, -1340, 2502, 120, 120, 120,
	ftAnimBlock(0, 5),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTDonkeyAnimThrownFoxFStart_joint18[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1784, 35, -1245, 9, 1791, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -1530, 33, -1181, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1316, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1514, 15, -1140, 41, 982, -106,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTDonkeyAnimThrownFoxFStart_joint20[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 843, 62,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1244, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1265, 21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTDonkeyAnimThrownFoxFStart_joint22[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, 11, -87, 24, -565, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -325, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -129, 160, 147, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 57, 143, 292, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 156, 98, 354, 61, -266, 58,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTDonkeyAnimThrownFoxFStart_joint23[38] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1481, -3, 1465, -28, -1417, -87,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1258, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1335, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1724, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1982, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1112, -97, -2064, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1183, 151, 1063, -48, -2003, 61,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTDonkeyAnimThrownFoxFStart_joint25[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 796, 80,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1057, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1016, -40,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008C, 0x0049, 0x00C4, 0xFFF3, 0xFDAB, 0x003E, 0x2809, 0x0002, 0xFEA4, 0x00DA, 0x2805, 0x0004, 0xFFCD, 0xFFCF, 0x2003, 0x0001, 0x00D5, 0x0052, 0x2003, 0x0001, 0x0130, 0xFF9E, 0x2803, 0x0002, 0xFE6B, 0xFEF2, 0x2009, 0x0001, 0xFF9E, 0x00CF, 0x2009, 0x0001, 0x0043, 0x006D, 0x200F, 0x0001, 0xFDF5, 0xFF8A, 0xFFB6, 0xFFEA, 0x0077, 0x0034, 0x0000,
};
