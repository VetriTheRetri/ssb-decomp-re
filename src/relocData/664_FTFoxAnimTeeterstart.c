/* AnimJoint data for relocData file 664 (FTFoxAnimTeeterstart) */
/* 1536 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimTeeterstart_joint1[22];
extern u16 dFTFoxAnimTeeterstart_joint2[24];
extern u16 dFTFoxAnimTeeterstart_joint4[18];
extern u16 dFTFoxAnimTeeterstart_joint5[88];
extern u16 dFTFoxAnimTeeterstart_joint6[44];
extern u16 dFTFoxAnimTeeterstart_joint7[12];
extern u16 dFTFoxAnimTeeterstart_joint8[18];
extern u16 dFTFoxAnimTeeterstart_joint10[12];
extern u16 dFTFoxAnimTeeterstart_joint11[70];
extern u16 dFTFoxAnimTeeterstart_joint12[44];
extern u16 dFTFoxAnimTeeterstart_joint13[14];
extern u16 dFTFoxAnimTeeterstart_joint15[12];
extern u16 dFTFoxAnimTeeterstart_joint16[64];
extern u16 dFTFoxAnimTeeterstart_joint18[36];
extern u16 dFTFoxAnimTeeterstart_joint20[70];
extern u16 dFTFoxAnimTeeterstart_joint21[56];
extern u16 dFTFoxAnimTeeterstart_joint23[24];
extern u16 dFTFoxAnimTeeterstart_joint24[56];
extern u16 dFTFoxAnimTeeterstart_joint25[12];
extern u16 dFTFoxAnimTeeterstart_joint26[20];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimTeeterstart_joints[] = {
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimTeeterstart_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimTeeterstart_joint1[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 240, 240,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 12), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 4), 600,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 720, 48, 360, 120,
	ftAnimLoop(0x6800, -42),
};

/* Joint 2 */
u16 dFTFoxAnimTeeterstart_joint2[24] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -186, -217, 81, -28, 6,
	ftAnimSetValBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 12), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 536, 37,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 12), 0,
	ftAnimLoop(0x6800, -44),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimTeeterstart_joint4[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, 261, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 357, 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 5 */
u16 dFTFoxAnimTeeterstart_joint5[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -57, -180, -78, 132, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -373, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -125, -183, 298, 281,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -434, -300, 695, 327,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -845, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1374, 266,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -353, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -520, 40,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -974, -184,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1740, -115,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1676, 292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -454, 43, 1960, 134,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -437, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1732, 30, 1945, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1698, 3, 1885, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1672, 25, -460, -23, 1847, -38,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTFoxAnimTeeterstart_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -501, -193,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -885, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -802, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -620, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -517, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -320, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -162, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -332, -93,
	ftAnimLoop(0x6800, -86),
};

/* Joint 7 */
u16 dFTFoxAnimTeeterstart_joint7[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimTeeterstart_joint8[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -110, -31, 4,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 178, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0,
	ftAnimLoop(0x6800, -34),
};

/* Joint 10 */
u16 dFTFoxAnimTeeterstart_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimTeeterstart_joint11[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1470, 108, 1383, -19, -1238, 168,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1368, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1361, 189, -1070, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1090, 253, -787, 205,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -360, 174, -293, 212,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1309, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1157, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -147, 128, -23, 161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -94, 62, 37, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 22, 68, 187, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, 20, 1145, -11, 211, 23,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimTeeterstart_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -542, -149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -822, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -576, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -369, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -91, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -294, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -361, -52,
	ftAnimLoop(0x6800, -86),
};

/* Joint 13 */
u16 dFTFoxAnimTeeterstart_joint13[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 446, 446,
	ftAnimLoop(0x6800, -26),
};

/* Joint 15 */
u16 dFTFoxAnimTeeterstart_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 12),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimTeeterstart_joint16[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -477, -26, -180, 37, -33, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -359, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -39, 83, -77, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 63, 30, -7, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -95, 24, -360, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -280, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -169, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -104, 47, -60, 23, -263, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -73, 17, -47, 6, -156, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 4, -48, 0, -136, 19,
	ftAnimLoop(0x6800, -124),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimTeeterstart_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 405, -94,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 210, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 444, 206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1010, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 943, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 887, -55,
	ftAnimLoop(0x6800, -70),
};

/* Joint 20 */
u16 dFTFoxAnimTeeterstart_joint20[70] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1630, 20, -1825, -29, 1469, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1726, 61,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1750, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1517, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1692, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1466, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1672, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1677, 43,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1772, -6, 1342, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1655, -16, 1087, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1625, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1594, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1651, -4, -1588, 6, 1116, 28,
	ftAnimLoop(0x6800, -136),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimTeeterstart_joint21[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1296, -13, -1779, -46, 1849, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1743, -99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1808, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -1149, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1079, 37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1456, -43,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1626, -118,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1364, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1728, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1607, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1475, -18, -1590, 17, 1341, -22,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimTeeterstart_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 245, 145,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 643, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 349, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 280, -69,
	ftAnimLoop(0x6800, -46),
};

/* Joint 24 */
u16 dFTFoxAnimTeeterstart_joint24[56] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 80, 22, -236, 11, -294, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -162, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 282, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -737, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -737, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -522, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -190, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 110, 37,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 177, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 20, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -10, -31, 126, 16, -484, 37,
	ftAnimLoop(0x6800, -108),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimTeeterstart_joint25[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 219, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 12), 134,
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimTeeterstart_joint26[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), -19, 40,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), 368, -10, 0, -1,
	ftAnimLoop(0x6800, -24),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
