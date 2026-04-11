/* AnimJoint data for relocData file 385 (FTDonkeyAnimClaps) */
/* 1728 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimClaps_joint1[12];
extern u16 dFTDonkeyAnimClaps_joint2[20];
extern u16 dFTDonkeyAnimClaps_joint4[28];
extern u16 dFTDonkeyAnimClaps_joint5[124];
extern u16 dFTDonkeyAnimClaps_joint6[56];
extern u16 dFTDonkeyAnimClaps_joint7[30];
extern u16 dFTDonkeyAnimClaps_joint8[20];
extern u16 dFTDonkeyAnimClaps_joint10[8];
extern u16 dFTDonkeyAnimClaps_joint11[136];
extern u16 dFTDonkeyAnimClaps_joint12[56];
extern u16 dFTDonkeyAnimClaps_joint13[30];
extern u16 dFTDonkeyAnimClaps_joint16[12];
extern u16 dFTDonkeyAnimClaps_joint17[62];
extern u16 dFTDonkeyAnimClaps_joint19[24];
extern u16 dFTDonkeyAnimClaps_joint21[58];
extern u16 dFTDonkeyAnimClaps_joint22[62];
extern u16 dFTDonkeyAnimClaps_joint24[76];

/* Joint pointer table (25 entries, 100 bytes) */
u32 dFTDonkeyAnimClaps_joints[] = {
	(u32)dFTDonkeyAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTDonkeyAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTDonkeyAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTDonkeyAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTDonkeyAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTDonkeyAnimClaps_joint7, /* [6] joint 7 */
	(u32)dFTDonkeyAnimClaps_joint8, /* [7] joint 8 */
	(u32)dFTDonkeyAnimClaps_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTDonkeyAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTDonkeyAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTDonkeyAnimClaps_joint13, /* [12] joint 13 */
	(u32)dFTDonkeyAnimClaps_joint16, /* [13] joint 16 */
	0x00000000, /* [14] NULL */
	0x00000000, /* [15] NULL */
	(u32)dFTDonkeyAnimClaps_joint17, /* [16] joint 17 */
	(u32)dFTDonkeyAnimClaps_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTDonkeyAnimClaps_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTDonkeyAnimClaps_joint22, /* [21] joint 22 */
	(u32)dFTDonkeyAnimClaps_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	0xFFFF0196, /* [24] END */
};

/* Joint 1 */
u16 dFTDonkeyAnimClaps_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -29, 1031, -400,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTDonkeyAnimClaps_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 60, -457, 9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), -26, -366, -171,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 60, -457, 9,
	ftAnimLoop(0x6800, -38),
};

/* Joint 4 */
u16 dFTDonkeyAnimClaps_joint4[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 25, 14,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -11, 80, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 184, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 15, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -42, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 25, 16,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTDonkeyAnimClaps_joint5[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -977, -12, 1649, 43, -2210, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1370, -75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1904, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -1992, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1952, 39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1758, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1449, -79,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1955, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1885, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 1890, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1928, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 2069, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1986, -25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2047, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1752, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1614, 78,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2074, -6, 2039, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2059, 139, 1908, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1796, 444, 1927, 31, -1524, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1171, 409, 1971, -139, -1980, -343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -977, 98, 1649, -168, -2210, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -974, 0, 1635, 0, -2214, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -977, -3, 1649, 13, -2210, 3,
	ftAnimLoop(0x6800, -244),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimClaps_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -626, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -753, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -751, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -677, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -624, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -411, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -472, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -727, -261,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -945, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -614, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -626, -12,
	ftAnimLoop(0x6800, -110),
};

/* Joint 7 */
u16 dFTDonkeyAnimClaps_joint7[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1436, -204, 514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1344, 8, 10, -1, 66, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -1238, -4, -230, -10, 404, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -1436, -7, -204, 17, 514, -24,
	ftAnimLoop(0x6800, -58),
};

/* Joint 8 */
u16 dFTDonkeyAnimClaps_joint8[20] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 390, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -50, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 18), 477, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 312, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 390, 15,
	ftAnimLoop(0x6800, -38),
};

/* Joint 10 */
u16 dFTDonkeyAnimClaps_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -398, 70, 29,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -14),
};

/* Joint 11 */
u16 dFTDonkeyAnimClaps_joint11[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -704, 12, 51, 45, -645, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 255, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -378, 90, -426, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -280, 102, -374, 49,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -272, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 320, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 211, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 141, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -270, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -198, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 182, 48,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 505, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 354, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 362, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 355, 6, -189, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 417, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -51, 65,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 473, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 448, -103, 311, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 210, -471, 238, 39, 22, -182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -494, -457, 390, -93, -417, -334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -704, -106, 51, -176, -645, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 37, 0, -648, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -707,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -704, 3, 51, 14, -645, 3,
	ftAnimLoop(0x6800, -270),
};

/* Joint 12 */
u16 dFTDonkeyAnimClaps_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -608, -36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -727, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -635, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -577, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -336, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -408, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -688, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -968, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -927, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -608, -12,
	ftAnimLoop(0x6800, -110),
};

/* Joint 13 */
u16 dFTDonkeyAnimClaps_joint13[30] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1508, 188, 515,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 1396, -6, 11, 2, -6, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 1358, 5, 257, 8, 371, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 1508, 2, 188, -17, 515, -26,
	ftAnimLoop(0x6800, -58),
};

/* Joint 16 */
u16 dFTDonkeyAnimClaps_joint16[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -887, -1357, 2480, 119, 120, 120,
	ftAnimBlock(0, 30),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimClaps_joint17[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 44, 0, -495, -1, -730, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), -570, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -73, -18, -718, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -92, -18, -706, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -101, 25, -701, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -73, 27, -718, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), 42, 3, -732, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -556, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -498, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 44, 1, -495, 2, -730, 1,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimClaps_joint19[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1241, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1160, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1159, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1240, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1241, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 21 */
u16 dFTDonkeyAnimClaps_joint21[58] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -173, 2, 139, 1, -548, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -378, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 233, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 84, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -168, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -387, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -545, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 221, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 142, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -173, -4, 139, -2, -548, -3,
	ftAnimLoop(0x6800, -112),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimClaps_joint22[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1677, 0, 1030, 0, -2346, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 24), 986, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), -1547, 22, -2323, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1525, 21, -2309, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -1514, -30, -2302, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1547, -32, -2323, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -1676, -2, -2348, 3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 997, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1028, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1677, -1, 1030, 1, -2346, 1,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimClaps_joint24[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1238, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 1166, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 1237, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1238, 0,
	ftAnimLoop(0x6800, -46),
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 162, -2, -156, -1, -537, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -377, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 18), -94, 1, -238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -89, 8, -238, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 157, 9, -159, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -386, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -534, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 162, 5, -156, 2, -537, -3,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
