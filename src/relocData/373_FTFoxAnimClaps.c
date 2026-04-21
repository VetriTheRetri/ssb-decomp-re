/* AnimJoint data for relocData file 373 (FTFoxAnimClaps) */
/* 2672 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimClaps_joint1[12];
extern u16 dFTFoxAnimClaps_joint2[26];
extern u16 dFTFoxAnimClaps_joint4[24];
extern u16 dFTFoxAnimClaps_joint5[174];
extern u16 dFTFoxAnimClaps_joint6[72];
extern u16 dFTFoxAnimClaps_joint7[138];
extern u16 dFTFoxAnimClaps_joint10[24];
extern u16 dFTFoxAnimClaps_joint11[210];
extern u16 dFTFoxAnimClaps_joint12[92];
extern u16 dFTFoxAnimClaps_joint15[138];
extern u16 dFTFoxAnimClaps_joint16[76];
extern u16 dFTFoxAnimClaps_joint18[38];
extern u16 dFTFoxAnimClaps_joint20[78];
extern u16 dFTFoxAnimClaps_joint21[44];
extern u16 dFTFoxAnimClaps_joint23[32];
extern u16 dFTFoxAnimClaps_joint24[66];
extern u16 dFTFoxAnimClaps_joint25[18];
extern u16 dFTFoxAnimClaps_joint26[22];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimClaps_joints[] = {
	(u32)dFTFoxAnimClaps_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimClaps_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimClaps_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimClaps_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimClaps_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimClaps_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimClaps_joint10, /* [7] joint 10 */
	0x00000000, /* [8] NULL */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimClaps_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimClaps_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimClaps_joint15, /* [12] joint 15 */
	0x00000000, /* [13] NULL */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimClaps_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimClaps_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimClaps_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimClaps_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimClaps_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimClaps_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimClaps_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimClaps_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimClaps_joint1[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 48, 912, -20,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTFoxAnimClaps_joint2[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 26, -1160,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 23, 0, 24, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 35, -1143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 26, -1160,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 35, -1143,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 26, -1160,
	ftAnimLoop(0x6800, -50),
};

/* Joint 4 */
u16 dFTFoxAnimClaps_joint4[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -103, 302,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -98, 277,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -103, 302,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -98, 277,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), -103, 302,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTFoxAnimClaps_joint5[174] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2171, 0, -1729, 2, 1262, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1706, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 2181, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1334, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1354, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1310, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1709, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1713, 7,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2175, -4, 1280, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1313, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2181, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1705, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1729, -1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1334, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1340, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1272, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2175, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2181, -6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1727, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1706, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1285, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1340, -26,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1709, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1713, 7,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1310, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1272, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2175, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 2180, -6,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1705, 6, 1285, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1725, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1336, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1304, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2174, -4, 1274, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2171, -2, -1729, -3, 1262, -12,
	ftAnimLoop(0x6800, -344),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimClaps_joint6[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -379, -1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -377, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -385, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -377, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -385, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -377, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -385, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -377, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -368, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -383, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -379, 4,
	ftAnimLoop(0x6800, -142),
};

/* Joint 7 */
u16 dFTFoxAnimClaps_joint7[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1046, -10, 122, -20, -69, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1070, -1, 40, -4, -219, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1059, 8, 77, 18, -151, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1000, 2, 186, 8, 80, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1046, -10, 122, -20, -69, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1070, -1, 40, -4, -219, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1059, 8, 77, 18, -151, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1000, 2, 186, 8, 80, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1046, -10, 122, -20, -69, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1070, -1, 40, -4, -219, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1059, 8, 77, 18, -151, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1000, 2, 186, 8, 80, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1046, -10, 122, -20, -69, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1070, -1, 40, -4, -219, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1059, 8, 77, 18, -151, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1000, 2, 186, 8, 80, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1046, -10, 122, -20, -69, -43,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTFoxAnimClaps_joint10[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 137, 501,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), -22,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 116, 509,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 137, 501,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 116, 509,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 15), 137, 501,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimClaps_joint11[210] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1115, 0, -1529, -5, -1971, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2023, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1164, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -1583, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1580, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1540, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2033, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1971, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1165, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1115, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1529, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1115, 0, -1970, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2033, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 1142, -15,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1540, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2038, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1973, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1127, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 1165, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1529, 2, -1971, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2023, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1540, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2033, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1971, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1157, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1115, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1529, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1583, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1970, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -2033, -7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1118, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1142, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1583, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1540, 14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2038, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1973, 6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1127, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1118, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1115, -2, -1529, 10, -1971, 2,
	ftAnimLoop(0x6800, -416),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimClaps_joint12[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -448, -11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -637, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -602, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -545, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -448, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -620, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -545, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -596, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -620, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -637, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -602, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -448, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -460, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -620, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -637, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -545, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -481, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, 32,
	ftAnimLoop(0x6800, -182),
};

/* Joint 15 */
u16 dFTFoxAnimClaps_joint15[138] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -418, 10, 166, -35, 79, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -409, 0, 16, -8, 243, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -413, -8, 83, 31, 169, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -480, -1, 267, 16, -55, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -418, 10, 166, -35, 79, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -409, 0, 16, -8, 243, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -413, -8, 83, 31, 169, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -480, -1, 267, 16, -55, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -418, 10, 166, -35, 79, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -409, 0, 16, -8, 243, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -413, -8, 83, 31, 169, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -480, -1, 267, 16, -55, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -418, 10, 166, -35, 79, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -409, 0, 16, -8, 243, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -413, -8, 83, 31, 169, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -480, -1, 267, 16, -55, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -418, 10, 166, -35, 79, 42,
	ftAnimLoop(0x6800, -272),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimClaps_joint16[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1306, 0, 1837, 0, 1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 25), 1832, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 45), 1300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), 1594, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1597, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 1580, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1832, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), 1832, 0,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1579, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 1605, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1300, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1306, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1832, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1836, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1306, 0, 1837, 0, 1605, 0,
	ftAnimLoop(0x6800, -150),
};

/* Joint 18 */
u16 dFTFoxAnimClaps_joint18[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 25), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 0,
	ftAnimLoop(0x6800, -74),
};

/* Joint 20 */
u16 dFTFoxAnimClaps_joint20[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1772, 0, -1610, 0, 1713, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 26), -1611, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 1715, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 24), -1765, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1766, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 28), -1763, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1610, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), -1612, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1714, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 26), 1712, -1,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1765, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1771, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1611, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1610, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1772, 0, -1610, 0, 1713, 0,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimClaps_joint21[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 196, 0, 96, 0, -18, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 59), 196, 0, 95, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 26), -22, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 27), -25, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -23, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -19, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 196, 0, 96, 0, -18, 0,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimClaps_joint23[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 238, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 239, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 25), 244, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 243, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 239, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 238, -1,
	ftAnimLoop(0x6800, -62),
};

/* Joint 24 */
u16 dFTFoxAnimClaps_joint24[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1664, 0, 1575, 0, -1794, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 1659, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 59), -1794, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), 1563, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1565, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 28), 1561, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1660, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 1655, 1,
	ftAnimBlock(0, 26),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1563, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1574, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1657, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1663, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1664, 0, 1575, 0, -1794, 0,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimClaps_joint25[18] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), 0,
	ftAnimLoop(0x6800, -32),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimClaps_joint26[22] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 358,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX, 1), 16,
	ftAnimBlock(0, 14),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 30), -357,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 30), 358,
	ftAnimBlock(0, 16),
	ftAnimLoop(0x6800, -42),
};
