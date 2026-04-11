/* AnimJoint data for relocData file 1068 (FTSamusAnimFTilt) */
/* 1904 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimFTilt_joint1[36];
extern u16 dFTSamusAnimFTilt_joint2[34];
extern u16 dFTSamusAnimFTilt_joint4[34];
extern u16 dFTSamusAnimFTilt_joint5[106];
extern u16 dFTSamusAnimFTilt_joint6[44];
extern u16 dFTSamusAnimFTilt_joint7[22];
extern u16 dFTSamusAnimFTilt_joint8[16];
extern u16 dFTSamusAnimFTilt_joint11[10];
extern u16 dFTSamusAnimFTilt_joint12[100];
extern u16 dFTSamusAnimFTilt_joint14[52];
extern u16 dFTSamusAnimFTilt_joint15[88];
extern u16 dFTSamusAnimFTilt_joint17[36];
extern u16 dFTSamusAnimFTilt_joint19[88];
extern u16 dFTSamusAnimFTilt_joint20[94];
extern u16 dFTSamusAnimFTilt_joint22[146];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimFTilt_joints[] = {
	(u32)dFTSamusAnimFTilt_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimFTilt_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimFTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimFTilt_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimFTilt_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimFTilt_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimFTilt_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimFTilt_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimFTilt_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimFTilt_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimFTilt_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimFTilt_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimFTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimFTilt_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimFTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01B1, /* [22] END */
};

/* Joint 1 */
u16 dFTSamusAnimFTilt_joint1[36] = {
	ftAnimSetValAfter(FT_ANIM_TRAY), 1600,
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 8), 495, 93,
	ftAnimSetValAfterT(FT_ANIM_TRAY, 32), 1600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1072, -273,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -2309, -150,
	ftAnimSetValT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 17), -3401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -3216, 56,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimFTilt_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY, 32), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 147, 0, -491, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 24), 0, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -417, 41,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 18), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimFTilt_joint4[34] = {
	ftAnimSetValAfter(FT_ANIM_ROTZ), 0,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTZ, 32), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 223, -491, -99, -38, 4,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTY, 28), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -46, -11, -7,
	ftAnimSetValBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimFTilt_joint5[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 476, 60, 114, -32, -231, -66,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -58, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 729, 42, -495, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 737, -139, -501, 126,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 127, -231, 42, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -78, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 58, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -126, 0, -40, 180, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), 360, 126, -634, -146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -259, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -314, -46,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 120, 9,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 471, 89, -761, -104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), -323, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 404, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 417, 14, 126, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 464, 12, 116, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -275, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 476, 11, 114, -2, -231, 44,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimFTilt_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, 16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -903, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1080, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1248, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1248, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -586, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -570, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -698, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -40,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimFTilt_joint7[22] = {
	ftAnimSetValAfter(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 263,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 4), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 8), 10,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimFTilt_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 32), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimFTilt_joint11[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimFTilt_joint12[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 180, -88, -195, 48, -232, 208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 418, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 85, 38, 380, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 136, 4, 564, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -139, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 332, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 156, -185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -38, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 360, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 232, -52,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 421, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 318, -31,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 176, -55,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 134, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -166, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 279, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -153, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 180, 46, -195, -42, -232, -65,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimFTilt_joint14[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, -244,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1056, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1099, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1029, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1036, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1016, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -890, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -928, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -690, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 94,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimFTilt_joint15[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, -76, -27, -36, -389, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -281, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -243, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -133, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -88, 120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 294, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -374, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -608, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -343, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -245, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 333, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 366, -63,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -213, 42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -2, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 306, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 139, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -430, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 87, -52, -27, -24, -389, 40,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimFTilt_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 542, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 359, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 356, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 463, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimFTilt_joint19[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1532, 60, 1637, 8, 1566, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1656, -49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1426, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1627, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1633, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1541, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1596, 31, 1592, -35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1546, 54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1625, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1462, 30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), 1570, -4,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1598, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1597, 6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1625, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1635, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1601, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1498, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1532, 34, 1637, 1, 1566, -4,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimFTilt_joint20[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 226, -57, 160, 22, -49, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -67, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 115, 51, -494, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 185, 68, -373, 161,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 45, 128,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 169, -63,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 59, 99,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 400, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 200, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, -17, 288, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 193, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 152, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 103, -46,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -51, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 426, 20, 200, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 232, -10, 162, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 226, -5, 160, -2, -49, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimFTilt_joint22[146] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 162,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 32), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1025, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 4, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 158, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 101, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 201, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 533, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 450, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, -7,
	ftAnimEnd(),
	0x0000, 0x200E, 0x008E, 0xFFE2, 0x00C1, 0xFFFD, 0xFF2C, 0x0015, 0x2809, 0x0005, 0x0041, 0xFFF8, 0x2007, 0x0004, 0xFFDC, 0x0008, 0x004B, 0xFF97, 0x2007, 0x0001, 0xFFDA, 0x001B, 0xFFB9, 0xFF92, 0x2803, 0x0003, 0xFFEC, 0xFFC0, 0x2805, 0x0004, 0x001D, 0x000B, 0x2009, 0x0001, 0x002A, 0xFFFA, 0x2809, 0x0019, 0xFF2C, 0xFFFF, 0x0801, 0x0002, 0x2003, 0x0001, 0xFFA1, 0xFFD3, 0x2803, 0x0008, 0xFFB0, 0x000B, 0x2005, 0x0001, 0x0021, 0x0002, 0x2805, 0x0015, 0x00C1, 0x0000, 0x0801, 0x0007, 0x2003, 0x0001, 0xFFBF, 0x0011, 0x2003, 0x0006, 0xFFD8, 0xFFFD, 0x2003, 0x0001, 0xFFDD, 0x000E, 0x2003, 0x0006, 0x0087, 0x000C, 0x200F, 0x0001, 0x008E, 0x0006, 0x00C1, 0x0000, 0xFF2C, 0x0000, 0x0000, 0x0000, 0x0000,
};
