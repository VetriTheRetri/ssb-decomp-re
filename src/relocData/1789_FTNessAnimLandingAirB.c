/* AnimJoint data for relocData file 1789 (FTNessAnimLandingAirB) */
/* 2272 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimLandingAirB_joint1[14];
extern u16 dFTNessAnimLandingAirB_joint2[22];
extern u16 dFTNessAnimLandingAirB_joint4[34];
extern u16 dFTNessAnimLandingAirB_joint5[116];
extern u16 dFTNessAnimLandingAirB_joint6[46];
extern u16 dFTNessAnimLandingAirB_joint7[10];
extern u16 dFTNessAnimLandingAirB_joint8[22];
extern u16 dFTNessAnimLandingAirB_joint10[42];
extern u16 dFTNessAnimLandingAirB_joint11[94];
extern u16 dFTNessAnimLandingAirB_joint12[56];
extern u16 dFTNessAnimLandingAirB_joint13[36];
extern u16 dFTNessAnimLandingAirB_joint15[10];
extern u16 dFTNessAnimLandingAirB_joint16[82];
extern u16 dFTNessAnimLandingAirB_joint18[42];
extern u16 dFTNessAnimLandingAirB_joint19[102];
extern u16 dFTNessAnimLandingAirB_joint21[46];
extern u16 dFTNessAnimLandingAirB_joint22[104];
extern u16 dFTNessAnimLandingAirB_joint24[52];
extern u16 dFTNessAnimLandingAirB_joint25[108];
extern u16 dFTNessAnimLandingAirB_joint26[46];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimLandingAirB_joints[] = {
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimLandingAirB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimLandingAirB_joint1[14] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -146, 405, 441,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), -16, 537, -28,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTNessAnimLandingAirB_joint2[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 1, 0, -24, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 28, -360, 8,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimLandingAirB_joint4[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 962, 84, -242, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 15), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 765, 0, 7, -2, 11, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 970, -85, 66, 0, 60, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimLandingAirB_joint5[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1789, -48, -529, -49, 1233, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1837, -214, -578, -71, 1279, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2218, -468, -672, 7, 1661, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2774, -290, -563, 180, 2214, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2798, -50, -311, 145, 2181, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2875, -43, -273, 26, 2278, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2885, 0, -258, 0, 2327, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -307, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2874, 6, 2370, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2871, -104, 2426, 201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -3343, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -451, -80, 2773, 351,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -270, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3128, 311,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 3632, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3531, -135,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -3632, 4,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -259, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3627, 5, -261, -1, 3632, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimLandingAirB_joint6[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -509, -43,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -588, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -480, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 235,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -432, -322,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, -149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -525, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, 51,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimLandingAirB_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimLandingAirB_joint8[22] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 288, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -10, 0, 364, -3, -32, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 0, 300, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimLandingAirB_joint10[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -230, 0, 0, 0, 54, -17,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0, 54, -28, -17, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -230, 28, 0, 10, 0, -15,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 88, 32, 115, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -172,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimLandingAirB_joint11[94] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1060, 31, 1537, -4, 442, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1232, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1529, -31, 515, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1470, -55, 646, 138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 962, 58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1370, -5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1199, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1103, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1307, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1372, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1272, -12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1093, -16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1048, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1269, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1261, -86, 1302, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1130, 72, 1096, -111, 1420, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 61, 1038, -57, 1489, 68,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimLandingAirB_joint12[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -293, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -305, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -165, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -406, -274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -151,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimLandingAirB_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_ROTX), 804,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 22, 0, -22,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 312,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 199, 6, -203, 14,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 376,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 54, -15, 126, 15,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 6), 90,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimLandingAirB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 15),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimLandingAirB_joint16[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -276, -10, -61, -6, 762, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -83, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -293, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 731, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -224, -117, 515, -204,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -380, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -250, 48, 323, -196,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -188, -39, -320, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -235, -47, -349, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -288, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -364, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -356, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -281, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -365, -1, -279, 1, -297, -4,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimLandingAirB_joint18[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 315,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 736, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 605, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 386, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 389, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 396, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimLandingAirB_joint19[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1437, 27, -1803, -19, -1199, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1405, -35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -2121, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1252, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1463, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1726, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1464, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1739, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1712, -31, -2170, -18, -1918, -149,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -2011, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1802, -43, -2024, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1799, 31, -1983, 70,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1626, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1616, 47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1923, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1646, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1602, 14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1601, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1586, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1580, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1602, -1, -1620, 25, -1582, -1,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimLandingAirB_joint21[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 808, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 522, -72, 0, -23, 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 448, -85, -119, -71, 97, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 264, -80, -213, -2, 252, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 48, -41, -131, 26, 161, -31,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -66, 0, 0,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimLandingAirB_joint22[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 553, -21, 95, 115, 1267, -86,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 451, -132, 991, -251,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 210, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 356, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 267, -192, 414, -17, 677, -349,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 3, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 65, -138, 321, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 117, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, -45,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -11, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -145, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -40, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -20, 28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 86, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, -11, 175, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -114, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 44, 104, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 128, 14, -185, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -12, 136, 7, -210, -25,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimLandingAirB_joint24[52] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 252,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 259, 297,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 601, 301,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1042, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 945, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 701, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 443, -238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 225, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 262, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 398, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 409, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 407, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimLandingAirB_joint25[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -382, 17, -393, -12, 531, -143,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -216, 113, -380, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 186, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2, -138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, 123, -250, 133, -90, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 129, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -113, 113, -4, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 112, 143, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 164, 47, 111, 193, 96, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, -70, 362, 232, 81, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -215, 577, 73, -193, -237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -206, -80, 508, -106, -393, -81,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 111, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -137, 76, -356, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 58, 31, -222, 32,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 47, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 76, 17, 25, -22, -202, 20,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimLandingAirB_joint26[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1244, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 996, -163, 105, 39, 40, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 590, -156, 159, 7, 10, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 370, -59, 134, -34, 5, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 351, -34, 20, -14, 104, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 56, 0, 0,
	ftAnimEnd(),
};
