/* AnimJoint data for relocData file 1047 (FTSamusAnimItemThrowSmashU) */
/* 1920 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimItemThrowSmashU_joint1[32];
extern u16 dFTSamusAnimItemThrowSmashU_joint2[38];
extern u16 dFTSamusAnimItemThrowSmashU_joint4[44];
extern u16 dFTSamusAnimItemThrowSmashU_joint5[136];
extern u16 dFTSamusAnimItemThrowSmashU_joint6[66];
extern u16 dFTSamusAnimItemThrowSmashU_joint7[16];
extern u16 dFTSamusAnimItemThrowSmashU_joint8[16];
extern u16 dFTSamusAnimItemThrowSmashU_joint11[26];
extern u16 dFTSamusAnimItemThrowSmashU_joint12[108];
extern u16 dFTSamusAnimItemThrowSmashU_joint14[60];
extern u16 dFTSamusAnimItemThrowSmashU_joint15[80];
extern u16 dFTSamusAnimItemThrowSmashU_joint17[36];
extern u16 dFTSamusAnimItemThrowSmashU_joint19[82];
extern u16 dFTSamusAnimItemThrowSmashU_joint20[62];
extern u16 dFTSamusAnimItemThrowSmashU_joint22[36];
extern u16 dFTSamusAnimItemThrowSmashU_joint23[74];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTSamusAnimItemThrowSmashU_joints[] = {
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint11, /* [8] joint 11 */
	NULL, /* [9] NULL */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTSamusAnimItemThrowSmashU_joint23, /* [22] joint 23 */
};

/* 4-byte alignment padding */
static u32 dFTSamusAnimItemThrowSmashU_pad[1] = { 0 };

/* Joint 1 */
u16 dFTSamusAnimItemThrowSmashU_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 1600, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1348, 137, -133, -131,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 6), -7,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1737, 111, -131, 59,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 2), 4,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 1600, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 16), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimItemThrowSmashU_joint2[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 344, -33, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 1, -268, -19, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 3, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 16), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 58), 0, 0, 0,
	ftAnimBlock0(0),
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimItemThrowSmashU_joint4[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -102, -14, 40, -13, -155, 28, 33, -80, 10, 0, -38, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -113, 5, -107, -2, 225, 8, -80, -14, 0, -4, -29, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimItemThrowSmashU_joint5[136] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, -202, -1722, 528, 1377, 93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1631, -246,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1707, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1193, 334,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1053, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1143, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1827, -254,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2455, -356,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1918, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2029, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2853, -613, -1168, -128, 1992, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3682, -515, -1400, -126, 2959, 714,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3884, -131, -1420, -31, 3421, 282,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -4070, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1722, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 3597, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3654, 52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 4073, 120,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -4103, -33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -4365, 12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1760, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1694, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4187, 111,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 4504, 94,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1710, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1721, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4349, 16, -1722, -1, 4594, 89,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimItemThrowSmashU_joint6[66] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -739, -255,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -994, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -858, -104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -981, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -644, 448,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -283, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -443, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -687, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -739, -51,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTSamusAnimItemThrowSmashU_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 701,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -701,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 19), 701,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimItemThrowSmashU_joint8[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 67, -17, -1474, 98, 60, -42,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimItemThrowSmashU_joint11[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -209, -39, -282, 18, -53, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -313, 11, 144, 15, -35, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimItemThrowSmashU_joint12[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1550, -129, 1737, -79, -1824, 242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1407, -183,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2074, -223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1493, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1531, -303,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2639, -394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1221, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1217, -264,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2347, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2477, 6, -2890, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2335, -203, 715, -325, -2710, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 537, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2884, -324, -2901, -94,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2921, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2984, -102,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -3264, 35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 519, -22, -2959, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -121, -19, -3357, -69,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3227, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3190, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3158, 31, -128, -7, -3432, -75,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimItemThrowSmashU_joint14[60] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -595, 297,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -297, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -447, -312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, -292,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -724, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -681, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -943, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -963, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -900, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -894, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -693, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -595, 98,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimItemThrowSmashU_joint15[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1521, 31, 1635, -25, -1998, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1509, -156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1331, -14, -2160, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1343, 141, -2179, 42,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1851, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1614, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1703, -104, 1759, 72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1729, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1754, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1831, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -1996, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1726, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1524, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1751, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 10), 1639, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1521, 3, 1635, -3, -1998, -2,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimItemThrowSmashU_joint17[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 24,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 694, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 694, -82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 258, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 234, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 476, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, 2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimItemThrowSmashU_joint19[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -14, -1579, 6, 1566, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1726, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1645, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1625, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1650, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1525, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1666, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1644, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1757, 58,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1702, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1576, -1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1681, -20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1567, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1645, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1683, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1684, -1, -1579, -2, 1566, -1,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimItemThrowSmashU_joint20[62] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1831, 1, 1445, 1, 1554, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1471, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1516, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1852, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1826, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1476, -89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1467, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), 1825, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1481, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 1551, 4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1506, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), 1446, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1831, 6, 1445, 0, 1554, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimItemThrowSmashU_joint22[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 453, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 765, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 784, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 346, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 316, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 451, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 453, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimItemThrowSmashU_joint23[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 145, 0, 193, 12, -214, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 114, -46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 16, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -455, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 87,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -71, 112,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 85, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 173, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -56, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -212, -4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 27, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 143, 2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 176, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 191, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 145, 1, 193, 1, -214, -2,
	ftAnimEnd(),
};
