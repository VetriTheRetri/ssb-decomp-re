/* AnimJoint data for relocData file 1283 (FTKirbyAnimTeeter) */
/* 1520 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimTeeter_joint1[36];
extern u16 dFTKirbyAnimTeeter_joint2[12];
extern u16 dFTKirbyAnimTeeter_joint3[34];
extern u16 dFTKirbyAnimTeeter_joint5[42];
extern u16 dFTKirbyAnimTeeter_joint6[94];
extern u16 dFTKirbyAnimTeeter_joint7[16];
extern u16 dFTKirbyAnimTeeter_joint9[50];
extern u16 dFTKirbyAnimTeeter_joint10[122];
extern u16 dFTKirbyAnimTeeter_joint11[16];
extern u16 dFTKirbyAnimTeeter_joint13[12];
extern u16 dFTKirbyAnimTeeter_joint14[80];
extern u16 dFTKirbyAnimTeeter_joint16[14];
extern u16 dFTKirbyAnimTeeter_joint18[60];
extern u16 dFTKirbyAnimTeeter_joint19[62];
extern u16 dFTKirbyAnimTeeter_joint21[16];
extern u16 dFTKirbyAnimTeeter_joint22[50];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimTeeter_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimTeeter_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimTeeter_joint1[36] = {
	ftAnimSetValRate(FT_ANIM_TRAY | FT_ANIM_TRAZ), 600, 150, 600, 90,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 660, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 660,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 360, -150, 600, -90,
	ftAnimSetValRateT(FT_ANIM_TRAY, 8), 360, 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 8), 480,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), 600, 150, 600, 90,
	ftAnimLoop(0x6800, -68),
	ftAnimEnd(),
};

/* Joint 2 */
u16 dFTKirbyAnimTeeter_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, -312, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimTeeter_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValRate(FT_ANIM_ROTX), 268, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 312, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 16), 536, 18, 178, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 8), 714, -16, 178, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 268, -7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 5 */
u16 dFTKirbyAnimTeeter_joint5[42] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), -60, -180,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 1, 268, -3,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 89, 1, -178, -14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 16), -180, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 16), -60, -180,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 44, -5, -89, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, 1, 268, -3,
	ftAnimLoop(0x6800, -82),
};

/* Joint 6 */
u16 dFTKirbyAnimTeeter_joint6[94] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2369, -22, -1056, -3, -76, -5,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -393, 9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1205, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -2412, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2363, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1809, 32,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -280, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1787, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -1973, -29,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1227, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1144, 47,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2007, -41, -275, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 5), -2322, -58, -97, 34,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1100, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1069, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2369, -46, -1059, 9, -75, 21,
	ftAnimLoop(0x6800, -184),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTKirbyAnimTeeter_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), 0, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -30),
};

/* Joint 9 */
u16 dFTKirbyAnimTeeter_joint9[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAY | FT_ANIM_TRAZ), -180, 0,
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -11, -268, -16,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_TRAX | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 60, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 0, 16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -60, -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -268,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 268, 11, -268, 16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 178, -16,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 16), -180, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 8), -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 0, -11, -268, -16,
	ftAnimLoop(0x6800, -98),
};

/* Joint 10 */
u16 dFTKirbyAnimTeeter_joint10[122] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 761, 17, 548, -25, 1532, 32,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3072, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 789, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 511, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 1580, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1634, 77,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2347, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 882, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 1342, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 570, 45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 527, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2332, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2222, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1303, -48,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1316, 65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 535, 37, 2293, 61,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 747, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2344, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1380, -599, 2308, -709,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 117, -619, 925, -706,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 140, 75, 715, -17, 895, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 706, 104, 597, -60, 1460, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 761, 55, 548, -48, 1532, 72,
	ftAnimLoop(0x6800, -240),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTKirbyAnimTeeter_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 31), -6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimTeeter_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 32),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimTeeter_joint14[80] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 36, 5, -199, 8, 657, -30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -121, -40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -167, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 972, 115,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1088, 104,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 1361, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -157, -31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -40, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -163, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -211, 13,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1342, -29,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 708, -65,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 24, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 35, 10, -200, 11, 661, -46,
	ftAnimLoop(0x6800, -156),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimTeeter_joint16[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimLoop(0x6800, -26),
};

/* Joint 18 */
u16 dFTKirbyAnimTeeter_joint18[60] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1761, 4, 1629, 5, -957, 0,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 27), -1695, -33, 1500, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1003, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1015, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -960, 12,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1727, -27, 1525, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), -1764, 0, 1616, 18,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -957, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1761, 2, 1629, 12, -954, 3,
	ftAnimLoop(0x6800, -116),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimTeeter_joint19[62] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -75, 0, 181, -4, 534, -11,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 22), 64, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 189, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 761, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 802, 37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 712, -63,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 63, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -72, -5,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 647, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 559, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -75, -2, 181, -7, 534, -24,
	ftAnimLoop(0x6800, -120),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimTeeter_joint21[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 7, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 31), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 7, 0,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTKirbyAnimTeeter_joint22[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1764, 0, -1623, 0, -928, 24,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 31), 1764, 0, -1624, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -1216, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1256, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1278, 87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1183, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -964, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1764, 0, -1623, 0, -928, 35,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
	0x0000, 0x0000,
};
