/* AnimJoint data for relocData file 846 (FTDonkeyAnimStunStartD) */
/* 2032 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTDonkeyAnimStunStartD_joint1[40];
extern u16 dFTDonkeyAnimStunStartD_joint2[20];
extern u16 dFTDonkeyAnimStunStartD_joint4[38];
extern u16 dFTDonkeyAnimStunStartD_joint5[86];
extern u16 dFTDonkeyAnimStunStartD_joint6[44];
extern u16 dFTDonkeyAnimStunStartD_joint7[16];
extern u16 dFTDonkeyAnimStunStartD_joint8[42];
extern u16 dFTDonkeyAnimStunStartD_joint10[20];
extern u16 dFTDonkeyAnimStunStartD_joint11[102];
extern u16 dFTDonkeyAnimStunStartD_joint12[44];
extern u16 dFTDonkeyAnimStunStartD_joint13[22];
extern u16 dFTDonkeyAnimStunStartD_joint16[10];
extern u16 dFTDonkeyAnimStunStartD_joint17[92];
extern u16 dFTDonkeyAnimStunStartD_joint19[44];
extern u16 dFTDonkeyAnimStunStartD_joint21[90];
extern u16 dFTDonkeyAnimStunStartD_joint22[94];
extern u16 dFTDonkeyAnimStunStartD_joint24[40];
extern u16 dFTDonkeyAnimStunStartD_joint25[122];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTDonkeyAnimStunStartD_joints[] = {
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint16, /* [13] joint 16 */
	NULL, /* [14] NULL */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTDonkeyAnimStunStartD_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTDonkeyAnimStunStartD_joint1[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 643, 14, 600, -240,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 15), -400, -42,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 723, -16, 3, -23, 1200, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 402, -28, -29, -10, 762, -53,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, -29, 1031, -400,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTDonkeyAnimStunStartD_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -214, -154,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), -265, -41, -16, -214, -154,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX, 30), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTDonkeyAnimStunStartD_joint4[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 357, 0, 0, 319, -157,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterT(FT_ANIM_TRAX, 30), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 319, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 536, 25, 0, 0, 0, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 735, 8, 11, 0, 19, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 750, 24, 41,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTDonkeyAnimStunStartD_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1421, 32, -1026, -5, 564, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1154, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1235, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 73, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 370, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1192, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1864, 13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1270, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -1552, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 498, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1039, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1850, 12, 1067, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), -1676, 9, 1138, -6,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1540, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1525, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1671, 4, -1523, 1, 1134, -3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTDonkeyAnimStunStartD_joint6[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1152, 20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -780, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -777, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -885, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -979, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -519, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -462, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -407, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTDonkeyAnimStunStartD_joint7[16] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 702, 15, 17,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 0, 702, 15, 17,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTDonkeyAnimStunStartD_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -523, -342, 166, -9, 1320, -145,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 1354, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1000, 0, 0, 22, 0, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -536, 84,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 47, 0, -4, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 174, -67, -44,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTDonkeyAnimStunStartD_joint10[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -398, 70, 29,
	ftAnimSetValAfterBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTDonkeyAnimStunStartD_joint11[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 119, -35, 524, 5, 2388, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -326, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 290, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 2010, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1840, -123,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1794, 23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -317, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 14, 84,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1820, 82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2618, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 93, 71, 262, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 55, -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 169, 5,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2654, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 2742, -7,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 26, -29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -109, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 173, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 172, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -115, -6, 172, 0, 2737, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTDonkeyAnimStunStartD_joint12[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1073, 19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -702, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -698, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -832, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1159, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1120, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -431, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -416, 14,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTDonkeyAnimStunStartD_joint13[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 98,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 702, 18, -13,
	ftAnimSetValAfterT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 30), 0, 0, 702, 18, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 20), -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), 98,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTDonkeyAnimStunStartD_joint16[10] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -893, -1340, 2502,
	ftAnimSetValAfterBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 30), -893, -1340, 2502,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTDonkeyAnimStunStartD_joint17[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1822, -2, -1178, -27, 217, -47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1565, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1315, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 114, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 176, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 680, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1533, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1406, 47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1307, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -1152, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 635, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 840, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1456, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 1550, -4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1155, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1214, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 921, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1269, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1547, -2, -1215, -1, 1279, 9,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTDonkeyAnimStunStartD_joint19[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1107, 3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 917, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 754, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 686, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 984, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1045, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1029, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1026, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTDonkeyAnimStunStartD_joint21[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -21, 33, -64, -14, -295, 65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 85, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -246, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 272,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 314, 247,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 358, -281,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 346, 117, -326, -9, -76, -271,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -196, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 33, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 335, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -19, -24,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -202, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), -368, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -40, -18, 38, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 17), -114, 1, 16, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 1, 14, -1, -369, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTDonkeyAnimStunStartD_joint22[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -5, -20, 254, -65, -1160, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 176, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 88, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1491, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1478, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1059, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 193, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 401, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 83, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 149, -12,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -967, 63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -506, 57,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 395, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 218, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 138, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 104, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -450, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -303, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 104, 0, 217, -1, -295, 7,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTDonkeyAnimStunStartD_joint24[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1158, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValAfterT(FT_ANIM_ROTX | FT_ANIM_ROTY, 30), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1051, -101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 937, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 1089, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1090, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 1006, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 997, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 994, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTDonkeyAnimStunStartD_joint25[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -322, -23, 162, 24, -565, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 334, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -392, 63, -341, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -218, 121, 99, 358,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -345, -300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 288, 38, 376, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 468, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 222, -298,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -750, -210, -219, -252,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -737, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 438, -32, -283, -50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -332, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -10, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -669, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -110, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -98, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 25, -14,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -339, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -386, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 6, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 102, 2,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 12, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -4, 103, 1, -387, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000,
};
