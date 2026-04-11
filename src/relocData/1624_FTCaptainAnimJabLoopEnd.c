/* AnimJoint data for relocData file 1624 (FTCaptainAnimJabLoopEnd) */
/* 1808 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJabLoopEnd_joint1[14];
extern u16 dFTCaptainAnimJabLoopEnd_joint2[40];
extern u16 dFTCaptainAnimJabLoopEnd_joint3[30];
extern u16 dFTCaptainAnimJabLoopEnd_joint5[30];
extern u16 dFTCaptainAnimJabLoopEnd_joint6[62];
extern u16 dFTCaptainAnimJabLoopEnd_joint7[36];
extern u16 dFTCaptainAnimJabLoopEnd_joint8[30];
extern u16 dFTCaptainAnimJabLoopEnd_joint9[30];
extern u16 dFTCaptainAnimJabLoopEnd_joint11[30];
extern u16 dFTCaptainAnimJabLoopEnd_joint12[78];
extern u16 dFTCaptainAnimJabLoopEnd_joint13[36];
extern u16 dFTCaptainAnimJabLoopEnd_joint14[26];
extern u16 dFTCaptainAnimJabLoopEnd_joint15[12];
extern u16 dFTCaptainAnimJabLoopEnd_joint17[30];
extern u16 dFTCaptainAnimJabLoopEnd_joint18[70];
extern u16 dFTCaptainAnimJabLoopEnd_joint20[36];
extern u16 dFTCaptainAnimJabLoopEnd_joint22[70];
extern u16 dFTCaptainAnimJabLoopEnd_joint23[74];
extern u16 dFTCaptainAnimJabLoopEnd_joint25[118];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimJabLoopEnd_joints[] = {
	(u32)dFTCaptainAnimJabLoopEnd_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimJabLoopEnd_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimJabLoopEnd_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimJabLoopEnd_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimJabLoopEnd_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimJabLoopEnd_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimJabLoopEnd_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimJabLoopEnd_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimJabLoopEnd_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimJabLoopEnd_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimJabLoopEnd_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimJabLoopEnd_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimJabLoopEnd_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimJabLoopEnd_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimJabLoopEnd_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimJabLoopEnd_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimJabLoopEnd_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimJabLoopEnd_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimJabLoopEnd_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	0xFFFF019D, /* [25] END */
};

/* Joint 1 */
u16 dFTCaptainAnimJabLoopEnd_joint1[14] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAZ), 0, 2,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 55), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAZ, 1), 46,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTCaptainAnimJabLoopEnd_joint2[40] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1419, 163, 544, -776,
	ftAnimSetValBlock(FT_ANIM_TRAX), 36,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1562, 288, 101, -870,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 3), 11,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, -533, 0, -202,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1296, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimJabLoopEnd_joint3[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 425, -77, 601, -52, 187, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -60, 107, -70, 0, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 107, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 107, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimJabLoopEnd_joint5[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 174, -16, -310, 26, -46, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 189, 2, 0, 44, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 189, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 189, 0, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimJabLoopEnd_joint6[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -64, 209, -230, 58, 404, -255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 241, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -349, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -172, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 5, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 221, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 245, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -471, -87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -507, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -25, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 239, -6, 5, 31, -524, -16,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimJabLoopEnd_joint7[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1326, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1227, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -797, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -863, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -940, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -871, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 74,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimJabLoopEnd_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 3018, -6, -77, 0, 31, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 85), 2435, -6, -89, 0, -388, -4,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 80,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2435, -89, -388,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2435, -89, -388,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimJabLoopEnd_joint9[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 31, -6, -186, 19, -5, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 360, -108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, -4, 0, 26, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimJabLoopEnd_joint11[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -144, 30, -166, 37, 53, -30,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 20, 0, 23, 0, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJabLoopEnd_joint12[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1188, -11, 1415, 52, -1242, 100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1309, -149,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1024, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1467, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1426, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1499, -183, 1371, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1737, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1406, 46, -1051, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -972, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1464, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1674, 80, 1440, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1577, 2, 1386, -4, -1006, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -80, 1431, 39, -997, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1737, -68, 1464, 33, -1016, -18,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJabLoopEnd_joint13[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1003, -72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1201, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1143, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1254, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1150, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 125,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimJabLoopEnd_joint14[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 272, 10, 242, 26, 42, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 0, 275, 4, 62, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 270, 275, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimJabLoopEnd_joint15[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	_FT_ANIM_CMD(11, 0, 1), 91,
	ftAnimBlock(0, 9),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJabLoopEnd_joint17[30] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 2, -11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 50), 0, -1, 0, -3,
	_FT_ANIM_CMD(11, FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 45,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -1, 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -1, 0, -3,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimJabLoopEnd_joint18[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1884, -144, -1659, -21, -2346, -70,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1559, 34, -1667, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2466, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2454, 100,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2081, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1666, 120, -1697, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1799, 73, -1678, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1814, 2, -1722, -45, -2206, -120,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1799, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1769, 0, -2322, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1724, 45, -2210, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1799, 0, -1678, 45, -2081, 129,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimJabLoopEnd_joint20[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 792, 74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 839, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 632, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 668, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 790, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 642, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimJabLoopEnd_joint22[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1859, 99, 1714, -137, -1565, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1631, 90,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1448, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1630, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1572, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1579, -12, -1506, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1735, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1524, 101, -1536, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1650, 70, -1528, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1775, -30, 1665, 3, -1597, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1760, 30, 1653, -3, -1588, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1735, 24, 1650, -2, -1528, 59,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimJabLoopEnd_joint23[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3, 28, 414, -35, -759, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 146, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 64, -731, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 125, 43, -564, 131,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 120, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -284, 195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 4, 110, -2, -76, 71,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 111, 3, 161, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 135, 24, 139, -25, -146, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 24, 110, -29, -76, 69,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimJabLoopEnd_joint25[118] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 871, 23,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 920, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 903, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 727, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -183,
	ftAnimEnd(),
	0x0000, 0x200E, 0x0002, 0x0011, 0x006D, 0x0077, 0xFF92, 0x0014, 0x2803, 0x0002, 0x0035, 0x0053, 0x2805, 0x0004, 0x01D0, 0xFFD5, 0x2009, 0x0001, 0xFFA7, 0xFFC7, 0x2009, 0x0001, 0xFF1F, 0xFFCC, 0x200B, 0x0001, 0x00BB, 0x0041, 0xFF3E, 0xFFFF, 0x2803, 0x0002, 0x00A1, 0x0009, 0x2009, 0x0001, 0xFF1D, 0xFFD6, 0x2809, 0x0002, 0xFE8B, 0xFFA9, 0x2005, 0x0001, 0x016D, 0xFFCA, 0x2805, 0x0003, 0x016A, 0x0002, 0x2003, 0x0001, 0x00CC, 0x0017, 0x2803, 0x0002, 0x00B7, 0xFFE9, 0x2009, 0x0001, 0xFE3A, 0x0000, 0x2009, 0x0001, 0xFE8A, 0x0057, 0x200F, 0x0001, 0x00A1, 0xFFEA, 0x016D, 0x0002, 0xFEE9, 0x005E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
