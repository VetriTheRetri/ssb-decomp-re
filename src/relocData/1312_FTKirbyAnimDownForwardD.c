/* AnimJoint data for relocData file 1312 (FTKirbyAnimDownForwardD) */
/* 2224 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimDownForwardD_joint1[18];
extern u16 dFTKirbyAnimDownForwardD_joint2[108];
extern u16 dFTKirbyAnimDownForwardD_joint3[22];
extern u16 dFTKirbyAnimDownForwardD_joint4[20];
extern u16 dFTKirbyAnimDownForwardD_joint6[42];
extern u16 dFTKirbyAnimDownForwardD_joint7[178];
extern u16 dFTKirbyAnimDownForwardD_joint8[16];
extern u16 dFTKirbyAnimDownForwardD_joint10[50];
extern u16 dFTKirbyAnimDownForwardD_joint11[176];
extern u16 dFTKirbyAnimDownForwardD_joint12[14];
extern u16 dFTKirbyAnimDownForwardD_joint14[76];
extern u16 dFTKirbyAnimDownForwardD_joint15[60];
extern u16 dFTKirbyAnimDownForwardD_joint17[14];
extern u16 dFTKirbyAnimDownForwardD_joint19[96];
extern u16 dFTKirbyAnimDownForwardD_joint20[68];
extern u16 dFTKirbyAnimDownForwardD_joint22[108];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTKirbyAnimDownForwardD_joints[] = {
	(u32)dFTKirbyAnimDownForwardD_joint1, /* [0] joint 1 */
	(u32)dFTKirbyAnimDownForwardD_joint2, /* [1] joint 2 */
	(u32)dFTKirbyAnimDownForwardD_joint3, /* [2] joint 3 */
	(u32)dFTKirbyAnimDownForwardD_joint4, /* [3] joint 4 */
	(u32)dFTKirbyAnimDownForwardD_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTKirbyAnimDownForwardD_joint7, /* [6] joint 7 */
	(u32)dFTKirbyAnimDownForwardD_joint8, /* [7] joint 8 */
	(u32)dFTKirbyAnimDownForwardD_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTKirbyAnimDownForwardD_joint11, /* [10] joint 11 */
	(u32)dFTKirbyAnimDownForwardD_joint12, /* [11] joint 12 */
	(u32)dFTKirbyAnimDownForwardD_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTKirbyAnimDownForwardD_joint15, /* [14] joint 15 */
	(u32)dFTKirbyAnimDownForwardD_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTKirbyAnimDownForwardD_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTKirbyAnimDownForwardD_joint20, /* [19] joint 20 */
	(u32)dFTKirbyAnimDownForwardD_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	0xFFFF01FD, /* [22] END */
};

/* Joint 1 */
u16 dFTKirbyAnimDownForwardD_joint1[18] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 6), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 23), 4745, 843,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 7), 4800, -182,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimDownForwardD_joint2[108] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 576,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 773, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 6), 773, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 579, 15,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 613, 143,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 24), 6433,
	ftAnimSetValRateBlockT(FT_ANIM_TRAZ, 3), 14, 101,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 6), 124, -118,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 667, -252,
	ftAnimSetValRateT(FT_ANIM_TRAY, 4), 512, -224,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 3), -31, -154,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 508, 228,
	ftAnimSetValRateT(FT_ANIM_TRAY, 6), 659, -288,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 91, 52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 2), 582, 25,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 4), 9, -15,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 3), 681, 471,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 648, -543,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAZ, 7), 0, -2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 6), 6433,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), 590, -22,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 5), 600, 100,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimDownForwardD_joint3[22] = {
	ftAnimSetVal(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetValAfter(FT_ANIM_TRAX), 0,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 36), 0, 0, -312, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 30), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), -268,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTKirbyAnimDownForwardD_joint4[20] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 26), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 6), 223,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 0, -69,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTKirbyAnimDownForwardD_joint6[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -180, -60, -120,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 77, -162, -63,
	ftAnimSetValT(FT_ANIM_ROTY, 30), -142,
	ftAnimSetValT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 36), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -120, -120, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 30), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 22), -120, -120,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), -60, 119, -60, 119,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 6), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimDownForwardD_joint7[178] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2185, -55, -586, 21, 1757, 59,
	ftAnimSetValBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -2447, 48, 1994, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -438, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -457, -68,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -794, 2,
	ftAnimSetValT(FT_ANIM_SCAX, 24), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2388, -272, 1937, 269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2992, -214, 2532, 190,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2816, 140, -673, 58, 2319, -160,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -2171, 161, -690, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1883, -167,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1721, -138,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1410, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -2030, 133, -672, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1537, 94,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -651, -31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1367, -97,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1109, -96,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1467, 58,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1020, 249,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -684, -29, 1022, -140,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 119, -127,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -251, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -770, 208,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -269, 286,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 28, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -23, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 106, 384,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 692, 134,
	ftAnimBlock(0, 1),
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4095,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 768, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 802, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 1, -220, 31, 0, 23,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTKirbyAnimDownForwardD_joint8[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimDownForwardD_joint10[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 120, -120, 90,
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 28, 157, -44,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 8), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 28), 120, -120,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 200, 23, 31,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 24), -142, -5,
	ftAnimSetValT(FT_ANIM_ROTX, 30), 0,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 28), 0,
	ftAnimBlock(0, 20),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 2), 60, -119, -60, 119,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 6), 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimDownForwardD_joint11[176] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 643, 32, 1454, -19, 285, 11,
	ftAnimSetValBlock(FT_ANIM_SCAX), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), 890, 16, 1143, -112, 379, 8,
	ftAnimSetValBlockT(FT_ANIM_SCAX, 6), 3072,
	ftAnimSetValT(FT_ANIM_SCAX, 24), 3072,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 915, 105, 1027, -83, 395, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1235, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1074, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 483, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1290, 50,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1200, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1051, -21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 945, 22,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 946, -281, 284, -213,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 108, -155,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -362, -100,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 973, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 948, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, -71,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -590, -85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -463, -135,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1016, -75,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 982, 38,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 1355, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -667, -77, -1080, -53,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1351, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -878, -320,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1387, -562,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2003, -386,
	ftAnimSetValT(FT_ANIM_SCAX, 6), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2161, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2385, -30,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1433, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1560, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, -27, 1391, 35, -1608, -47,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTKirbyAnimDownForwardD_joint12[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, 3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimDownForwardD_joint14[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 45, 0, 5, -1072, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 157, 35,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), 62, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -1003, 29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -834, -56,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -38, -40,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1030, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -961, -45,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), 0, 50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -222, -117,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1415, 66,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -993, -93,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1072, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -804, 78,
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTKirbyAnimDownForwardD_joint15[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 25, 9, -202, -23, 128, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 32), -353, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 17), 298, 0, -158, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 290, -9, -149, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 12), 109, -28, 37, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 68, -45, 93, 64,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -16, -5, 223, 9,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -337, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -313, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -7, -302, 11, 237, 13,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTKirbyAnimDownForwardD_joint17[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 35), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 19 */
u16 dFTKirbyAnimDownForwardD_joint19[96] = {
	ftAnimSetValAfter(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1684, -10, 1494, 19, -751, -9,
	ftAnimSetValBlock(FT_ANIM_SCAX), 4095,
	ftAnimSetValT(FT_ANIM_SCAX, 17), 3072,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1994, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), -1046, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 12), -2140, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2212, -65,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2091, 60,
	ftAnimBlock(0, 4),
	ftAnimSetValT(FT_ANIM_SCAX, 19), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 2011, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 1629, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1101, -63,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1649, -36,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2031, 52,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -1905, -12,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1684, -40,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1728, 22,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1663, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 1744, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, -12, 1785, 40, -1704, 24,
	ftAnimEnd(),
	0x0000,
};

/* Joint 20 */
u16 dFTKirbyAnimDownForwardD_joint20[68] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -497, 3, 293, 8, -428, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 21), -194, 39, -96, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 17), 467, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 448, -24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 197, 31,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -158, 33, -71, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 39, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 155, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 296, 92,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 269, -27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 229, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 284, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 23, -15, 302, 17, 237, -31,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimDownForwardD_joint22[108] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000, 0x5600, 0x0FFF, 0x0FFF, 0x280E, 0xFB75, 0x0006, 0x06E7, 0xFFF3, 0xFD82, 0xFFFA, 0x1100, 0x1000, 0x2803, 0x0011, 0xFCBC, 0x0003, 0x2805, 0x0013, 0x04AB, 0xFFEC, 0x2809, 0x0016, 0xFB9F, 0xFFCC, 0x1101, 0x0011, 0x0C00, 0x1901, 0x0013, 0x1000, 0x2003, 0x0001, 0xFCB8, 0xFFED, 0x2803, 0x000A, 0xFAB0, 0x0015, 0x0801, 0x0001, 0x2005, 0x0001, 0x0499, 0xFFF2, 0x2805, 0x000A, 0x049C, 0x0002, 0x0801, 0x0002, 0x2009, 0x0001, 0xFB6B, 0xFFCE, 0x2809, 0x0006, 0xFA36, 0xFF80, 0x0801, 0x0005, 0x2003, 0x0001, 0xFAC9, 0x0007, 0x2803, 0x0006, 0xFAE9, 0x0002, 0x2009, 0x0001, 0xF99C, 0xFF96, 0x2809, 0x0005, 0xF954, 0x0001, 0x2005, 0x0001, 0x04A7, 0x0018, 0x2005, 0x0004, 0x056D, 0x002E, 0x200F, 0x0001, 0xFAEC, 0x0003, 0x0597, 0x0029, 0xF954, 0x0000, 0x0000, 0x0000,
};
