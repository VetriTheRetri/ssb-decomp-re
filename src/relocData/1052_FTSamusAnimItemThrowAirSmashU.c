/* AnimJoint data for relocData file 1052 (FTSamusAnimItemThrowAirSmashU) */
/* 1968 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowAirSmashU_joint1[10];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint2[32];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint4[60];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint5[100];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint6[44];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint7[36];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint8[16];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint11[26];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint12[104];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint14[44];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint15[116];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint17[68];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint19[80];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint20[80];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint22[52];
extern u16 dFTSamusAnimItemThrowAirSmashU_joint23[68];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimItemThrowAirSmashU_joints[] = {
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowAirSmashU_joint23, /* [22] joint 23 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemThrowAirSmashU_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemThrowAirSmashU_joint1[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -4, 1300, 0,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), -4, 1300, 0,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowAirSmashU_joint2[32] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -63,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -661, -51, 200, -39, -287, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -306, 33, -234, -10, 110, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 0, -17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimItemThrowAirSmashU_joint4[60] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 240, 0, 0, 0, -21, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -102, -59, 40, -17, -155, 37, 33, -107, 10, 28, -38, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -113, 17, -107, -2, 225, 7, -80, -61, 0, -63, -29, 90,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 81,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 240, -6,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -43, 35, -68, -9, 74, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 0, -21, 56,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowAirSmashU_joint5[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -3205, -27, -20, -125, 66, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3501, -433, 281, 355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -145, -235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -490, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -176, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4100, -378, 775, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -4259, -350, 770, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4801, -560, -222, -56, 1281, 661,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -545, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5379, -317, 2093, 400,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5436, -72, 2082, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), -6306, -34, 2950, 72,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -516, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -31, 21,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -6330, -18, 3016, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -6417, -7, 3278, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -6422, -4, -20, 11, 3283, 5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowAirSmashU_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1046, -72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -897, 308,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -507, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -237, -194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -897, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -946, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -1047, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowAirSmashU_joint7[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 536, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 424, 0, 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 424, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1072, -217, 0, 29, 0, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -982, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 205, -74,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 536, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowAirSmashU_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemThrowAirSmashU_joint11[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -209, -52, -282, 24, -53, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -313, 10, 144, 14, -35, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowAirSmashU_joint12[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1332, -137, 1496, -136, 1540, -192,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 933, -208,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1193, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1347, -367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 805, -459,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 326, 151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 777, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 739, 130, 1217, -157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 566, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1038, -203, 732, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 332, -403, 315, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 232, -105, 553, -7, 320, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -353, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 153, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -7, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -28, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -69, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -354, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -282, 11,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 123, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -275, 6, 111, -11, -68, 1,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemThrowAirSmashU_joint14[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -985, -83,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1090, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -876, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -943, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -919, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -985, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -985, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowAirSmashU_joint15[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1576, 14, 1659, 11, -2174, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -1714, -87, 1735, -23, -1324, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1799, -49, 1698, 20, -1115, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1699, -171,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1630, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1767, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1762, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 1619, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1834, -78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2021, -225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1628, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1437, 25,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2308, -168,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2446, -86,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1409, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1571, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2530, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2460, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1583, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1659, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2317, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2211, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1576, -4, 1659, 0, -2174, 36,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemThrowAirSmashU_joint17[68] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1329, -96,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 648, -385,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 220, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 369, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 414, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 290, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 210, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 224, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1015, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1141, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1303, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1329, 26,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemThrowAirSmashU_joint19[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1573, -29, -1630, -6, 1657, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1592, -19, -1618, 41, 1634, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1638, 45, -1573, 22, 1726, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1716, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -1622, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1425, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1421, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1612, -13,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1709, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1657, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1625, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1574, 7,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1626, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1573, 0, -1630, 0, 1657, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowAirSmashU_joint20[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, 9, 1569, 0, 1016, 60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1596, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), -1606, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1261, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1484, 181,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1702, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1826, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1433, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1341, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1588, -5, 1283, -114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 1570, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1112, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 844, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1033, 3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1605, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, -3, 1569, 0, 1016, -16,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemThrowAirSmashU_joint22[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1100, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 560, -371,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 132, -220,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 198, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 215, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 56, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 204, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 427, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 550, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1039, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1100, 61,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimItemThrowAirSmashU_joint23[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -70, -13, 64, 4, 59, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 25, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 47, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 93, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 24, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 29, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 62, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 27, -30, 33, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -71, -2, 58, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 51, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -70, 0, 64, 0, 59, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
