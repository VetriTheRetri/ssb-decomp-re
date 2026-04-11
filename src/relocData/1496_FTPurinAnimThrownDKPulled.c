/* AnimJoint data for relocData file 1496 (FTPurinAnimThrownDKPulled) */
/* 1904 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimThrownDKPulled_joint2[106];
extern u16 dFTPurinAnimThrownDKPulled_joint3[10];
extern u16 dFTPurinAnimThrownDKPulled_joint4[22];
extern u16 dFTPurinAnimThrownDKPulled_joint6[14];
extern u16 dFTPurinAnimThrownDKPulled_joint7[104];
extern u16 dFTPurinAnimThrownDKPulled_joint8[14];
extern u16 dFTPurinAnimThrownDKPulled_joint10[14];
extern u16 dFTPurinAnimThrownDKPulled_joint11[112];
extern u16 dFTPurinAnimThrownDKPulled_joint12[14];
extern u16 dFTPurinAnimThrownDKPulled_joint14[10];
extern u16 dFTPurinAnimThrownDKPulled_joint15[104];
extern u16 dFTPurinAnimThrownDKPulled_joint17[16];
extern u16 dFTPurinAnimThrownDKPulled_joint19[124];
extern u16 dFTPurinAnimThrownDKPulled_joint20[102];
extern u16 dFTPurinAnimThrownDKPulled_joint22[140];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTPurinAnimThrownDKPulled_joints[] = {
	0x00000000, /* [0] NULL */
	(u32)dFTPurinAnimThrownDKPulled_joint2, /* [1] joint 2 */
	(u32)dFTPurinAnimThrownDKPulled_joint3, /* [2] joint 3 */
	(u32)dFTPurinAnimThrownDKPulled_joint4, /* [3] joint 4 */
	(u32)dFTPurinAnimThrownDKPulled_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPurinAnimThrownDKPulled_joint7, /* [6] joint 7 */
	(u32)dFTPurinAnimThrownDKPulled_joint8, /* [7] joint 8 */
	(u32)dFTPurinAnimThrownDKPulled_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTPurinAnimThrownDKPulled_joint11, /* [10] joint 11 */
	(u32)dFTPurinAnimThrownDKPulled_joint12, /* [11] joint 12 */
	(u32)dFTPurinAnimThrownDKPulled_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPurinAnimThrownDKPulled_joint15, /* [14] joint 15 */
	(u32)dFTPurinAnimThrownDKPulled_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPurinAnimThrownDKPulled_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTPurinAnimThrownDKPulled_joint20, /* [19] joint 20 */
	(u32)dFTPurinAnimThrownDKPulled_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF019E, /* [22] END */
};

/* Joint 2 */
u16 dFTPurinAnimThrownDKPulled_joint2[106] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -240, -480,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_TRAX, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 16, -240, -480,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, -180, 1068,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 2), -714, -480,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 0, 0, 0, 480,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY, 2), -714, -480,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAZ), 960,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 150, 1869, 300, -186,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 2), -1161,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -278,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -2144, -188, 0, 0, 720, 1226, -120, -1051,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2323, 232,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 780, 400, -240, -400,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 900, -934, -300, 519,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY, 3), -714, 423, 0, 0, 240, -1312,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 0, 0, 0, -300,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimThrownDKPulled_joint3[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPurinAnimThrownDKPulled_joint4[22] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -268,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 2), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimThrownDKPulled_joint6[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimThrownDKPulled_joint7[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 560, 1, -301, -3, 639, -8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -347, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 594, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 730, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -218, 76, 546, -125,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -219, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 614, 29, 479, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 603, -52, 467, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 548, -28, -228, -4, 631, 157,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -361, -167, 1201, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 557, -198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 235, -496,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -435, -519, -559, -121, 1337, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, -193, -605, 139, 1608, 145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -822, 0, -279, 281, 1629, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -804, 18, -42, 237, 1608, -21,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimThrownDKPulled_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimThrownDKPulled_joint10[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimThrownDKPulled_joint11[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1048, -1, 1307, -3, -968, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1258, 41,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 1014, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -977, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -875, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1386, 77, -1060, -126,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1405, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 993, -30, -1128, -94,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 1005, 52, -1139, 136,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1385, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1246, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1059, 27, -976, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -406, 108,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1051, 198,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1373, 498,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2048, 519, 1051, -123, -265, 203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 191, 1000, 140, 0, 143,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1332, 283, 21, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 1), 2431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -18, 1566, 234, 0, -21,
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTPurinAnimThrownDKPulled_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimThrownDKPulled_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimThrownDKPulled_joint15[104] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1447, 16, -1326, 7, -939, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1305, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1431, -76, -948, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1601, -116, -743, 190,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1485, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -566, 23,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 1), -697, -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 1), -1305,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -732, 114,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -1285, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1506, -43,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1660, 108,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -605, 80,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -571, -206,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1425, 67, -1017, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -1614, -52, -1107, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1631, -11, -1192, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1558, 73, -1510, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1485, 73, -1279, 5, -1612, -102,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTPurinAnimThrownDKPulled_joint17[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimThrownDKPulled_joint19[124] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -319, -36, -185, 12, -3043, 35,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -121, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -356, 71, -3008, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -175, 105, -3100, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -173, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 81, 112, -2872, 160,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 76, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2780, 75,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 2), -2634,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 110, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 167, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2721, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2589, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -137, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -68, -58,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 178, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -202, -38, 66, -45, -2679, -67,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -115, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -2716, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 88, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 142, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -222, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -290, -67, 145, 3, -2671, 45,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTPurinAnimThrownDKPulled_joint20[102] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -160, -16, 281, 7, 669, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 302, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -177, 76, 660, 97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -7, 114, 864, 188,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -125, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1037, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 302, 0, 907, -131,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 875, 112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 322, 12,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -102, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 54, -106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 998, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1041, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -180, -68, 594, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 6, 53, 501, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 24, 11, 420, -88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -50, -72, 97, -118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -123, -73, 328, 5, -4, -102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimThrownDKPulled_joint22[140] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimEnd(),
	0x0000, 0x280E, 0x013F, 0x0024, 0x00B9, 0xFFF4, 0x00AD, 0x0023, 0x4F00, 0x1000, 0x1000, 0x1000, 0x2805, 0x0002, 0x0079, 0xFF81, 0x200B, 0x0001, 0x0164, 0xFFB9, 0x00D0, 0xFFE4, 0x200B, 0x0001, 0x00AF, 0xFF97, 0x0074, 0x0042, 0x2803, 0x0005, 0x00AD, 0xFFF0, 0x200D, 0x0001, 0xFFAF, 0xFF90, 0x0154, 0x009E, 0x2805, 0x0002, 0xFFB4, 0xFFFD, 0x2009, 0x0001, 0x01B0, 0x004D, 0x2809, 0x0002, 0x0243, 0x0000, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF92, 0x0000, 0x2805, 0x0003, 0xFF59, 0xFFE5, 0x2009, 0x0001, 0x01EF, 0xFFE9, 0x2809, 0x0003, 0x0276, 0xFFE4, 0x2003, 0x0001, 0x0089, 0xFFD4, 0x2803, 0x0002, 0x0044, 0x003A, 0x0801, 0x0001, 0x2005, 0x0001, 0xFF4E, 0x0032, 0x200F, 0x0001, 0x00CA, 0x0026, 0xFFBE, 0x002D, 0x021D, 0xFFBC, 0x2803, 0x0002, 0x0073, 0xFFF5, 0x2809, 0x0006, 0x01F4, 0x0027, 0x2005, 0x0001, 0xFFA8, 0xFFE3, 0x2805, 0x0005, 0xFF72, 0xFFFA, 0x0801, 0x0001, 0x2003, 0x0001, 0x007A, 0x0005, 0x2003, 0x0003, 0x00DE, 0x0049, 0x200F, 0x0001, 0x0122, 0x0043, 0xFF6F, 0xFFFD, 0x0221, 0x002D, 0x0000,
};
