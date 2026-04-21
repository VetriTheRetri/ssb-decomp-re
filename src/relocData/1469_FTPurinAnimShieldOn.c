/* AnimJoint data for relocData file 1469 (FTPurinAnimShieldOn) */
/* 1072 bytes: 96-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimShieldOn_joint1[8];
extern u16 dFTPurinAnimShieldOn_joint2[20];
extern u16 dFTPurinAnimShieldOn_joint3[18];
extern u16 dFTPurinAnimShieldOn_joint4[22];
extern u16 dFTPurinAnimShieldOn_joint6[38];
extern u16 dFTPurinAnimShieldOn_joint7[44];
extern u16 dFTPurinAnimShieldOn_joint8[18];
extern u16 dFTPurinAnimShieldOn_joint10[28];
extern u16 dFTPurinAnimShieldOn_joint11[50];
extern u16 dFTPurinAnimShieldOn_joint12[22];
extern u16 dFTPurinAnimShieldOn_joint14[24];
extern u16 dFTPurinAnimShieldOn_joint15[38];
extern u16 dFTPurinAnimShieldOn_joint17[14];
extern u16 dFTPurinAnimShieldOn_joint19[34];
extern u16 dFTPurinAnimShieldOn_joint20[38];
extern u16 dFTPurinAnimShieldOn_joint22[16];
extern u16 dFTPurinAnimShieldOn_joint23[44];
extern u16 dFTPurinAnimShieldOn_joint24[12];

/* Joint pointer table (24 entries, 96 bytes) */
u32 dFTPurinAnimShieldOn_joints[] = {
	(u32)dFTPurinAnimShieldOn_joint1, /* [0] joint 1 */
	(u32)dFTPurinAnimShieldOn_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimShieldOn_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimShieldOn_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimShieldOn_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimShieldOn_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimShieldOn_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimShieldOn_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimShieldOn_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimShieldOn_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimShieldOn_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimShieldOn_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimShieldOn_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimShieldOn_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimShieldOn_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimShieldOn_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPurinAnimShieldOn_joint23, /* [22] joint 23 */
	(u32)dFTPurinAnimShieldOn_joint24, /* [23] joint 24 */
};

/* Joint 1 */
u16 dFTPurinAnimShieldOn_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimShieldOn_joint2[20] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 590, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 600, 0,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimShieldOn_joint3[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValRate(FT_ANIM_ROTX), -46, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), 0,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimShieldOn_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 67,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 268, 62,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 4), -446,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimShieldOn_joint6[38] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -160, 0, -76, -1, 99, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 2), 0, 596,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, -74, 89, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -281, 51,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -244, 321,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 39, 51,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimShieldOn_joint7[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1996, 179, -1243, 19, -1655, -373,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1260, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2176, 269, -2029, -502,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2536, 235, -2661, -470,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2648, 3, -1340, -45, -2970, -215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2544, -103, -1351, -10, -3091, -121,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimShieldOn_joint8[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, -221,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimShieldOn_joint10[28] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 151, 0, -96, 0, 120, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -178, 0, 178, 67,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 95, -455, 242,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimShieldOn_joint11[50] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2235, 93, 1241, -5, -1671, 28,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_SCAX, 4), 4096, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2142, 368, 1236, -99, -1642, 234,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1498, 732, 1041, -551, -1201, 392,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -677, 405, 133, -561, -857, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -686, -9, -81, -214, -995, -138,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPurinAnimShieldOn_joint12[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -370,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -747,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 373,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTPurinAnimShieldOn_joint14[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY), -271, 67,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -501, -1055, 106, -21, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), -804, 0, 0, 62, -1062, -1, 130, 41, -81, 0, -79, 0,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimShieldOn_joint15[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -36, 23, -308, -10, 259, -76,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 113, 34, -314, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 182, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1, -177,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -171, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 124, 10, -302, 12, -237, -65,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimShieldOn_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimShieldOn_joint19[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1937, -6, 1758, -10, -1689, 43,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1941, 14, 1681, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1524, 132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1380, 107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1924, 16, 1659, -21, -1310, 69,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimShieldOn_joint20[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 63, 308, -21, 259, 20,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 193, -32, 384, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 100, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 387, 343,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 787, 256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 899, 112, 177, -16, 402, 18,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimShieldOn_joint22[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPurinAnimShieldOn_joint23[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1279, 18, -1758, -43, 1527, 46,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1826, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1260, 26, 1574, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1226, -67, 1819, 191,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1395, -119, -1696, 83, 1957, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1465, -70, -1660, 35, 1977, 20,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTPurinAnimShieldOn_joint24[12] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 600, 0,
	ftAnimBlock(0, 4),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
