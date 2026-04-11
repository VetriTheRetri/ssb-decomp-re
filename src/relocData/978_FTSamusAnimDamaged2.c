/* AnimJoint data for relocData file 978 (FTSamusAnimDamaged2) */
/* 2480 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimDamaged2_joint1[44];
extern u16 dFTSamusAnimDamaged2_joint2[70];
extern u16 dFTSamusAnimDamaged2_joint4[124];
extern u16 dFTSamusAnimDamaged2_joint5[94];
extern u16 dFTSamusAnimDamaged2_joint6[52];
extern u16 dFTSamusAnimDamaged2_joint7[28];
extern u16 dFTSamusAnimDamaged2_joint8[10];
extern u16 dFTSamusAnimDamaged2_joint9[10];
extern u16 dFTSamusAnimDamaged2_joint11[32];
extern u16 dFTSamusAnimDamaged2_joint12[102];
extern u16 dFTSamusAnimDamaged2_joint14[32];
extern u16 dFTSamusAnimDamaged2_joint15[130];
extern u16 dFTSamusAnimDamaged2_joint17[68];
extern u16 dFTSamusAnimDamaged2_joint19[128];
extern u16 dFTSamusAnimDamaged2_joint20[124];
extern u16 dFTSamusAnimDamaged2_joint22[146];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimDamaged2_joints[] = {
	(u32)dFTSamusAnimDamaged2_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimDamaged2_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimDamaged2_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimDamaged2_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimDamaged2_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimDamaged2_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimDamaged2_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimDamaged2_joint9, /* [8] joint 9 */
	(u32)dFTSamusAnimDamaged2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimDamaged2_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimDamaged2_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimDamaged2_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimDamaged2_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimDamaged2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimDamaged2_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimDamaged2_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF0233, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimDamaged2_joint1[44] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1501, -363, -198, -1552,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1464, -582,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1388, -807,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1359, -564,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1257, -637,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1257, -637,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1389, 191,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimDamaged2_joint2[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -118, -410, -13, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, -86, -26, 361, -6, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, 1, 296, 30, -206, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -225, 3, 296, -10, -206, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -128, 56, 152, -45, -133, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 98, 91, 33, -41, 78, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 221, -17, -6, -5, -44, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimDamaged2_joint4[124] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 422, 65, -182, -10, -185, -11, -18, 178, -67, 65, 89, -278,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 67, 135, 24, 71, -104, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -312, -20, 225, -23, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, -24, 258, 40, -214, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -76, 32, 326, -13, -240, 34, 144, -33, 17, 19, -81, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 149, 50, 114, -66, 149, 63, 22, -269, 50, -38, -19, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 212, 1, -54, -23, 123, -46, -48, 6, -10, -95, 67, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 155, 1, 1, 14, -71, -31, 26, 144, -6, -30, 12, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 219, -27, 0, 0, 2, 12, 20, -36, -25, 9, 85, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimDamaged2_joint5[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -92, 1494, 470, -1839, -131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1292, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1965, 258, -1970, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2011, 19, -1857, 101,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1914, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1847, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1883, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1769, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1240, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1119, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1907, 0, -1844, -84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1794, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -2209, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1089, 3, -2281, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1149, 6, -1955, 123,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1758, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1619, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1132, 17, 1494, -124, -1839, 115,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimDamaged2_joint6[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -791, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -755, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -262, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -177, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -350, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -434, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -587, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -654, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -665, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -732, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimDamaged2_joint7[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 701, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 14), -18, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 163, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -15, 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimDamaged2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTSamusAnimDamaged2_joint9[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 480, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimDamaged2_joint11[32] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 0, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 659, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 659, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -302, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 39,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimDamaged2_joint12[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -71, -128, 199, -215, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 252, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 68, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -4, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 143, 81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 166, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 255, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 106, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 68, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 0, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -155, -65,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 186, -91,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -31, -36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 53, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -210, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 49, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -112, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 4, -128, -16, -215, -5,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimDamaged2_joint14[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -174,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1065, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1089, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1195, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1163, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -653, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 58,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimDamaged2_joint15[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -236, -27, -289, -389, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -149, -21, -316, -24, -399, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 187, -76, 146, -284, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 17, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -355, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 224, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 206, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 122, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 32, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 34, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -352, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -442, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -484, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -618, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 131, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 21, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -619, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -820, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 123, 102, 14, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 172, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -61, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -494, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 109, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 58, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, 28, -27, 34, -389, 104,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimDamaged2_joint17[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 104,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 505, -291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 414, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 431, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 354, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 140, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 567, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 771, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 649, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimDamaged2_joint19[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 79, -28, -26, -41, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 151, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 27, 113, 58, 247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 170, 81, 452, 217,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 191, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 529, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 497, -108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 156, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -76, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 212, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -32, -37,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 372, -100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 332, 69,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -93, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 44, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 440, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -52, -101, 248, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -118, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -65, -1, 97, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -213, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 22, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -79, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -50, 1, -142, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -25, -28, -50, -41, 100,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimDamaged2_joint20[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -584, 160, -283, -49, -248,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -357, -184, -122, -63, -297, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -142, 244, 33, 89, -80, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 74, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 131, 141, -254, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 141, 6, -284, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -261, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 179, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 84, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 148, 48,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -609, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 174, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2, -131,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 206, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 177, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -132, -6, -802, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -424, 227,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 120, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 199, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -93, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, 27, 160, -17, -49, 43,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimDamaged2_joint22[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 207,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 778, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 782, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 930, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 932, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 554, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -112,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0xFF79, 0x00C1, 0x004A, 0xFF2B, 0xFFFE, 0x2809, 0x0008, 0xFFC3, 0x001F, 0x2007, 0x0002, 0xFF4D, 0xFFC2, 0x00E2, 0xFF72, 0x2007, 0x0001, 0xFF8C, 0x002E, 0xFFEF, 0xFFA9, 0x2803, 0x000A, 0x0065, 0x000C, 0x2005, 0x0002, 0x0071, 0x0039, 0x2005, 0x0001, 0x00A7, 0x0031, 0x2805, 0x000A, 0x012A, 0xFFD8, 0x0801, 0x0002, 0x2009, 0x0001, 0xFFE2, 0xFFFF, 0x2809, 0x0008, 0xFF73, 0x0036, 0x0801, 0x0004, 0x2003, 0x0001, 0x006C, 0xFFFB, 0x2803, 0x0003, 0x005C, 0x0002, 0x0801, 0x0002, 0x2005, 0x0001, 0x00FE, 0xFFE5, 0x2805, 0x0006, 0x00BC, 0x0004, 0x200B, 0x0001, 0x0050, 0xFFB9, 0xFFB7, 0xFFF0, 0x2809, 0x0003, 0xFEBC, 0xFFD3, 0x2003, 0x0002, 0xFF8B, 0x0007, 0x2003, 0x0001, 0xFFDE, 0x0064, 0x2803, 0x0002, 0x0080, 0x001D, 0x2009, 0x0001, 0xFEA2, 0x0011, 0x2009, 0x0001, 0xFEDE, 0x0044, 0x200F, 0x0001, 0x008E, 0x000D, 0x00C1, 0x0005, 0xFF2B, 0x004C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
