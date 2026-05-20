/* AnimJoint data for relocData file 1760 (FTNessAnimItemThrowAirSmashU) */
/* 2528 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemThrowAirSmashU_joint1[84];
extern u16 dFTNessAnimItemThrowAirSmashU_joint2[42];
extern u16 dFTNessAnimItemThrowAirSmashU_joint4[56];
extern u16 dFTNessAnimItemThrowAirSmashU_joint5[86];
extern u16 dFTNessAnimItemThrowAirSmashU_joint6[14];
extern u16 dFTNessAnimItemThrowAirSmashU_joint7[28];
extern u16 dFTNessAnimItemThrowAirSmashU_joint8[52];
extern u16 dFTNessAnimItemThrowAirSmashU_joint10[46];
extern u16 dFTNessAnimItemThrowAirSmashU_joint11[128];
extern u16 dFTNessAnimItemThrowAirSmashU_joint12[38];
extern u16 dFTNessAnimItemThrowAirSmashU_joint13[60];
extern u16 dFTNessAnimItemThrowAirSmashU_joint15[18];
extern u16 dFTNessAnimItemThrowAirSmashU_joint16[110];
extern u16 dFTNessAnimItemThrowAirSmashU_joint18[50];
extern u16 dFTNessAnimItemThrowAirSmashU_joint19[98];
extern u16 dFTNessAnimItemThrowAirSmashU_joint21[30];
extern u16 dFTNessAnimItemThrowAirSmashU_joint22[100];
extern u16 dFTNessAnimItemThrowAirSmashU_joint24[48];
extern u16 dFTNessAnimItemThrowAirSmashU_joint25[98];
extern u16 dFTNessAnimItemThrowAirSmashU_joint26[26];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTNessAnimItemThrowAirSmashU_joints[] = {
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTNessAnimItemThrowAirSmashU_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimItemThrowAirSmashU_joint1[84] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -22, 0, 0, 0, 0, 242, -46, 0, 4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 223, 55, 0, 0, 360, 312, 0, -1,
	ftAnimSetValT(FT_ANIM_ROTY, 2), 223,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 360, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 360, 898, 0, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -27,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 696, 11, 0, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 0, 540, -201, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 18), 0,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 14), 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 0, 0, 242, 5, 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimItemThrowAirSmashU_joint2[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 7, -209, -1, 0, 9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -804, -198,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -804,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -804, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -1, -209, 2, 0, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimItemThrowAirSmashU_joint4[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 148, -130, 0, -14, 0, -26, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, -49, 402, 134,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 0, 402,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 402, -226,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 7, -276, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 148, 2, 0, 2, 0, 4,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimItemThrowAirSmashU_joint5[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 505, 176, -514, -6, -896, -178,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -517, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 837, 76, -1227, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 835, -1, -1227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 834, -243, -1227, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 348, -394, -638, -41, -729, 414,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -592, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 44, -160, -397, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 27, -4, -377, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 15), 470, 30, -856, -33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -589, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -522, 9,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 493, 17, -882, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 505, 11, -514, 8, -896, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimItemThrowAirSmashU_joint6[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 23), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimItemThrowAirSmashU_joint7[28] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -50, 0, 25, 268, 8,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0, 268,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 143, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimItemThrowAirSmashU_joint8[52] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 194, -53, 0, 33, 0, 0, 300, 2, 0, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -428, -207,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 300, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -428,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -428, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -366, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 194, 8, 0, 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimItemThrowAirSmashU_joint10[46] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 41, 0, 0, 0, -13, 0, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 332, 110,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), 332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 332, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -160, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 0, -4, 0, 5, 0, -2,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTNessAnimItemThrowAirSmashU_joint11[128] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1034, 0, 968, 173, -1429, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, 290, 1142, 75, -1406, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -453, 287, 1119, -9, -868, 266,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1314, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -458, 187, -872, 216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -82, 259, -439, 319,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 65, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -8, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, 93, 167, 101,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 189, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1399, -41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 113, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 761, 72,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 214, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 370, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1354, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 1078, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 845, 221, 920, -115, 444, 215,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 933, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1204, 538, 800, 538,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1923, 448, 1520, 449,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 2157, 40, 1759, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2182, 24, 968, 34, 1786, 27,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemThrowAirSmashU_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 423,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 216,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -370, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -397, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -418, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -14,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimItemThrowAirSmashU_joint13[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), -170, 108, 267, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -63, 143, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 75, 68, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 1824, 167, 0, 7, 0, -29,
	ftAnimSetValT(FT_ANIM_ROTX, 4), 1340,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 4), 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 143, 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -4, 0, 17,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 580,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -63, 267,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 12), -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimItemThrowAirSmashU_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -22, -935, -4, 681, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimItemThrowAirSmashU_joint16[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -41, 170, -342, -84, -714, -100,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -353, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 128, -80, -814, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -202, -212, -350, 292,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -343, -54, -151, 145,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -297, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -405, -26, -62, 120, 60, 102,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 58, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -363, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -342, -9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -246, -55,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -344, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -174, 85,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -301, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -690, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -94, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -54, 26, -343, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -41, 12, -342, 1, -714, -24,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimItemThrowAirSmashU_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 423, 394,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 936, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 744, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 563, -372,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -278,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 342, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 20,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimItemThrowAirSmashU_joint19[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1581, -38, 1797, 87, -1614, -93,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1860, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 2044, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1619, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1372, 167,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1296, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1812, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1737, 280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1568, -271, -1250, 344,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -986, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -2048, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2034, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1803, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1461, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2013, 36,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1582, 4,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1473, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1610, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1581, 1, 1797, -5, -1614, -3,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimItemThrowAirSmashU_joint21[30] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -184, 93, 178, 1, 112, -30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -7, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 184, -40,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -476, 178, 112,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemThrowAirSmashU_joint22[100] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -52, 7, 435, -117, -802, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 25, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 172, -71, -589, 194,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 174, -17, -389, 196,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -175, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 73,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 294, 3,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 372, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -183, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -312, -23,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 296, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 167, -113,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -336, -103,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -766, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 52, -94, 415, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -22, -52, 430, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -52, -29, 435, 5, -802, -36,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimItemThrowAirSmashU_joint24[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 568, 107,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 630, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 348, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 266, 213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 434, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 522, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 568, 46,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimItemThrowAirSmashU_joint25[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1613, -65, -1505, -51, -1590, -113,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1443, 180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1678, 16, -1556, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1580, 40, -1879, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2043, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1818, 105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1664, 117, -1225, 163,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1154, -28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1418, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2059, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1710, 29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1188, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1410, 5,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1422, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1505, -1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1680, 27, -1400, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1619, 10, -1571, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1613, 6, -1505, 0, -1590, -19,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemThrowAirSmashU_joint26[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -339, -256, -211,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -113, -131, 79,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 20), -339, -256, -211,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
