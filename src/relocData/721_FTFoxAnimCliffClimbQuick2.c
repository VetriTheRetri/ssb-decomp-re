/* AnimJoint data for relocData file 721 (FTFoxAnimCliffClimbQuick2) */
/* 2128 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimCliffClimbQuick2_joint1[18];
extern u16 dFTFoxAnimCliffClimbQuick2_joint2[84];
extern u16 dFTFoxAnimCliffClimbQuick2_joint3[52];
extern u16 dFTFoxAnimCliffClimbQuick2_joint5[30];
extern u16 dFTFoxAnimCliffClimbQuick2_joint6[92];
extern u16 dFTFoxAnimCliffClimbQuick2_joint7[40];
extern u16 dFTFoxAnimCliffClimbQuick2_joint8[10];
extern u16 dFTFoxAnimCliffClimbQuick2_joint9[36];
extern u16 dFTFoxAnimCliffClimbQuick2_joint11[10];
extern u16 dFTFoxAnimCliffClimbQuick2_joint12[84];
extern u16 dFTFoxAnimCliffClimbQuick2_joint13[44];
extern u16 dFTFoxAnimCliffClimbQuick2_joint14[40];
extern u16 dFTFoxAnimCliffClimbQuick2_joint16[12];
extern u16 dFTFoxAnimCliffClimbQuick2_joint17[82];
extern u16 dFTFoxAnimCliffClimbQuick2_joint19[38];
extern u16 dFTFoxAnimCliffClimbQuick2_joint21[82];
extern u16 dFTFoxAnimCliffClimbQuick2_joint22[72];
extern u16 dFTFoxAnimCliffClimbQuick2_joint24[32];
extern u16 dFTFoxAnimCliffClimbQuick2_joint25[74];
extern u16 dFTFoxAnimCliffClimbQuick2_joint26[42];
extern u16 dFTFoxAnimCliffClimbQuick2_joint27[36];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTFoxAnimCliffClimbQuick2_joints[] = {
	(u32)dFTFoxAnimCliffClimbQuick2_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint3, /* [2] joint 3 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTFoxAnimCliffClimbQuick2_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint9, /* [8] joint 9 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint11, /* [9] joint 11 */
	0x00000000, /* [10] NULL */
	(u32)dFTFoxAnimCliffClimbQuick2_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint14, /* [13] joint 14 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTFoxAnimCliffClimbQuick2_joint17, /* [16] joint 17 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTFoxAnimCliffClimbQuick2_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTFoxAnimCliffClimbQuick2_joint22, /* [21] joint 22 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTFoxAnimCliffClimbQuick2_joint25, /* [24] joint 25 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint26, /* [25] joint 26 */
	(u32)dFTFoxAnimCliffClimbQuick2_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTFoxAnimCliffClimbQuick2_joint1[18] = {
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 480,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), 120, 256,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 360,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 360,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimCliffClimbQuick2_joint2[84] = {
	ftAnimSetValRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -240, 1409, 1272, 1144, -175, 458,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 310, 695, -16, 221,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 1), 1344,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 1166, -604,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), 695,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 221,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), -19, -85,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 1), 327, -233,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), -233, -604,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 57, -129, 570, -268,
	ftAnimBlock(0, 1),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), -85,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -67, 25,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 25,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -268,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 875, 270,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAX), -129,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 5), 48,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 2), -32, 36,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 36,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -20, 1,
	ftAnimBlock(0, 2),
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), 270,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 912, 80,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTFoxAnimCliffClimbQuick2_joint3[52] = {
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAX, 30), 0,
	_FT_ANIM_CMD(11, FT_ANIM_TRAX, 1), 23,
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0, 80, -1608, -241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0, 0, 0, -2412, -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -28, 0, -67, -2948, -161,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -141, -18, -338, -45,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -3220,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -141, -338, -3220,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 5), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimCliffClimbQuick2_joint5[30] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 0, -80,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 0, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 178, 130,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 650, 156, 81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 309, 156, 81,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimCliffClimbQuick2_joint6[92] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 381, -26, -1460, 72, -3129, 40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -3442, -622,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 355, 29, -1388, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 441, 417, -1281, -210,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1190, 387, -1809, -223, -4334, -588,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -4255, 270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1217, 48, -1728, 56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1260, -77,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1697, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1537, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1447, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1133, -24, -3962, 122,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1425, 77, -4380, -161,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1426, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1474, 36, -1437, -9, -4496, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1498, 23, -1444, -7, -4565, -69,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimCliffClimbQuick2_joint7[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, -287,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -575, -514,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1036, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -418, 160,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -715, -296,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1012, -186,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -656, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -560, 95,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTFoxAnimCliffClimbQuick2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 269, 0, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTFoxAnimCliffClimbQuick2_joint9[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 178, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 178, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -36, 7, 136, 38, -72, -20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), 203, -15,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 136, -72,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -113, 136, -72,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTFoxAnimCliffClimbQuick2_joint11[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTFoxAnimCliffClimbQuick2_joint12[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1992, -78, 1490, 112, 2406, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1914, -142, 1603, -254, 2496, -270,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1708, -146, 982, -263, 1866, -367,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1619, -35, 1741, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1076, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1205, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1353, 185,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1549, 166, 1626, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1952, 285, 2255, 464,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2120, 91, 1619, 117, 2556, 141,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1780, -60, 2010, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1330, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1331, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1741, -39, 1334, 3, 1944, -66,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimCliffClimbQuick2_joint13[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -553, -613,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1166, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -436, 579,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -7, 218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -396,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -792, -567,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -858, 184,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -694, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -592, 101,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTFoxAnimCliffClimbQuick2_joint14[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 35, 0, 35,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 272, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 446, 107, 178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 536, -35, 0, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 268, -89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 89, -53, 0, 35,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimCliffClimbQuick2_joint16[12] = {
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	_FT_ANIM_CMD(11, 0, 1), 23,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTFoxAnimCliffClimbQuick2_joint17[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1361, 6, 1602, -4, -1616, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1370, -74, -1593, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1597, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1600, -211,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1218, -49, 1175, -187, -1739, -143,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1954, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1528, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1225, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1984, 101,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2096, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1677, 58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2019, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1875, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1400, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1229, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1202, -27, 1831, -44, -1635, 42,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTFoxAnimCliffClimbQuick2_joint19[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 5, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 138,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 282, 427,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 854, 368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 853, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 645, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 472, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 354, -118,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimCliffClimbQuick2_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 340, -37, 116, -35, 432, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 103, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 311, 50, 451, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 404, -33, 337, -22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 46, -130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 7, -43, 80, -309,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -297, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 74, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -14, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 45, 3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -318, 5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -114, 70,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 95, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 115, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 46, 0, 125, 10, -56, 58,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTFoxAnimCliffClimbQuick2_joint22[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1603, -2, -1601, -3, 1603, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1332, 369, 1673, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1604, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1602, -252,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2109, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -865, 145, -2051, -7, 1694, -52,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1303, -176, 1469, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2125, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -2008, 105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1781, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1393, -49, 1488, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1273, 29, 1701, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1253, 19, -1746, 35, 1743, 41,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTFoxAnimCliffClimbQuick2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 314,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 629, 465,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 936, 217,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 460, -155,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 332, -127,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTFoxAnimCliffClimbQuick2_joint25[74] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1752, -31, 1541, 35, 2036, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1603, 82, 1959, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1754, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1894, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1631, -176, 1709, 78, 1816, -300,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1699, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1540, -24, 1358, -362,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1727, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1091, -205,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1309, 89,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1716, -25, 1706, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 1640, -25, 1711, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1624, -16, 1711, 0, 1381, 71,
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTFoxAnimCliffClimbQuick2_joint26[42] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -648, -17, 280, -104, -349, 201,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -126, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -591, -15, -241, -193, 586, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -711, 25, -495, 48, 584, -117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -465, 88, 0, 89, 0, -73,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 219, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 27 */
u16 dFTFoxAnimCliffClimbQuick2_joint27[36] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 286, 0, -411, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 64, -450,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 332, 86, -485, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 889, -131, 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -325, -213, -10, -24,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -178, -122,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
