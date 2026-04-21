/* AnimJoint data for relocData file 1758 (FTNessAnimItemDrop) */
/* 2208 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimItemDrop_joint1[48];
extern u16 dFTNessAnimItemDrop_joint2[16];
extern u16 dFTNessAnimItemDrop_joint4[56];
extern u16 dFTNessAnimItemDrop_joint5[104];
extern u16 dFTNessAnimItemDrop_joint6[48];
extern u16 dFTNessAnimItemDrop_joint7[10];
extern u16 dFTNessAnimItemDrop_joint8[64];
extern u16 dFTNessAnimItemDrop_joint10[26];
extern u16 dFTNessAnimItemDrop_joint11[172];
extern u16 dFTNessAnimItemDrop_joint12[82];
extern u16 dFTNessAnimItemDrop_joint13[30];
extern u16 dFTNessAnimItemDrop_joint15[18];
extern u16 dFTNessAnimItemDrop_joint16[68];
extern u16 dFTNessAnimItemDrop_joint18[50];
extern u16 dFTNessAnimItemDrop_joint19[50];
extern u16 dFTNessAnimItemDrop_joint21[10];
extern u16 dFTNessAnimItemDrop_joint22[84];
extern u16 dFTNessAnimItemDrop_joint24[50];
extern u16 dFTNessAnimItemDrop_joint25[50];
extern u16 dFTNessAnimItemDrop_joint26[16];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimItemDrop_joints[] = {
	(u32)dFTNessAnimItemDrop_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimItemDrop_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimItemDrop_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimItemDrop_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimItemDrop_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimItemDrop_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimItemDrop_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimItemDrop_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimItemDrop_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimItemDrop_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimItemDrop_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimItemDrop_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimItemDrop_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimItemDrop_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimItemDrop_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimItemDrop_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimItemDrop_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimItemDrop_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimItemDrop_joint25, /* [24] joint 25 */
	(u32)dFTNessAnimItemDrop_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTNessAnimItemDrop_joint1[48] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -13, 0, 0, 0, 0, 540, 102, 0, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 0, 0, 585, 39, -1, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 585, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 585, -23, -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, 0, 540, -1, 0, 9,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimItemDrop_joint2[16] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 3, -360, 13, 8, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 28, -1, -360, -3, 8, 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTNessAnimItemDrop_joint4[56] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, -86, 0, 17, 0, -60, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 24), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 92, -10, 306, 39, -54, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -80, -43, 313, 1, -80, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 313, -80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -80, 5, 313, -20, -80, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 3, 0, -2, 0, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTNessAnimItemDrop_joint5[104] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -410, 47, -261, 0, 415, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -305, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -288, 18, 331, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -269, 32, 297, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -224, 21, -339, -15, 217, -36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -332, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -227, 1, 224, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -235, -7, 226, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -332, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -346, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -245, -26, 233, 33,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -311, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -323, 17, 294, 44,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -266, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 321, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 410, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -329, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -402, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -410, -7, -261, 5, 415, 5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimItemDrop_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -473, 37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -267, 77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -179, 129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -9, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -21, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -141, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -199, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -444, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -473, -29,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimItemDrop_joint7[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 143, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTNessAnimItemDrop_joint8[64] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -10, 0, 364, -3, -32, 4, 0, 0, 300, 2, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 300, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 210, 26, 77, -33, 74, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 203, -1, 97, 5, 72, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 97, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 203, 1, 97, -4, 72, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 209, -15, 79, 19, 69, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -10, 0, 364, -3, -32, 4,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTNessAnimItemDrop_joint10[26] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, -13, 0, 4,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 0, -4, 0, 3, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 24), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimItemDrop_joint11[172] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1192, -170, 1038, 95, 1489, -210,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 914, -70, 1117, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1133, 176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1392, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 882, -22, 1473, 121, 1066, -41,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 795, -130, 945, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1635, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1775, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 607, -122, 1716, -89, 703, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 551, -175, 1596, -284, 515, -411,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 256, -146, 1147, -224, -120, -317,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 257, 1, 1147, 0, -120, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, -88, 1146, -51, -119, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 195, 1043, 37, -157, 397,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 648, 371, 1221, 324, 675, 562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 824, 138, 1692, 229, 967, 210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 926, 75, 1679, -26, 1095, 106,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1001, 0, 1232, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1613, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1599, -19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1433, -64,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1001, 0, 1236, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 998, 0, 1243, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 997, 50, 1368, -159, 1244, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1098, 97, 1115, -164, 1385, 122,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1192, 93, 1038, -76, 1489, 104,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimItemDrop_joint12[82] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, 160,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 194,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -273, -303,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -257,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -789, 440,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 394,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 0, -4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -442, -279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -558, -116,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTNessAnimItemDrop_joint13[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 90, -120, 54, 7, 126, 5,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -1056, 109, 71, 75, 68, 30,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), 54, 126, 143, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 16), 90,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTNessAnimItemDrop_joint15[18] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 893, -22, -935, -4, 681, 21,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 75, 68, 30,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), 893, -935, 681,
	ftAnimEnd(),
	0x0000,
};

/* Joint 16 */
u16 dFTNessAnimItemDrop_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -381, -18, -261, 30, -289, 27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -384, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -96, 30, -162, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -69, 14, -142, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -71, -2, -149, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -72, -23, -149, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -210, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -118, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -145, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -257, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -291, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -381, 3, -261, -3, -289, 1,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimItemDrop_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 430, -67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 196, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 0, -32,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 179, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 411, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 423, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 430, 7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTNessAnimItemDrop_joint19[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 5, 13, 0, -25, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 27, -6, 18, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 134, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 167, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 166, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 164, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 85, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -19, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, -6, 13, -4, -25, -5,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimItemDrop_joint21[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -66, 0, 0, 126, -82, -12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTNessAnimItemDrop_joint22[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1488, 17, 1429, -13, 1458, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1549, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), 1376, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1568, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1599, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1550, 0, 1599, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 1548, 1, 1597, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1550, -12, 1377, 5, 1604, -26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1509, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1422, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1544, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1511, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1460, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1500, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1488, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1488, 0, 1429, 6, 1458, -2,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimItemDrop_joint24[50] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 311, -97,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 213, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 82, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -37,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 278, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 298, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 311, 13,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTNessAnimItemDrop_joint25[50] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 107, 2, 28, -3, -172, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 23), 112, -4, 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -14, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -13, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -12, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -15, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -164, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -4, 28, 0, -172, -8,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTNessAnimItemDrop_joint26[16] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 56, 0, 0, -126, -82, -12,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
