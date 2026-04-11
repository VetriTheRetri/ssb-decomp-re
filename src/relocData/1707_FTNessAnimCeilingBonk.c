/* AnimJoint data for relocData file 1707 (FTNessAnimCeilingBonk) */
/* 1568 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTNessAnimCeilingBonk_joint1[8];
extern u16 dFTNessAnimCeilingBonk_joint2[34];
extern u16 dFTNessAnimCeilingBonk_joint4[10];
extern u16 dFTNessAnimCeilingBonk_joint5[46];
extern u16 dFTNessAnimCeilingBonk_joint6[30];
extern u16 dFTNessAnimCeilingBonk_joint7[18];
extern u16 dFTNessAnimCeilingBonk_joint8[46];
extern u16 dFTNessAnimCeilingBonk_joint10[10];
extern u16 dFTNessAnimCeilingBonk_joint11[54];
extern u16 dFTNessAnimCeilingBonk_joint12[26];
extern u16 dFTNessAnimCeilingBonk_joint13[34];
extern u16 dFTNessAnimCeilingBonk_joint15[10];
extern u16 dFTNessAnimCeilingBonk_joint16[68];
extern u16 dFTNessAnimCeilingBonk_joint18[36];
extern u16 dFTNessAnimCeilingBonk_joint19[66];
extern u16 dFTNessAnimCeilingBonk_joint21[20];
extern u16 dFTNessAnimCeilingBonk_joint22[68];
extern u16 dFTNessAnimCeilingBonk_joint24[28];
extern u16 dFTNessAnimCeilingBonk_joint25[120];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTNessAnimCeilingBonk_joints[] = {
	(u32)dFTNessAnimCeilingBonk_joint1, /* [0] joint 1 */
	(u32)dFTNessAnimCeilingBonk_joint2, /* [1] joint 2 */
	(u32)dFTNessAnimCeilingBonk_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTNessAnimCeilingBonk_joint5, /* [4] joint 5 */
	(u32)dFTNessAnimCeilingBonk_joint6, /* [5] joint 6 */
	(u32)dFTNessAnimCeilingBonk_joint7, /* [6] joint 7 */
	(u32)dFTNessAnimCeilingBonk_joint8, /* [7] joint 8 */
	(u32)dFTNessAnimCeilingBonk_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTNessAnimCeilingBonk_joint11, /* [10] joint 11 */
	(u32)dFTNessAnimCeilingBonk_joint12, /* [11] joint 12 */
	(u32)dFTNessAnimCeilingBonk_joint13, /* [12] joint 13 */
	(u32)dFTNessAnimCeilingBonk_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTNessAnimCeilingBonk_joint16, /* [15] joint 16 */
	(u32)dFTNessAnimCeilingBonk_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTNessAnimCeilingBonk_joint19, /* [18] joint 19 */
	(u32)dFTNessAnimCeilingBonk_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	(u32)dFTNessAnimCeilingBonk_joint22, /* [21] joint 22 */
	(u32)dFTNessAnimCeilingBonk_joint24, /* [22] joint 24 */
	0x00000000, /* [23] NULL */
	(u32)dFTNessAnimCeilingBonk_joint25, /* [24] joint 25 */
	0xFFFF016E, /* [25] END */
};

/* Joint 1 */
u16 dFTNessAnimCeilingBonk_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 242, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTNessAnimCeilingBonk_joint2[34] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY), 0, 0, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAZ), 0, -209, 0, 0, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 0, 0, 534, 854, 2662, -573,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 2), 0, 0, 534, -854, 2662, 573,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 0, 0, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTNessAnimCeilingBonk_joint4[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 148, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTNessAnimCeilingBonk_joint5[46] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2891, -102, -643, 71, -19, 138,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 2326, -445, 562, 339,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -475, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -549, 39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -411, -380,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1776, -364, 969, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 1467, -123, 1332, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1282, -184, -964, -553, 1589, 256,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTNessAnimCeilingBonk_joint6[30] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -539, -4,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -454, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -61, 227,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -539, -539,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTNessAnimCeilingBonk_joint7[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 143, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -268, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTNessAnimCeilingBonk_joint8[46] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), 194, 0, 0, 300,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 3), 551, 71, -15, -3, 7, 1, 288, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 2), 551, -4, -15, 1, 7, 0, 288, 18,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 3), 300,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 537, -118, -9, 5, 4, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 194, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTNessAnimCeilingBonk_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTNessAnimCeilingBonk_joint11[54] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 573, -313, 639, 16, 178, -307,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -120, -393, 622, -1, -501, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -527, -536, 654, -47, -865, -465,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 427, 350,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1193, -447, -1431, -355,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1421, -153, -1576, -95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1329, 232, -1584, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1034, 294, 968, 541, -1429, 154,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTNessAnimCeilingBonk_joint12[26] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -433, 197,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -9, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -9, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -216,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -433, -433,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTNessAnimCeilingBonk_joint13[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -170, -63, 267,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 143, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 268, 62, 0, 9, 0, -38,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, -21, 0, 89,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), 268,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -63, 267,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 1), -170,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTNessAnimCeilingBonk_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 893, -935, 681, 75, 68, 30,
	ftAnimBlock(0, 8),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTNessAnimCeilingBonk_joint16[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -32, 232, -360, 52, -700, -294,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1214, -108,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 526, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -308, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -107, 120,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -334, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1212, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 339, -230, -1105, 220,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -120, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -770, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -327, -6, -527, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -85, 44, -348, -16, -610, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, 53, -360, -12, -700, -89,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTNessAnimCeilingBonk_joint18[36] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 439, 218,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 731, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 707, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 726, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 501, -234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 257, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 352, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 439, 87,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTNessAnimCeilingBonk_joint19[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -88, 34, -36, -7, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -66, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -100, -172, 0, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -357, -157, 180, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -414, 70, 227, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -215, 163, 42, -115,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 59, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -16, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -15, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 30, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 17, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -12, 4, 34, 4, -7, -24,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTNessAnimCeilingBonk_joint21[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -476, 178, 112,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 126, -82, -12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -903, 254, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -476, 178, 112,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTNessAnimCeilingBonk_joint22[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -59, -246, 442, -75, -799, -304,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -555, -189, -1281, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 367, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 114, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -685, 68, 42, 74, -1176, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -109, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 193, -1202, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 440, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -845, 294,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 80, 62, -612, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 15, -70, -702, -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -59, -75, 442, 1, -799, -97,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTNessAnimCeilingBonk_joint24[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 614, 177,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 828, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 847, -91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 476, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 546, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 614, 67,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTNessAnimCeilingBonk_joint25[120] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1601, 42, -1504, -7, 1575, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1329, 260, -1553, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1595, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1772, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1037, 90, -1630, 0, 1803, -80,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1532, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1148, -52, 1612, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1572, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1142, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1543, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1519, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1509, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1601, -57, -1504, 5, 1575, 3,
	ftAnimEnd(),
	0x400E, 0xFEAD, 0xFF00, 0xFF2D, 0x48E0, 0xFF82, 0xFFAE, 0xFFF4, 0x200F, 0x0001, 0xFE0B, 0xFEF8, 0xFF17, 0x0001, 0xFF3B, 0x0008, 0x200F, 0x0001, 0xFD34, 0xFFBE, 0xFF02, 0xFFDF, 0xFF3E, 0xFFFE, 0x200F, 0x0001, 0xFD85, 0x0044, 0xFED3, 0xFFFD, 0xFF36, 0xFFF6, 0x200F, 0x0001, 0xFDBE, 0x003B, 0xFEFB, 0x0008, 0xFF2A, 0xFFFF, 0x380F, 0x0004, 0xFEAD, 0xFF00, 0xFF2D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
