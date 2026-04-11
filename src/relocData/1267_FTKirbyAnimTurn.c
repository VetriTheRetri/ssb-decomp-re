/* AnimJoint data for relocData file 1267 (FTKirbyAnimTurn) */
/* 1328 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTurn_joint1[20];
extern u16 dFTKirbyAnimTurn_joint2[12];
extern u16 dFTKirbyAnimTurn_joint3[34];
extern u16 dFTKirbyAnimTurn_joint5[34];
extern u16 dFTKirbyAnimTurn_joint6[70];
extern u16 dFTKirbyAnimTurn_joint7[14];
extern u16 dFTKirbyAnimTurn_joint9[34];
extern u16 dFTKirbyAnimTurn_joint10[70];
extern u16 dFTKirbyAnimTurn_joint11[16];
extern u16 dFTKirbyAnimTurn_joint13[10];
extern u16 dFTKirbyAnimTurn_joint14[58];
extern u16 dFTKirbyAnimTurn_joint16[14];
extern u16 dFTKirbyAnimTurn_joint18[80];
extern u16 dFTKirbyAnimTurn_joint19[62];
extern u16 dFTKirbyAnimTurn_joint21[92];

/* Joint pointer table (22 entries, 88 bytes) */
u32 dFTKirbyAnimTurn_joints[] = {
	(u32)dFTKirbyAnimTurn_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimTurn_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimTurn_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimTurn_joint5, /* [3] joint 5 */
	0x00000000, /* [4] NULL */
	(u32)dFTKirbyAnimTurn_joint6, /* [5] joint 6 */
	(u32)dFTKirbyAnimTurn_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimTurn_joint9, /* [7] joint 9 */
	0x00000000, /* [8] NULL */
	(u32)dFTKirbyAnimTurn_joint10, /* [9] joint 10 */
	(u32)dFTKirbyAnimTurn_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimTurn_joint13, /* [11] joint 13 */
	0x00000000, /* [12] NULL */
	(u32)dFTKirbyAnimTurn_joint14, /* [13] joint 14 */
	(u32)dFTKirbyAnimTurn_joint16, /* [14] joint 16 */
	0x00000000, /* [15] NULL */
	(u32)dFTKirbyAnimTurn_joint18, /* [16] joint 18 */
	0x00000000, /* [17] NULL */
	(u32)dFTKirbyAnimTurn_joint19, /* [18] joint 19 */
	(u32)dFTKirbyAnimTurn_joint21, /* [19] joint 21 */
	0x00000000, /* [20] NULL */
	0xFFFF0125, /* [21] END */
};

/* Joint 1 */
u16 dFTKirbyAnimTurn_joint1[20] = {
	ftAnimSetValRate(FT_ANIM_TRAY), 600, 1280,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 6), 600, -1280,
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimTurn_joint2[12] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 12), -1876,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimTurn_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -178, -14, -268, -29, 178, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -134, 29, -268, 44, 134, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimTurn_joint5[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 178, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 178, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), -120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimTurn_joint6[70] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 804,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), -217, -264, 0, 0, 4096, -1365,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 11), 804,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -481, -389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -996, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1065, -2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1067, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1065, 33,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 4096, 1365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -999, 291,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -481, 389,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 0, -220, 261, 0, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTurn_joint7[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimTurn_joint9[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -178, -19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 120, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -178, 19,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 120, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimTurn_joint10[70] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX), 804, 0, 1391, -267, 1608, 0, 4096, -1365,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 11), 804, 0, 1608, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, -391,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 608, -289,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 538, -2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 538, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 543, 34,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 4096, 1365,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 608, 289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1123, 389,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1387, 264, 1608, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 804,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimTurn_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimTurn_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 12),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimTurn_joint14[58] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 8, -302, 0, 237, -14,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 205, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -65, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -320, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -301, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -313, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 304, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 270, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -109, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -43, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, 19, -302, 10, 237, -32,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimTurn_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimTurn_joint18[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1918, -53, 1785, -48, -1704, 180,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1961, 52, 1588, -121,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1524, 279,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1146, 283,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1268, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1867, 28, 1494, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1926, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1928, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1874, 3, -1519, -173,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1997, 43, -1657, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1852, -106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1655, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1946, 39, 1739, 65, -1691, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 27, 1785, 45, -1704, -13,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimTurn_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, 22, 302, 8, 233, 37,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 43, -29,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 6), 302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 327, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 270, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 327, -47,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 81, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 311, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 311, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 43, -29, 270, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -19, 302, -9, 237, -33,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimTurn_joint21[92] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x280E, 0xFAEE, 0x000D, 0xF907, 0x0005, 0xF954, 0xFFEA, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0005, 0xF8F3, 0xFFFB, 0x2809, 0x0007, 0xF9E1, 0x0087, 0x2003, 0x0004, 0xFB1A, 0xFFDA, 0x2003, 0x0001, 0xFAED, 0xFFEB, 0x2803, 0x0003, 0xFB5F, 0x005D, 0x2005, 0x0001, 0xF907, 0x004A, 0x2805, 0x0003, 0xFA78, 0xFFFC, 0x0801, 0x0001, 0x2009, 0x0001, 0xFA67, 0x0065, 0x2809, 0x0003, 0xF9C0, 0xFF7F, 0x2003, 0x0001, 0xFBDD, 0xFFFF, 0x2007, 0x0001, 0xFB5D, 0xFFA0, 0xFA20, 0xFF7B, 0x2007, 0x0001, 0xFB1C, 0xFFC9, 0xF96D, 0xFF74, 0x200F, 0x0001, 0xFAEE, 0xFFD2, 0xF907, 0xFF9B, 0xF958, 0xFF98, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
