/* AnimJoint data for relocData file 1245 (FTLinkAnimExitPipeWalk) */
/* 1936 bytes: 116-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTLinkAnimExitPipeWalk_joint1[38];
extern u16 dFTLinkAnimExitPipeWalk_joint2[30];
extern u16 dFTLinkAnimExitPipeWalk_joint4[30];
extern u16 dFTLinkAnimExitPipeWalk_joint5[34];
extern u16 dFTLinkAnimExitPipeWalk_joint6[24];
extern u16 dFTLinkAnimExitPipeWalk_joint9[26];
extern u16 dFTLinkAnimExitPipeWalk_joint10[52];
extern u16 dFTLinkAnimExitPipeWalk_joint11[32];
extern u16 dFTLinkAnimExitPipeWalk_joint12[8];
extern u16 dFTLinkAnimExitPipeWalk_joint13[8];
extern u16 dFTLinkAnimExitPipeWalk_joint16[46];
extern u16 dFTLinkAnimExitPipeWalk_joint17[8];
extern u16 dFTLinkAnimExitPipeWalk_joint18[26];
extern u16 dFTLinkAnimExitPipeWalk_joint20[26];
extern u16 dFTLinkAnimExitPipeWalk_joint21[100];
extern u16 dFTLinkAnimExitPipeWalk_joint23[46];
extern u16 dFTLinkAnimExitPipeWalk_joint25[112];
extern u16 dFTLinkAnimExitPipeWalk_joint26[98];
extern u16 dFTLinkAnimExitPipeWalk_joint28[48];
extern u16 dFTLinkAnimExitPipeWalk_joint29[118];

/* Joint pointer table (29 entries, 116 bytes) */
u32 dFTLinkAnimExitPipeWalk_joints[] = {
	(u32)dFTLinkAnimExitPipeWalk_joint1, /* [0] joint 1 */
	(u32)dFTLinkAnimExitPipeWalk_joint2, /* [1] joint 2 */
	(u32)dFTLinkAnimExitPipeWalk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint5, /* [4] joint 5 */
	(u32)dFTLinkAnimExitPipeWalk_joint6, /* [5] joint 6 */
	(u32)dFTLinkAnimExitPipeWalk_joint9, /* [6] joint 9 */
	0x00000000, /* [7] NULL */
	0x00000000, /* [8] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint10, /* [9] joint 10 */
	(u32)dFTLinkAnimExitPipeWalk_joint11, /* [10] joint 11 */
	(u32)dFTLinkAnimExitPipeWalk_joint12, /* [11] joint 12 */
	(u32)dFTLinkAnimExitPipeWalk_joint13, /* [12] joint 13 */
	(u32)dFTLinkAnimExitPipeWalk_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint17, /* [16] joint 17 */
	(u32)dFTLinkAnimExitPipeWalk_joint18, /* [17] joint 18 */
	(u32)dFTLinkAnimExitPipeWalk_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint21, /* [20] joint 21 */
	(u32)dFTLinkAnimExitPipeWalk_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint26, /* [25] joint 26 */
	(u32)dFTLinkAnimExitPipeWalk_joint28, /* [26] joint 28 */
	0x00000000, /* [27] NULL */
	(u32)dFTLinkAnimExitPipeWalk_joint29, /* [28] joint 29 */
};

/* Joint 1 */
u16 dFTLinkAnimExitPipeWalk_joint1[38] = {
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 2867, 2867, 2867,
	ftAnimSetValRate(FT_ANIM_TRAY), 677, -285,
	ftAnimSetValBlock(FT_ANIM_TRAZ), -1314,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 643, -45,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 40), 4096, 4096, 4096,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), -1057,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 598, 37,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 8), -751,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 26), 804,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 26), 240,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTLinkAnimExitPipeWalk_joint2[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -4, -1, 81, -2, 42, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -10, 0, 70, 1, 44, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 17, 120, 33,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -10, 70, 44,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTLinkAnimExitPipeWalk_joint4[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 342, -7, 65, -11, 57, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 130, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 310, 13, 25, -2, 26, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 649, 15, 260,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 310, 25, 26,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTLinkAnimExitPipeWalk_joint5[34] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -254, 4, -152, 8, 165, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 39), -241, 0, -127, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 111, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 163, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -242, 0, -127, 0, 164, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTLinkAnimExitPipeWalk_joint6[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -629, -14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 28), -559, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -572, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -669, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -671, -1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTLinkAnimExitPipeWalk_joint9[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 60, -16, 28, -6, 88, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 4, 10, 7, 4, 76, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 299, 121, 140,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 4, 7, 76,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTLinkAnimExitPipeWalk_joint10[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 127, -9, 168, -18, -409, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 281, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 311, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -266, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -411, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 300, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 97, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 290, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 16), 115, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 114, 0, 94, -3, -412, -1,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTLinkAnimExitPipeWalk_joint11[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -467, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -735, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -735, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -436, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -487, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -487, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTLinkAnimExitPipeWalk_joint12[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -209, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTLinkAnimExitPipeWalk_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 804, -804, 804,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTLinkAnimExitPipeWalk_joint16[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1454, -19, -605, -2, -33, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1347, -13, -624, -4, 42, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 1279, 17, -659, 2, 83, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1652, 14, -574, 3, -122, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1532, -16, -600, -2, -209, 9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1347, -624, 42,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTLinkAnimExitPipeWalk_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -163, 0,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTLinkAnimExitPipeWalk_joint18[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -238, 0, -28, 10, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -235, 0, 7, -7, -5, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), -253, -186, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), -235, 7, -5,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTLinkAnimExitPipeWalk_joint20[26] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 5, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 22, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), -66, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 62, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -49, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 8), 22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTLinkAnimExitPipeWalk_joint21[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 38, -8, -78, -5, 268, 54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 114, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 92, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 495, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 487, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 143, -142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, -122,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -682, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 103, 2,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 132, 31,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 45, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -661, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 60, 62,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 36, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -53, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 39, -2,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 120, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 204, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, -1, -53, 0, 216, 12,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTLinkAnimExitPipeWalk_joint23[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 345, 307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 621, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 758, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 719, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 738, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 708, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 442, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, -11,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTLinkAnimExitPipeWalk_joint25[112] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1426, 12, -1444, 0, -1448, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1594, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1302, 78, -1606, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1206, 72, -1640, -95,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1155, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1861, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1869, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1489, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1134, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1274, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1611, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1434, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1541, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1848, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1248, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), -1115, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1451, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1472, -3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1905, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1919, 11,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1108, 4, -1475, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1106, 2, -1476, -1, -1913, 6,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTLinkAnimExitPipeWalk_joint26[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -27, -18, 243, -10, -312, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -45, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 190, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -311, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -340, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 322, 32,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -43, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 105, -73,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 170, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 282, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 344, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -592, 15,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, -80,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -120, 35,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 246, -33,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 212, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -83, 34, -567, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -27, 16, -505, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 8, 212, 0, -493, 12,
	ftAnimEnd(),
};

/* Joint 28 */
u16 dFTLinkAnimExitPipeWalk_joint28[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 530, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 217, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 219, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 466, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 553, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 487, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1188, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1172, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 704, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 676, -27,
	ftAnimEnd(),
	0x0000,
};

/* Joint 29 */
u16 dFTLinkAnimExitPipeWalk_joint29[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -504, 65, -40, 29, 191, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 132, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -307, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 171, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, -58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -473, -7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 120, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -209, -23,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -312, -4, -477, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -541, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -92, 87,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -226, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -149, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -602, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -521, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -22, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -82, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -542, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -377, 19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -131, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 76, 23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -128, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -363, 13, 92, 15, -116, 12,
	ftAnimEnd(),
};
