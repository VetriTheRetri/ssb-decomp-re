/* AnimJoint data for relocData file 1371 (FTKirbyAnimHammerLanding) */
/* 1536 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimHammerLanding_joint1[72];
extern u16 dFTKirbyAnimHammerLanding_joint2[12];
extern u16 dFTKirbyAnimHammerLanding_joint3[26];
extern u16 dFTKirbyAnimHammerLanding_joint5[26];
extern u16 dFTKirbyAnimHammerLanding_joint6[58];
extern u16 dFTKirbyAnimHammerLanding_joint7[14];
extern u16 dFTKirbyAnimHammerLanding_joint9[26];
extern u16 dFTKirbyAnimHammerLanding_joint10[58];
extern u16 dFTKirbyAnimHammerLanding_joint11[16];
extern u16 dFTKirbyAnimHammerLanding_joint13[34];
extern u16 dFTKirbyAnimHammerLanding_joint14[70];
extern u16 dFTKirbyAnimHammerLanding_joint16[16];
extern u16 dFTKirbyAnimHammerLanding_joint18[102];
extern u16 dFTKirbyAnimHammerLanding_joint19[82];
extern u16 dFTKirbyAnimHammerLanding_joint21[112];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimHammerLanding_joints[] = {
	(u32)dFTKirbyAnimHammerLanding_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimHammerLanding_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimHammerLanding_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimHammerLanding_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimHammerLanding_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimHammerLanding_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimHammerLanding_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimHammerLanding_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimHammerLanding_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimHammerLanding_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimHammerLanding_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimHammerLanding_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimHammerLanding_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimHammerLanding_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimHammerLanding_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0150, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimHammerLanding_joint1[72] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 660,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, -200, 4096, 136, 4096, -273, 4096, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 510, 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 600, -200, 4096, 136, 4096, -273, 4096, 136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 510, 4505, 3276, 4505,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -136, 4096, 273, 4096, -136,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 660,
	ftAnimLoop(0x6800, -140),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimHammerLanding_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimHammerLanding_joint3[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -178, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, -44,
	ftAnimLoop(0x6800, -50),
};

/* Joint 5 */
u16 dFTKirbyAnimHammerLanding_joint5[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -240, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 714, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, -71,
	ftAnimLoop(0x6800, -50),
};

/* Joint 6 */
u16 dFTKirbyAnimHammerLanding_joint6[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -1, 97, 0, -1608, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 804, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 97, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1645, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1647, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1672, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 808, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 831, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1647, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -26, 97, 0, -1608, 39,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimHammerLanding_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimLoop(0x6800, -26),
};

/* Joint 9 */
u16 dFTKirbyAnimHammerLanding_joint9[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 268, -71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 240, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 714, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 268, -71,
	ftAnimLoop(0x6800, -50),
};

/* Joint 10 */
u16 dFTKirbyAnimHammerLanding_joint10[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2412, 1, -94, 0, -1608, 3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3686, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 2412, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -97, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1645, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1647, 18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1672, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2408, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2385, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1647, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 26, -94, 2, -1608, 39,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimHammerLanding_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTKirbyAnimHammerLanding_joint13[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -491, -31, -22, -1, -723, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 204, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -491, 31, -22, 1, -723, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -8, -732,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -491, -31, -22, -1, -723, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 14 */
u16 dFTKirbyAnimHammerLanding_joint14[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1117, 49, -1325, 0, 2445, -46,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1328, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), 1564, 73, 1593, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1641, 130, 1392, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1588, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1826, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2098, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1754, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1608, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1122, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1822, 228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2394, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1117, -5, -1325, 2, 2445, 51,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimHammerLanding_joint16[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimHammerLanding_joint18[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, -62, 1164, 67, -1438, -75,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1744, 27, -1704, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1324, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1351, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1333, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1758, 67, -1611, 91,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1407, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1878, 177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1216, -18, 2112, 75,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1366, 32, 1867, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1496, -105,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1704, 68,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1363, -20, 1786, -81,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1361, 67, 1320, -175,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1612, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1440, 59, 1186, -77, -1492, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, 39, 1164, -22, -1438, 53,
	ftAnimLoop(0x6800, -200),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimHammerLanding_joint19[82] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1118, 116, 1331, -3, 1194, 48,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2046, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 1329, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1608, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1722, 124,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2099, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2249, 172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2050, -218,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2049, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1649, -74,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1818, -230,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1247, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1573, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1390, -227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1118, -272, 1331, 1, 1194, -52,
	ftAnimLoop(0x6800, -160),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimHammerLanding_joint21[112] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
	0x280E, 0xF4F7, 0xFFB0, 0x01F8, 0xFFAE, 0x00C8, 0xFFA8, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2803, 0x0004, 0xF48C, 0x001C, 0x2809, 0x0005, 0xFFA0, 0x0044, 0x2005, 0x0003, 0x00B1, 0xFFAF, 0x2005, 0x0001, 0x005F, 0xFF85, 0x2805, 0x0004, 0xFE45, 0x0016, 0x2003, 0x0001, 0xF49E, 0xFFEE, 0x2803, 0x0004, 0xF42F, 0x0044, 0x2009, 0x0001, 0xFFF9, 0x0068, 0x2809, 0x0003, 0x005E, 0xFFA4, 0x0801, 0x0002, 0x2005, 0x0001, 0xFE88, 0x0072, 0x2805, 0x0004, 0x0088, 0x001B, 0x200B, 0x0001, 0xF47A, 0x0038, 0xFFF2, 0xFF9E, 0x2809, 0x0004, 0xFFFA, 0x005D, 0x2803, 0x0005, 0xF482, 0x0045, 0x0801, 0x0003, 0x2005, 0x0001, 0x0095, 0x0042, 0x200D, 0x0001, 0x010E, 0x00B1, 0x0057, 0x0067, 0x200F, 0x0001, 0xF4F7, 0x0074, 0x01F8, 0x00EA, 0x00C8, 0x0071, 0x6800, 0xFF48, 0x0000, 0x0000, 0x0000,
};
