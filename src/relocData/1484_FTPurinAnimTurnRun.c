/* AnimJoint data for relocData file 1484 (FTPurinAnimTurnRun) */
/* 2736 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimTurnRun_joint1[32];
extern u16 dFTPurinAnimTurnRun_joint2[90];
extern u16 dFTPurinAnimTurnRun_joint3[52];
extern u16 dFTPurinAnimTurnRun_joint4[102];
extern u16 dFTPurinAnimTurnRun_joint6[70];
extern u16 dFTPurinAnimTurnRun_joint7[120];
extern u16 dFTPurinAnimTurnRun_joint8[14];
extern u16 dFTPurinAnimTurnRun_joint10[86];
extern u16 dFTPurinAnimTurnRun_joint11[146];
extern u16 dFTPurinAnimTurnRun_joint12[38];
extern u16 dFTPurinAnimTurnRun_joint14[52];
extern u16 dFTPurinAnimTurnRun_joint15[114];
extern u16 dFTPurinAnimTurnRun_joint17[40];
extern u16 dFTPurinAnimTurnRun_joint19[112];
extern u16 dFTPurinAnimTurnRun_joint20[88];
extern u16 dFTPurinAnimTurnRun_joint22[40];
extern u16 dFTPurinAnimTurnRun_joint23[126];

/* Joint pointer table (23 entries, 92 bytes) */
AObjEvent32 * dFTPurinAnimTurnRun_joints[] = {
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint4, /* [3] joint 4 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint6, /* [4] joint 6 */
	NULL, /* [5] NULL */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint14, /* [12] joint 14 */
	NULL, /* [13] NULL */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint20, /* [19] joint 20 */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTPurinAnimTurnRun_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTPurinAnimTurnRun_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1200, 1599,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 1200,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 1200,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 1200, -320,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 960, -1142,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 600, -2559,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 2), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimTurnRun_joint2[90] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY), 303, 62, -47, 18, 1035, 381, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 3), 0, 0, 0, -1, 0, 0, 0, 0, 600, -773, 0, 0, 4096, 1,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 456, -3, 3072, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 0, 0, 540, 134, 3686, 341,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_SCAY, 3), 268, 134, 4096, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), 600,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 0, 0, 804, 154, 0, 0, 0, 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAY, 3), 600, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAY, 3), 303, 1670, -47, -18, 1035, -381, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTPurinAnimTurnRun_joint3[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -12, -636, 15,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -312, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 0, 46, 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 268, 52,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 9), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 6), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 312,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 268, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 89, -46, 0, -106, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -12, -636, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTPurinAnimTurnRun_joint4[102] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 312, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3889, 52, 4236, -49, 3889, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 0, 14, 0, 44, 312, 144, 0, 159, 4096, 68, 4096, -46, 4096, 68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 3), 89, 29, 268, 74, 420, 64,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 120, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 446, 29, 360, -79, 0, -159,
	ftAnimSetVal0RateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 6), 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 178,
	ftAnimSetValRateT(FT_ANIM_TRAY, 3), 360, -64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 6), 89, -19, 536, -49,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 3), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 312, -64, 4096, -68, 4096, 46, 4096, -68,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 3889, 52, 4236, -49, 3889, 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY, 3), 0, 0, 312,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTPurinAnimTurnRun_joint6[70] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -157, -440, 92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -89, 0, -134, -36, 178, 0, -281, -328, -763, 2, 54, -26,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -266, 0, -247, -89, -422, -79, -309, 721, 67, 82,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -89, 0, 0, 0, -357, 0, -433, -44, -94, 0, 230, 168,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -496, 1, -251, -270, 266, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -157, -440, 92,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTPurinAnimTurnRun_joint7[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1590, 942, -1592, -56, 1174, 8,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1511, 204,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1126, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -648, 367,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -855, -125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -792, 56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1239, 191,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1384, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 841, -202,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 845, 157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -774, -602,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1996, -991,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2756, -469, 1036, 147,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1064, -133,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2673, 88,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1358, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1455, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 872, -129,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 1089, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2648, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2625, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1630, -114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2641, 463, -1684, -17, 1008, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1698, 943, -1665, 19, 1090, 81,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTPurinAnimTurnRun_joint8[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 17), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTPurinAnimTurnRun_joint10[86] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 247, -547, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -89, -2, -134, 0, -178, 0, 79, 0, -696, -8, 466, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 15, 42, -143, 12, 153, 136, -577, 248, 117, -282,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), -93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), -89, 3, 178, 0, -89, 9, 181, 24, -476, -12, 68, 4,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 200, 104, -587, -15, 120, 262,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), -589, 11,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 385, -1, 265, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 2), 258, -215, 260, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 247, -547, 197,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTPurinAnimTurnRun_joint11[146] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1749, 229, 1757, 0, 1210, -44,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1764, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 1048, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1978, -381,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 985, -778,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 421, -344, 1693, -230,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 297, 442, 1304, -287, 893, 288,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1307, 629, 1118, -39, 1626, 418,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1556, 136, 1224, 19, 1731, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1740, 321, 2134, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1157, -93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 919, -230,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2222, 46, 2571, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1832, -149, 577, -326, 2116, -124,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 92, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1923, 2, 2322, 145,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 2564, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1837, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1902, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 2008, 78, 83, -18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -52, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2059, 252, 2641, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 2611, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2513, 599,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3257, 401,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3316, 58, -70, -18, 2724, 112,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTPurinAnimTurnRun_joint12[38] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -6, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -474, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -322, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 157,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimTurnRun_joint14[52] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, -637, -1530, 106, -21, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, -82, 0, 70, -1072, 50,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 204, -120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -804, 38,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 15), 106, -21, 16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, -1072,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -461, 0, -1072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -804, 67, 0, -106, -1072, -76,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -58, -637, -1530,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTPurinAnimTurnRun_joint15[114] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 523, -346, -260, 34, -461, 392,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -101, -146,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -84, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -69, 544,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 627, 392,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 567, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -116, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -200, -215, 4, 103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 194, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -546, -306, 325, -196,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 153, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -813, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -833, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -685, 11,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 160, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 275, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -670, 68, 211, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -197, 387, 8, -234,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 292, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 225, 368, -286, -82, -60, -407,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 539, 313, -157, 129, -522, -461,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTPurinAnimTurnRun_joint17[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1033, -156,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 877, -513,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -434,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 507, 519,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1047, 539,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTPurinAnimTurnRun_joint19[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2288, 230, 1556, 167, -1785, -168,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1874, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1723, 110, -1954, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1776, 119, -1669, 181,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1980, -77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1608, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1876, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1873, -126,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1806, -169,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1731, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2047, -107, -1617, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1654, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), -2071, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2078, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1924, 147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1762, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 1901, -47,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1687, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1754, -88, -1526, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2100, -265, 1803, -159, -1669, -123,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2286, -185, 1582, -220, -1772, -103,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTPurinAnimTurnRun_joint20[88] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 121, 179, -15, -448, -105,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 376, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -294, 224, -553, 99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 33, 200, -248, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 16, -40, -360, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -9, -15, 399, 14, -392, -21,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 27, 23, 334, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -398, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 47, 73, 355, 22, -321, 201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 173, -142, 380, -97, 12, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -237, -328, 160, -88, -515, -240,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -482, -245, 204, 44, -468, 46,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPurinAnimTurnRun_joint22[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, 33,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 722, -344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 7, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 467,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 942, 333,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 666, -275,
	ftAnimEnd(),
	0x0000,
};

/* Joint 23 */
u16 dFTPurinAnimTurnRun_joint23[126] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1752, -52, -1605, -153, 2089, 66,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1805, 220, -1758, 215, 2155, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1312, 255, -1175, 348, 1741, -254,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1096, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1294, 78, 1645, -133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1156, 88, 1474, -122,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1112, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1344, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1198, -86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1300, 19,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1111, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1064, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1353, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1332, -100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1273, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1079, -157,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -907, 130, 1165, -126,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1097, -595,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1078, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1385, -404, 1355, 197,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1994, -312, -1887, -103, 1474, 376,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1721, 273, -1592, 294, 2109, 634,
	ftAnimEnd(),
	0x0000, 0x0000,
};
