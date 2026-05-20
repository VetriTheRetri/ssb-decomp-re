/* AnimJoint data for relocData file 1704 (FTNessAnimDamageFlyTop) */
/* 1168 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimDamageFlyTop_joint1[8];
extern u16 dFTNessAnimDamageFlyTop_joint2[176];
extern u16 dFTNessAnimDamageFlyTop_joint4[12];
extern u16 dFTNessAnimDamageFlyTop_joint5[26];
extern u16 dFTNessAnimDamageFlyTop_joint6[16];
extern u16 dFTNessAnimDamageFlyTop_joint7[12];
extern u16 dFTNessAnimDamageFlyTop_joint8[12];
extern u16 dFTNessAnimDamageFlyTop_joint10[12];
extern u16 dFTNessAnimDamageFlyTop_joint11[26];
extern u16 dFTNessAnimDamageFlyTop_joint12[16];
extern u16 dFTNessAnimDamageFlyTop_joint13[12];
extern u16 dFTNessAnimDamageFlyTop_joint15[12];
extern u16 dFTNessAnimDamageFlyTop_joint16[32];
extern u16 dFTNessAnimDamageFlyTop_joint18[14];
extern u16 dFTNessAnimDamageFlyTop_joint19[26];
extern u16 dFTNessAnimDamageFlyTop_joint21[12];
extern u16 dFTNessAnimDamageFlyTop_joint22[34];
extern u16 dFTNessAnimDamageFlyTop_joint24[16];
extern u16 dFTNessAnimDamageFlyTop_joint25[44];
extern u16 dFTNessAnimDamageFlyTop_joint26[14];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimDamageFlyTop_joints[] = {
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimDamageFlyTop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimDamageFlyTop_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, 681, -28,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -14),
};

/* Joint 2 */
u16 dFTNessAnimDamageFlyTop_joint2[176] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 14, -28, -8, -203, 66, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -413, -198, 95, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -13, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -69,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -69, -198, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -153, 366, -609, -229, 181, -379,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 366, -229, -379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 678, 154, -872, -212, -664, -167,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 154, -212, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 155, -301, -1033, -178, -154, 287,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -301, -178, 287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 75, -57, -1229, -197, -89, 41,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -197, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 40, -31, -1430, 1405, -70, 11,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -31, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 13, -27, 1582, 1411, -66, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -53, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1392, -197, -72, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -197,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1002, -229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -95, -52,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -68, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -149, 389, -178, 402,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 389, -229, 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 724, 155, 737, -209, 709, 168,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 155, -209, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, -322, 582, -174, 159, -309,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -322, -309,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -8, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 78, -59, 91, -44,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), -59, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 14, -26, 66, -4,
	ftAnimLoop(0x6800, -350),
};

/* Joint 4 */
u16 dFTNessAnimDamageFlyTop_joint4[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -16, -470, 10, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimDamageFlyTop_joint5[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -127, 0, -622, 0, 1039, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -127, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -622, 1039,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -127, 0, 1039, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -622,
	ftAnimLoop(0x6800, -50),
};

/* Joint 6 */
u16 dFTNessAnimDamageFlyTop_joint6[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -600, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), -600,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -600, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTNessAnimDamageFlyTop_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimDamageFlyTop_joint8[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -288, -397, 52, 0, 300, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimDamageFlyTop_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimDamageFlyTop_joint11[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2554, 0, 1030, 0, -2365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -2554, 0, 1030, 0, -2365, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2554, 0, 1030, 0, -2365, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimDamageFlyTop_joint12[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -971, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -971, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, 0,
	ftAnimLoop(0x6800, -30),
};

/* Joint 13 */
u16 dFTNessAnimDamageFlyTop_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -6, -113, 732, 143, 0, 0,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimDamageFlyTop_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimDamageFlyTop_joint16[32] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -502, 9, 145, -5, -59, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), -507, 6, -65, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 14), 158, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 150, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -502, 4, 145, -5, -59, 5,
	ftAnimLoop(0x6800, -60),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimDamageFlyTop_joint18[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimLoop(0x6800, -26),
};

/* Joint 19 */
u16 dFTNessAnimDamageFlyTop_joint19[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 244, -12, 70, -5, 540, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 251, -8, 72, -2, 542, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 244, -7, 70, -1, 540, -2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimDamageFlyTop_joint21[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 30, -39, -253, 126, -82, -12,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimDamageFlyTop_joint22[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -227, 10, -37, 1, -596, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -598, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -258, 18, -26, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -240, 15, -33, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -227, 12, -37, -4, -596, 1,
	ftAnimLoop(0x6800, -64),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimDamageFlyTop_joint24[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 770, 8,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 760, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 770, 10,
	ftAnimLoop(0x6800, -30),
};

/* Joint 25 */
u16 dFTNessAnimDamageFlyTop_joint25[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1402, -9, 1619, -2, -1372, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), -1372, -19, 1639, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -1349, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1343, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1358, -11,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1390, -15, 1628, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1402, -12, 1619, -8, -1372, -13,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimDamageFlyTop_joint26[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -185, -58, -64, -126, -82, -12,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
	0x0000, 0x0000,
};
