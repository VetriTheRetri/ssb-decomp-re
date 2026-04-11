/* AnimJoint data for relocData file 710 (FTFoxAnimThrownMarioBros) */
/* 1248 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimThrownMarioBros_joint2[22];
extern u16 dFTFoxAnimThrownMarioBros_joint3[16];
extern u16 dFTFoxAnimThrownMarioBros_joint5[20];
extern u16 dFTFoxAnimThrownMarioBros_joint6[68];
extern u16 dFTFoxAnimThrownMarioBros_joint7[36];
extern u16 dFTFoxAnimThrownMarioBros_joint8[10];
extern u16 dFTFoxAnimThrownMarioBros_joint9[12];
extern u16 dFTFoxAnimThrownMarioBros_joint11[10];
extern u16 dFTFoxAnimThrownMarioBros_joint12[68];
extern u16 dFTFoxAnimThrownMarioBros_joint13[36];
extern u16 dFTFoxAnimThrownMarioBros_joint14[10];
extern u16 dFTFoxAnimThrownMarioBros_joint16[10];
extern u16 dFTFoxAnimThrownMarioBros_joint17[34];
extern u16 dFTFoxAnimThrownMarioBros_joint19[24];
extern u16 dFTFoxAnimThrownMarioBros_joint21[42];
extern u16 dFTFoxAnimThrownMarioBros_joint22[34];
extern u16 dFTFoxAnimThrownMarioBros_joint24[24];
extern u16 dFTFoxAnimThrownMarioBros_joint25[42];
extern u16 dFTFoxAnimThrownMarioBros_joint26[52];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimThrownMarioBros_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimThrownMarioBros_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimThrownMarioBros_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimThrownMarioBros_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimThrownMarioBros_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimThrownMarioBros_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimThrownMarioBros_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimThrownMarioBros_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimThrownMarioBros_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimThrownMarioBros_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimThrownMarioBros_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimThrownMarioBros_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimThrownMarioBros_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimThrownMarioBros_joint26, /* [25] joint 26 */
	0xFFFF0129, /* [26] END */
};

/* Joint 2 */
u16 dFTFoxAnimThrownMarioBros_joint2[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, -240,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 300, 864, -120, 192,
	ftAnimSetValRateT(FT_ANIM_TRAX, 6), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 840, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimThrownMarioBros_joint3[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 178,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimThrownMarioBros_joint5[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimThrownMarioBros_joint6[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1460, 14, 1826, -7, -1190, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1503, -57, 1781, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1291, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1271, 209,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1395, -61, 1670, -70, -872, 239,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1415, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1708, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -914, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1456, -124, -1068, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1167, -539, 1620, 41, -642, 382,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 376, -790, 1790, 170, -304, 338,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimThrownMarioBros_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -273,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -315, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -536, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, 196,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimThrownMarioBros_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimThrownMarioBros_joint9[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 178,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimThrownMarioBros_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimThrownMarioBros_joint12[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1756, -12, -1826, 9, 2026, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 1713, 57, -1781, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1925, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1945, 214,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1822, 61, -1666, 72, 2353, 243,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1803, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1703, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2433, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2313, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1764, 123, 2166, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2050, 536, -1612, -38, 2581, 366,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2836, 786, -1779, -167, 2899, 318,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimThrownMarioBros_joint13[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -7, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -611, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -345, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 185,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimThrownMarioBros_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 272, 0, 0,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimThrownMarioBros_joint16[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 10),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimThrownMarioBros_joint17[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -26, 0, 3, -2, 235, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -38, 6, -1, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -158, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -209, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -71, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -31, 6, 6, 7, 127, 199,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimThrownMarioBros_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 564, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 303, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -228,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTFoxAnimThrownMarioBros_joint21[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 47, -14, 7, 1, -110, -311,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 61, -5, 12, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -651, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -385, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 56, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 56, -4, 9, -2, 133, 77,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimThrownMarioBros_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1635, 0, -1605, -2, -1373, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 1646, -6, -1609, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1767, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1817, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1679, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1640, -6, -1602, 7, -1480, 199,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimThrownMarioBros_joint24[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 227, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 564, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 688, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 303, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 75, -228,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimThrownMarioBros_joint25[42] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1673, 10, 1593, 1, 1498, -312,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), -1689, 6, 1597, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 956, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1222, 171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1438, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1665, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, 4, 1595, -2, 1743, 77,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimThrownMarioBros_joint26[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -178,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -178, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 189, 212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 671, 40,
	ftAnimEnd(),
	0x0000, 0x4002, 0x0000, 0x48EC, 0x0000, 0x0000, 0x0000, 0x0040, 0xFE3E, 0x2003, 0x0006, 0x0000, 0x004C, 0x2003, 0x0001, 0x0214, 0x0047, 0x2003, 0x0001, 0x008F, 0xFF4F, 0x2003, 0x0002, 0x0000, 0xFFF5, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
