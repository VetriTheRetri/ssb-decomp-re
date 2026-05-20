/* AnimJoint data for relocData file 1446 (FTPurinAnimJab1) */
/* 2432 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimJab1_joint1[32];
extern u16 dFTPurinAnimJab1_joint2[10];
extern u16 dFTPurinAnimJab1_joint3[96];
extern u16 dFTPurinAnimJab1_joint5[74];
extern u16 dFTPurinAnimJab1_joint6[164];
extern u16 dFTPurinAnimJab1_joint7[22];
extern u16 dFTPurinAnimJab1_joint9[74];
extern u16 dFTPurinAnimJab1_joint10[160];
extern u16 dFTPurinAnimJab1_joint11[16];
extern u16 dFTPurinAnimJab1_joint13[10];
extern u16 dFTPurinAnimJab1_joint14[96];
extern u16 dFTPurinAnimJab1_joint16[20];
extern u16 dFTPurinAnimJab1_joint18[112];
extern u16 dFTPurinAnimJab1_joint19[108];
extern u16 dFTPurinAnimJab1_joint21[46];
extern u16 dFTPurinAnimJab1_joint22[132];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimJab1_joints[] = {
	(AObjEvent32 *)dFTPurinAnimJab1_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimJab1_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimJab1_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimJab1_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimJab1_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimJab1_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimJab1_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimJab1_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimJab1_joint1[32] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), -240, -479,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), -240, 959,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 1), 240, 640,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 5), 240, -147,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTPurinAnimJab1_joint2[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -268, 0, 0, -312, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimJab1_joint3[96] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -178, -44, 714, 178,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 5), 312,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), -178, 89, 714, -201, 4096, 102, 4096, -409, 4096, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 1), 178, 12, -89, -51, 4300, 102, 3276, -409, 4300, 102,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 312, -63,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4300, -81, 3276, 327, 4300, -81,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, -102, 4096, 409, 4096, -102,
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 240,
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4096, 102, 4096, -409, 4096, 102,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 312, 4096, 4096, 4096,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTPurinAnimJab1_joint5[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, -48, -13, 1,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 89, 22, -178, -44, -194, -291, -19, -11, 84, 165,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 89, -111, -194, 122, -19, -71, 84, -461,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 3), -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -357, -6, -178, 12, -133, 112, -55, 0, -146, -247,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -110, 25, -20, 44, -101, 34,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -111, 54, -16, 13, -115, 104,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -55, -6, 3,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimJab1_joint6[164] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2413, 1051, -254, -255, 1, 1231,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -1362, 371, -509, -144, 1233, 794, 3072, -511,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3072, 1535,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1669, -204, -542, -30, 1589, 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1770, 153, -570, 16, 1679, -178,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1361, -78, -509, 40, 1233, 105,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1928, -253, 1890, 294,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -550, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_SCAX, 1), 6144,
	ftAnimSetValRateT(FT_ANIM_SCAX, 3), 3072, -1228,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1869, 42, 1821, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -1990, -149, 1949, 150,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -574, -25,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 2), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -578, 39,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2182, -185, 2144, 193,
	ftAnimSetValRateT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 2), 2484, 143, 3072, 255,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2361, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2469, -81, -529, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2518, 28,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -336, 62,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2622, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 3110, 106,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2467, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -2417, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -284, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, 15, 3191, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2413, 3, -252, 6, 3219, 28,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimJab1_joint7[22] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTPurinAnimJab1_joint9[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 60, 0, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 357, 89, 25, -70, -305, -611, -254, -532,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 357, -178, 25, 147, -305, 439, -254, 692,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -357, -25, 98, 180, -85, 443, 91, 745,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 13), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 115, 70, -83, 60, 117, 42,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 142, 144, -48, -48, 118, -104,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 187, -100, -107, 20, 65, -117,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 41, -27, 0,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimJab1_joint10[160] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 4096,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 808, -1296, 1351, -161, 1617, 972,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX, 1), -488, -623, 1190, 2, 2589, 490, 3072, -511,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 3), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -439, 21, 1357, 96, 2597, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -446, -24, 1382, -83, 2574, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -488, 199, 1190, -162, 2589, 236,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 988, -33,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -46, 216, 3047, 193,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -54, 14, 2977, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -17, 19, 991, 17, 3023, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1042, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -14, -6, 3058, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -30, -25, 3059, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 4, 1040, -6, 3022, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 420, 358, 940, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_SCAX, 2), 3207, 185, 3072, 255,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 6), 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3436, 361,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 859, 320, 887, 23, 3930, 603,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1061, 4, 988, 145, 4643, 424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 868, -122, 1179, 159, 4779, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 817, -31, 1308, 87, 4816, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, -12, 1353, 45, 4825, 9,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimJab1_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 17), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTPurinAnimJab1_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 18),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimJab1_joint14[96] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -23, 427, -302, -165, 237, -505,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 403, 266, -468, -79, -268, -302,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 509, 58, -462, 3, -368, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 520, -51, -460, -1, -377, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 407, -293, -465, 140, -272, 379,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -66, -235, -179, 160, 380, 342,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -64, 1, -144, 21, 412, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -34, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -179, -13, 384, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -191, -14, 372, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -298, -7, 239, -13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -24, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -21, 3, -302, -4, 233, -6,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimJab1_joint16[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 7, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTPurinAnimJab1_joint18[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -309, 781, -176, -748, -96, -560,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, 295, -924, -411, -656, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -85, -1000, -42, -390, 124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 300, 95, -1009, 37, -408, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -250, -924, 430, -659, 78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -200, -319, -149, 411, -251, 208,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, 19, -102, 19, -242, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -208, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -121, -9, -259, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -127, -7, -235, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -163, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -175, -2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -218, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -306, -6,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -137, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -105, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -309, -3, -176, -1, -99, 5,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimJab1_joint19[108] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 21, -245, 302, -81, 233, -468,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 160, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -224, -132, -235, -275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -243, -10, -318, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -246, 9, -336, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -224, 300, 221, 59, -235, 524,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 354, 301, 279, 22, 712, 489,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 379, 15, 266, -7, 744, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 231, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 312, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 715, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 681, -45,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 378, -81,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 168, -60,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 34, -20,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 302, -61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 305, -5, 256, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, -13, 302, -2, 233, -22,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimJab1_joint21[46] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, 506,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, 284,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 575, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 586, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 513, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -256,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 9), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTPurinAnimJab1_joint22[132] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 309, -29, 176, -69, -99, -109,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 257, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 107, -39, -209, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 98, -7, -199, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 93, 4, -207, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 280, -231, 107, -76, -209, 306,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -205, -270, -59, -92, 404, 324,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -259, -45, -77, -13, 440, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -341, 11, -59, 35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 412, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 408, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 267, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -313, 58, -5, 75,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 274, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -224, 126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -59, 168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 113, 138, 103, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 217, 82, 255, -30, -20, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 300, 15, 188, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -66, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -86, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 9, 176, -11, -99, -13,
	ftAnimEnd(),
	0x0000, 0x0000,
};
