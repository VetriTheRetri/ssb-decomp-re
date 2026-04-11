/* AnimJoint data for relocData file 774 (FTFoxAnimEnterPipe) */
/* 2368 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimEnterPipe_joint1[28];
extern u16 dFTFoxAnimEnterPipe_joint2[52];
extern u16 dFTFoxAnimEnterPipe_joint4[38];
extern u16 dFTFoxAnimEnterPipe_joint5[138];
extern u16 dFTFoxAnimEnterPipe_joint6[56];
extern u16 dFTFoxAnimEnterPipe_joint7[38];
extern u16 dFTFoxAnimEnterPipe_joint8[44];
extern u16 dFTFoxAnimEnterPipe_joint10[10];
extern u16 dFTFoxAnimEnterPipe_joint11[120];
extern u16 dFTFoxAnimEnterPipe_joint12[48];
extern u16 dFTFoxAnimEnterPipe_joint13[36];
extern u16 dFTFoxAnimEnterPipe_joint15[10];
extern u16 dFTFoxAnimEnterPipe_joint16[86];
extern u16 dFTFoxAnimEnterPipe_joint18[40];
extern u16 dFTFoxAnimEnterPipe_joint20[106];
extern u16 dFTFoxAnimEnterPipe_joint21[76];
extern u16 dFTFoxAnimEnterPipe_joint23[24];
extern u16 dFTFoxAnimEnterPipe_joint24[98];
extern u16 dFTFoxAnimEnterPipe_joint25[84];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTFoxAnimEnterPipe_joints[] = {
	(u32)dFTFoxAnimEnterPipe_joint1, /* [0] joint 1 */
	(u32)dFTFoxAnimEnterPipe_joint2, /* [1] joint 2 */
	(u32)dFTFoxAnimEnterPipe_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTFoxAnimEnterPipe_joint5, /* [4] joint 5 */
	(u32)dFTFoxAnimEnterPipe_joint6, /* [5] joint 6 */
	(u32)dFTFoxAnimEnterPipe_joint7, /* [6] joint 7 */
	(u32)dFTFoxAnimEnterPipe_joint8, /* [7] joint 8 */
	(u32)dFTFoxAnimEnterPipe_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTFoxAnimEnterPipe_joint11, /* [10] joint 11 */
	(u32)dFTFoxAnimEnterPipe_joint12, /* [11] joint 12 */
	(u32)dFTFoxAnimEnterPipe_joint13, /* [12] joint 13 */
	(u32)dFTFoxAnimEnterPipe_joint15, /* [13] joint 15 */
	0x00000000, /* [14] NULL */
	(u32)dFTFoxAnimEnterPipe_joint16, /* [15] joint 16 */
	(u32)dFTFoxAnimEnterPipe_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTFoxAnimEnterPipe_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTFoxAnimEnterPipe_joint21, /* [20] joint 21 */
	(u32)dFTFoxAnimEnterPipe_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTFoxAnimEnterPipe_joint24, /* [23] joint 24 */
	(u32)dFTFoxAnimEnterPipe_joint25, /* [24] joint 25 */
	0xFFFF023C, /* [25] END */
};

/* Joint 1 */
u16 dFTFoxAnimEnterPipe_joint1[28] = {
	ftAnimSetVal0RateBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 48, 912, -20,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 6), 960,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 4), 0, 0,
	ftAnimSetValT(FT_ANIM_TRAY, 26), -1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), -60, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 24), -60, 120,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTFoxAnimEnterPipe_joint2[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY), -141, -338, -3, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAY, 2), 0, 23, 300, 80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -178, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 300, -80,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -178, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -446, -16, -44, -2,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 2), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 24), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -446, -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -446, -44,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTFoxAnimEnterPipe_joint4[38] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, 156, 81,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -89, -66,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -89, 7,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -44, 2, 89, 5,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 14), -44, 89,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -44, 89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTFoxAnimEnterPipe_joint5[138] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAY), 4096, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1718, -219, -1442, 9, 1867, 335,
	ftAnimSetValAfterBlock(FT_ANIM_SCAZ), 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 5120,
	ftAnimSetValRateT(FT_ANIM_SCAY, 8), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1938, 45, -1433, 185, 2203, -277,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1626, 255, -1072, 174, 1312, -567,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1429, -8, 1115, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1084, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1111, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1407, -250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1443, 37, 1247, 118,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1133, 126, 1448, -21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1702, -239,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1917, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1100, 11, 1309, -89,
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 8), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), 1312, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 23), -1100, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 5120,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1892, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1885, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_SCAY, 16), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1311, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), 1309, 0,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1885, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1100, 0, -1885, 0, 1309, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTFoxAnimEnterPipe_joint6[56] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -558, -601,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1160, -224,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1061, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1079, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -610, 241,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -425, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -622, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -617, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -612, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -612, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTFoxAnimEnterPipe_joint7[38] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 269, 0, 0, 4096, 4096,
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 3276,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 331, 42, -177,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 20, 2, -11,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 331, 42, -177,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 331, 42, -177,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTFoxAnimEnterPipe_joint8[44] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -113, 136, -72,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 336, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -44, 11, 178, 7, 44, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -44, 44, 178, 44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 4), 44,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 26), 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 223, 16, 446, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 223, 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 223, 446,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTFoxAnimEnterPipe_joint10[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 62, -18,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimEnterPipe_joint11[120] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1741, 38, 1336, -37, 1945, -26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1530, 70,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 8), 5120,
	ftAnimSetValRateT(FT_ANIM_SCAZ, 8), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1779, -173, 1918, -386,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1394, -208, 1171, -404,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1363, -43, 1109, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1307, -69, 1139, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1133, -49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1010, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1601, 131,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1956, 90,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1103, -4,
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 8), 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 23), 1102, 0,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 5120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1973, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1958, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1010, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 1035, 0,
	ftAnimBlock(0, 5),
	ftAnimSetVal0RateT(FT_ANIM_SCAZ, 16), 4096,
	ftAnimBlock(0, 14),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1958, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1035, 0, 1959, 0, 1102, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTFoxAnimEnterPipe_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -436,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1031, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -635, 199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -720, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -769, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -424, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -398, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -456, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -456, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -456, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTFoxAnimEnterPipe_joint13[36] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 0, 0, 0, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY | FT_ANIM_SCAZ), 272, 0, 0, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 595, 37, -181, -11, 272, 17,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 8), 3276,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 24), 3276,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 595, -181, 272,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 595, -181, 272,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTFoxAnimEnterPipe_joint15[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 32),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimEnterPipe_joint16[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1202, -118, -1385, -143, -1635, 36,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1548, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 964, 6, -1697, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 974, 8, -1688, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1099, 121,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1532, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1548, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1428, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1222, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1227, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1431, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), -1424, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1526, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), -1550, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 17), 1223, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1223, 0, -1424, 0, -1550, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimEnterPipe_joint18[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 354, -354,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -174,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 5, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 194, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 186, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 22), 193, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 193, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTFoxAnimEnterPipe_joint20[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 46, 173, 125, 121, -56, 403,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 639, 159,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 205, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 219, 231,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 509, 157,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 527, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 664, -12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 504, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 481, -192, 218, -1, 648, -172,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -64, -190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 118, -289, 202, -123,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -114, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -28, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -59, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -60, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -63, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -67, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 19), -97, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -97, 0, -28, 0, -63, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimEnterPipe_joint21[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 355, 49, 137, -120, 134, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -4, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), 388, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 88, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 95, 6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 197, -1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 39, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 195, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 20), 199, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 388, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 390, 0,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 37, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 390, 0, 39, 1, 197, -1,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimEnterPipe_joint23[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 332, -326,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, -166,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 5, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 24 */
u16 dFTFoxAnimEnterPipe_joint24[98] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 16, -72, -102, 0, -226, 368,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -160, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -173, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 400, 143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 427, 22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 444, -10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -127, 39,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -16, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 425, -133,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -100, -137,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 115, 66, -219, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -97, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 22), -97, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 117, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 115, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -219, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 115, 0, -219, 0, -100, -3,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimEnterPipe_joint25[84] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 219,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -125, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 0, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -714, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -268, 178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 357, 134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 268, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -446, -67,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), -536,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -446, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), 0,
	ftAnimEnd(),
	0x0000, 0x4002, 0xFF4E, 0x480C, 0xFF86, 0x0000, 0x2003, 0x0002, 0x0218, 0xFFC5, 0x2003, 0x0004, 0xFDE8, 0xFF6C, 0x2003, 0x0002, 0xFE9B, 0x00C9, 0x2003, 0x0002, 0x010C, 0x00DF, 0x2003, 0x0002, 0x0218, 0x001D, 0x2003, 0x0004, 0x01BE, 0xFFDD, 0x2003, 0x0006, 0x00B2, 0xFFD9, 0x2003, 0x000A, 0xFF4E, 0xFFED, 0x0000, 0x0000, 0x0000,
};
