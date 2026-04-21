/* AnimJoint data for relocData file 1561 (FTCaptainAnimTechB) */
/* 4224 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimTechB_joint1[18];
extern u16 dFTCaptainAnimTechB_joint2[106];
extern u16 dFTCaptainAnimTechB_joint3[46];
extern u16 dFTCaptainAnimTechB_joint5[70];
extern u16 dFTCaptainAnimTechB_joint6[244];
extern u16 dFTCaptainAnimTechB_joint7[128];
extern u16 dFTCaptainAnimTechB_joint8[26];
extern u16 dFTCaptainAnimTechB_joint9[28];
extern u16 dFTCaptainAnimTechB_joint11[20];
extern u16 dFTCaptainAnimTechB_joint12[228];
extern u16 dFTCaptainAnimTechB_joint13[104];
extern u16 dFTCaptainAnimTechB_joint14[74];
extern u16 dFTCaptainAnimTechB_joint15[10];
extern u16 dFTCaptainAnimTechB_joint17[32];
extern u16 dFTCaptainAnimTechB_joint18[184];
extern u16 dFTCaptainAnimTechB_joint20[96];
extern u16 dFTCaptainAnimTechB_joint22[170];
extern u16 dFTCaptainAnimTechB_joint23[200];
extern u16 dFTCaptainAnimTechB_joint25[84];
extern u16 dFTCaptainAnimTechB_joint26[192];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTCaptainAnimTechB_joints[] = {
	(u32)dFTCaptainAnimTechB_joint1, /* [0] joint 1 */
	(u32)dFTCaptainAnimTechB_joint2, /* [1] joint 2 */
	(u32)dFTCaptainAnimTechB_joint3, /* [2] joint 3 */
	(u32)dFTCaptainAnimTechB_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTCaptainAnimTechB_joint6, /* [5] joint 6 */
	(u32)dFTCaptainAnimTechB_joint7, /* [6] joint 7 */
	(u32)dFTCaptainAnimTechB_joint8, /* [7] joint 8 */
	(u32)dFTCaptainAnimTechB_joint9, /* [8] joint 9 */
	(u32)dFTCaptainAnimTechB_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTCaptainAnimTechB_joint12, /* [11] joint 12 */
	(u32)dFTCaptainAnimTechB_joint13, /* [12] joint 13 */
	(u32)dFTCaptainAnimTechB_joint14, /* [13] joint 14 */
	(u32)dFTCaptainAnimTechB_joint15, /* [14] joint 15 */
	(u32)dFTCaptainAnimTechB_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTCaptainAnimTechB_joint18, /* [17] joint 18 */
	(u32)dFTCaptainAnimTechB_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTCaptainAnimTechB_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTCaptainAnimTechB_joint23, /* [22] joint 23 */
	(u32)dFTCaptainAnimTechB_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTCaptainAnimTechB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimTechB_joint1[18] = {
	ftAnimSetVal(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -3520,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 24), -4800,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 10), -4800,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimTechB_joint2[106] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 8230,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 8230, -155,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -39, 1515, 154,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 715, 1440, -1364, 0, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 5227, -874, 17, 22, 412, -880, -23, -30,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 780, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2010, -714,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 17, -23,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 12), 17, -23,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 420, -1469,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 412, 959,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1206, -321,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 780, -225,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 300, -979,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 412, 720,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2814, -95,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 660, 341,
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 840, 417,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 17, -8, -23, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), -3216, 0, 1600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimTechB_joint3[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 4, 0, 0, 0, 1, 0, -23, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 107, 0, 4, -76, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTCaptainAnimTechB_joint5[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -241, 402, 268, -99, -26, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -241, 42, 402, -40, 268, -26, -99, 79, -26, 21, -68, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 187, 53, 0, -50, 0, -33, 0, 99, 0, 26, 0, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 187, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 26), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 187, 14, 0, 0, 0, -9, 0, 14,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 10), 402, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 11), 189,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimTechB_joint6[244] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1528, 23, -1270, -4, 390, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1482, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1270, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 337, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 267, -41,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 249, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1493, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1528, -48,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 258, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 390, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1590, 1, -1279, -38, 696, 274,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1396, 100, -1471, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 939, 179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1055, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, 34, -1583, -56, 1070, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1070, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1326, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1583,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1070, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1583,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1583, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -1326,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -1326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, -12, -1583, 24, 1070, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1505, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1488, 43, 1124, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1445, 43, 1136, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1295, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1135, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1555, -7, 1124, -72,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1465, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1260, 22, 989, -137,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1265, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 849, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1398, 72, 700, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1319, 2, -1322, -16, 522, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1392, -61, -1297, 0, 712, 170,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1395, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1322, -39, 862, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1444, -67, 1098, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1511, -38, 1185, 34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1533, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1168, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1151, -17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1100, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1549, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1589, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1383, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1373, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 5, -1614, -24, 1084, -15,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimTechB_joint7[128] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -181, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -98, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -181, -280,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -295,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -725, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -537, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -537, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -672, -122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -781, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1004, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1046, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -930, 131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -596, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -308, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -562, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -707, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -819, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -794, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -809, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -808, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -804, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimTechB_joint8[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -220, -4, -25, -2, -109, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -134, -26, -61, -3, -265, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -781, -89, -388,
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTCaptainAnimTechB_joint9[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), 0, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 402, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 4), 402,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 402, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), 187, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimTechB_joint11[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 0, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -312,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTCaptainAnimTechB_joint12[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -505, 12, 643, 6, -452, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -457, -25, 667, -12, -394, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -500, 209, 645, 17, -447, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -39, 132, 703, -8, 1, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, -220, 628, -172, -230, -259,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -480, -152, 357, -255, -517, -193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -540, -26, 118, -168, -618, -65,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 118, 13, -618, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -533, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -534, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -541, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 113, -6, -620, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 118, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -573, 51,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -540, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -433, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 138, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 237, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, 59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -367, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -384, 46,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -286, -6,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 265, 42, -371, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 390, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -319, -88, -472, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -463, -161, -689, -212,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -642, -111, 390, -19, -897, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -616, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 223, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -950, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -765, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -487, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -269, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 132, -76, -672, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 56, 4, -507, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -234, 34, 80, 22, -351, 184,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -141, 13, 152, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 121, 260,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 382, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 543, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 12, 144, -8, 592, 48,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimTechB_joint13[104] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -467, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -799, -153,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -775, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -422, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -439, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -515, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -517, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -554, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1003, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -991, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -660, 75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -476, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -425, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -691, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1076, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1113, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1061, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimTechB_joint14[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), 24, -48, 275, -5, 62, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -266, -15, 219, 0, -112, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -37, -70, 273, 55, 13, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -547, -17, 441, 51, -274, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -125, 7, 532, -6, -15, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -494, -27, 393, -9, -259, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -315, 100, 464, 0, 112, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 211, 41, 399, -13, 401, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTCaptainAnimTechB_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 40),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimTechB_joint17[32] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -536, -14, 0, -1, -44, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), -443, 17, -89, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 21), -58,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 0, 5, 0, 6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 18 */
u16 dFTCaptainAnimTechB_joint18[184] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 87, 19, -27, 17, -389, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 149, 45, 39, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -457, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -89,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -657, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 197, 38, 111, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 226, -10, 157, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 175, -53, 73, -75, -599, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 70, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 6, -38, -520, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -4, -11, -615, -125,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -958, -174,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 0, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, -6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 50, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, -112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1121, 13,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -49, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1115, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1121, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1164, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1393, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 41, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -71, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -143, -35,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1375, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -663, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -137, -1, -169, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -74, 57, -102, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -22, 45, -39, 55,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 174, 16, 67, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -588, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -488, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 16, 70, 3, -472, 16,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimTechB_joint20[96] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 137,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 616, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 854, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1055, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 968, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 752, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1280, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1303, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1281, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1153, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1106, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 913, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 806, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 827, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 837, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 575, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 512, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 464, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -19,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTCaptainAnimTechB_joint22[170] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -78, -20, 17, 0, 217, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 240, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 0, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -177, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -341, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -488, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -257, 182,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -123, 78, 217, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, 15, 141, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -73, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -27, -197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -402, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 0, -402, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 0, 0, -402, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -74, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -38, 13,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, 7, -402, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 77, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -308, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -294, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -22, 39, 86, 20, -281, 86,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 138, 98,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 145, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -121, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 57, 170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 235, 2, 219, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 144, -87, 124, -22, 178, -42,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -28, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 61, -71, 134, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -106, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 44, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 58, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -115, -10, 74, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -11, -42, -13, 80, 5,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimTechB_joint23[200] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 225, -24, 160, 15, -49, -37,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 144, -56,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 191, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -154, -59,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -226, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 87, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 61, 30, 185, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 148, 81, 183, -12, -124, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 1, 160, 10, -49, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 152, -100, 204, 0, -253, -241,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -849, -294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 24, -99, 160, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -47, -40, 62, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -52, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, -35, -1121, -182,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1, 4, -1153, 41,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -53, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -75, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2, 1, -1121, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 25, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1131, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -938, 26,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -85, -10,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -137, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 33, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 79, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -141, 13, 89, 24, -911, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 169, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 15, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -787, 125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -660, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -87, 18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 172, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 112, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 53, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 155, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, 4, 110, -2, -76, 10,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimTechB_joint25[84] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 442, 82,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 525, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 673, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 796, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 846, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 634, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 442, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 725, 285,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1012, 244,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1214, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1280, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1282, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 1229, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1219, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 1139, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1079, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 609, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 560, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -18,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimTechB_joint26[192] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1780, 23, -1696, 0, 1583, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1583, -20,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1690, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1865, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1945, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1993, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1852, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1780, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1865, 65, 1551, -52,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1349, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1912, -61, -1675, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1608, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1741, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1656, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), 1206, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1608,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1206, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1178, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1659, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1661, 14,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1608, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1684, 13, -1687, -76,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1510, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1760, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -2058, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1165, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1085, -2,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1488, 41, -2080, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -2018, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1592, 88, 1090, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1296, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1665, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1770, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2000, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1975, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1770, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1770, 0, 1319, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1769, 0, -1973, 1, 1328, 9,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
