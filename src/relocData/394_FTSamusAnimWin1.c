/* AnimJoint data for relocData file 394 (FTSamusAnimWin1) */
/* 3344 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimWin1_joint1[10];
extern u16 dFTSamusAnimWin1_joint2[72];
extern u16 dFTSamusAnimWin1_joint4[64];
extern u16 dFTSamusAnimWin1_joint5[186];
extern u16 dFTSamusAnimWin1_joint6[80];
extern u16 dFTSamusAnimWin1_joint8[30];
extern u16 dFTSamusAnimWin1_joint11[14];
extern u16 dFTSamusAnimWin1_joint12[186];
extern u16 dFTSamusAnimWin1_joint14[88];
extern u16 dFTSamusAnimWin1_joint15[180];
extern u16 dFTSamusAnimWin1_joint17[48];
extern u16 dFTSamusAnimWin1_joint19[196];
extern u16 dFTSamusAnimWin1_joint20[220];
extern u16 dFTSamusAnimWin1_joint22[64];
extern u16 dFTSamusAnimWin1_joint23[188];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimWin1_joints[] = {
	(u32)dFTSamusAnimWin1_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimWin1_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimWin1_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimWin1_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimWin1_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimWin1_joint8, /* [6] joint 8 */
	0x00000000, /* [7] NULL */
	(u32)dFTSamusAnimWin1_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimWin1_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimWin1_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimWin1_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimWin1_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimWin1_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimWin1_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimWin1_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimWin1_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimWin1_joint1[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 1600, 0,
	ftAnimBlock(0, 75),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTSamusAnimWin1_joint2[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -6, 0, -48, 0, 1, 0, 117, 0, -149, 0, -340,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), -987, 0, 29, 0, 314, 0, -363, 0, -869, 1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 13), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), 0, -987, 29, 314, -363, -869,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -275, 30, 94, 4,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 1,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 12), 25, 0, -634, 0, -343, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 7), -270,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -187, 0, -38, 0, 128, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTSamusAnimWin1_joint4[64] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 26, 0, -16, 0, -9,
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 13), 388, 6, -326, -5, -114, -1, -91, 0, -83, 0, 56, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 50), -91, 0, -83, 0, 56, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 50), 388, -326, -114,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 109, -128, -30, 69, 3,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 405, 45, 168,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 46, 52,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 10), 769, 370, 553, 84, -129, 61,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimWin1_joint5[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1132, 24, -1722, 221, 1377, -222,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -989, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 163, 1154, -183,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1395, 63, 1010, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 797, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1389, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -987, 0, -1366, 26,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1381, -66,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -949, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 787, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 754, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1465, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -936, 9, -1576, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -930, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1702, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1702, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1702, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 46), -1702, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 754, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 44), 754, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -930, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 39), -930, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -930, 6, -1702, 1, 754, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -912, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1588, 85, 928, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1493, 98, 1028, 85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1059, -78,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1143, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -970, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -994, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -918, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -776, 70, 957, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -778, -1, -1124, 15, 958, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -779, 0, -1102, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 959, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 959, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -780, 0, -1101, 0, 959, 0,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimWin1_joint6[80] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -738, -20,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -759, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -643, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -309, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -700, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -743, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 46), -625, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -625, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -687, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -760, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -921, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -917, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -905, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -905, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTSamusAnimWin1_joint8[30] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, -213, 0, -24, 0, 30,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 346, -58,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -38, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), -53, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 62), -53, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTSamusAnimWin1_joint11[14] = {
	ftAnimSetVal(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfter(FT_ANIM_ROTX), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), -496, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTSamusAnimWin1_joint12[186] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -59, -128, 82, -215, 34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -186, -22, -145, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 88, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 112, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 132, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -206, -17, -157, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -380, -154,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -565, -208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 72, -30, -797, -115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 70, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -796, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -796, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 70, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 70, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 38), -251, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -252, -13, 70, 8, -796, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -333, -57, 175, 134, -814, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -393, -36, 355, 197, -859, -30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 708, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -407, 188, -875, 204,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -16, 522, -450, 567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 637, 441, 681, -32, 259, 503,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 658, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 866, 172, 556, 211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 983, 99, 682, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1065, 166, 733, 139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1316, 436, 719, 26, 962, 413,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1939, 429, 711, -51, 1560, 407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2175, 156, 615, -104, 1777, 146,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2251, 76, 503, -111, 1853, 75,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimWin1_joint14[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -581, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -638, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -881, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -926, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -895, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 47), -733, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -733, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1068, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1198, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1224, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1210, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1197, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1010, 173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -801, 230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -270, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 270,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimWin1_joint15[180] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1700, -38, -1581, 25, 1220, -17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1452, -51,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1195, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1385, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1300, 84,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -996, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1404, -39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1262, -69,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1259, 80,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1558, 66,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1181, -77,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1046, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -995, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 50), -994, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1600, 25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1608, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1046, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 47), 1048, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 44), 1607, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1048, 32, -994, 6, 1607, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -964, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1113, 83, 1571, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1214, 69, 1412, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1252, -2, 1248, -113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1210, -6, 1185, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1364, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1002, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1028, -83,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1538, -95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1535, 133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1623, -18,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 969, -35,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 899, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1614, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1655, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1609, -14, -1666, -10, 885, -13,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimWin1_joint17[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 474, 22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 515, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 485, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 378, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 378, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 885, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 922, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 955, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 958, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTSamusAnimWin1_joint19[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1528, 4, -1576, 9, -1647, 4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -1386, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), 1571, 7, -1537, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1574, -6, -1524, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1392, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1379, 10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1325, 56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1229, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1340, -40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1318, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1373, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -1379, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1233, -1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 31), -1232, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1318, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 46), 1317, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1379, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 34), -1379, 0,
	ftAnimBlock(0, 17),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -1232, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1317, 6, -1379, -8, -1232, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1464, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1330, 59, -1245, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1437, 136, -1308, -63,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1749, 103, -1405, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1579, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1744, -26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1809, 9, -1433, -39,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1595, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1767, -95, -1742, 35,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1596, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1618, -130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1458, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1550, 31, -1611, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1529, 1, -1619, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1447, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1453, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1461, 7, -1530, 0, -1619, 0,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimWin1_joint20[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1377, 18, 1446, -41, -1659, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1343, -36, -1655, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1359, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1393, -38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1563, -89,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1305, -28, -1730, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1310, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2062, -73,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1667, -93,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1773, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1343, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1375, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2138, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -2283, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1722, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1609, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1346, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1349, 19, -2307, -15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2314, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1627, -8, 1385, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1627, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1385, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 45), 1386, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2314, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 43), -2314, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1627, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 42), -1629, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, -8, 1384, -7, -2314, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1379, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1957, 167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1647, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1721, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1809, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1373, -22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1255, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1759, 71, -1771, 193,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1596, 50, -1405, 116,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1261, 12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1291, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1565, 45, -1338, 62,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1179, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1417, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1315, 84, 1272, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1248, 67, 1249, -23, -1144, 34,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimWin1_joint22[64] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 444, 49,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 494, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 682, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 724, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 762, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 43), 819, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 818, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 870, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 839, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 764, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 768, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTSamusAnimWin1_joint23[188] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1469, 16, 1418, 68, -1824, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1340, 27, 1566, -15, -1988, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1310, 31, 1535, -23, -1924, 74,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1318, -55, 1569, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1779, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1762, 12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1730, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1391, -85, 1672, 104,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1539, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1778, 72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1817, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1523, 8, 1794, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1794, 0, -1730, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 47), -1731, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 48), 1796, 0,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1522, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 40), -1520, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1522, -3, -1731, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1751, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1472, 70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1796, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1765, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1642, -140, -1790, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1350, -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1731, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1384, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1566, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1594, 44, 1264, -60,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1304, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1478, 105, -1651, 78,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1472, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1384, 57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1478, -94,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1361, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1583, -85, 1423, 54, -1481, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1650, -66, 1470, 46, -1485, -4,
	ftAnimEnd(),
};
