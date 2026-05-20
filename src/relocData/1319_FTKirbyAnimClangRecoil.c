/* AnimJoint data for relocData file 1319 (FTKirbyAnimClangRecoil) */
/* 1168 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimClangRecoil_joint1[14];
extern u16 dFTKirbyAnimClangRecoil_joint2[48];
extern u16 dFTKirbyAnimClangRecoil_joint3[10];
extern u16 dFTKirbyAnimClangRecoil_joint5[36];
extern u16 dFTKirbyAnimClangRecoil_joint6[86];
extern u16 dFTKirbyAnimClangRecoil_joint7[16];
extern u16 dFTKirbyAnimClangRecoil_joint9[52];
extern u16 dFTKirbyAnimClangRecoil_joint10[82];
extern u16 dFTKirbyAnimClangRecoil_joint11[14];
extern u16 dFTKirbyAnimClangRecoil_joint13[8];
extern u16 dFTKirbyAnimClangRecoil_joint14[44];
extern u16 dFTKirbyAnimClangRecoil_joint16[14];
extern u16 dFTKirbyAnimClangRecoil_joint18[50];
extern u16 dFTKirbyAnimClangRecoil_joint19[24];
extern u16 dFTKirbyAnimClangRecoil_joint21[8];
extern u16 dFTKirbyAnimClangRecoil_joint22[34];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimClangRecoil_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimClangRecoil_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimClangRecoil_joint1[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 600, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimClangRecoil_joint2[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), -54, 38, -317, -3, 31, -18, -252, -87, -599, 165,
	ftAnimSetValBlock(FT_ANIM_TRAX), 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -323, 10,
	ftAnimSetValT(FT_ANIM_TRAX, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 7), 201, 35, -116, -11, -334, -5, -442, 274,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 9), 0, -26, 0, 10, -312, 13, 0, 410,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -268, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 3 */
u16 dFTKirbyAnimClangRecoil_joint3[10] = {
	ftAnimSetValBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTKirbyAnimClangRecoil_joint5[36] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -120, -120, -30,
	ftAnimSetValBlock(FT_ANIM_ROTY), -116,
	ftAnimSetValT(FT_ANIM_ROTY, 16), 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -60, 20, -60, 80, 0, 20,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 7), -90, 43, 0, 43,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 7), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimClangRecoil_joint6[86] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2518, 1, -981, -60, -2553, -3,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4095, 4095,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -2591, 31,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 2549, -6,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 12), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 8), -1443, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1370, 115,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -987, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2544, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2533, -74, -2394, 255,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2336, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2034, 310,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1631, 32,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4095,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1061, -96,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1296, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2356, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2385, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, 27, -1391, -94, -1608, 23,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimClangRecoil_joint7[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimClangRecoil_joint9[52] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY), 120, -60,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -6, 0, 35, 0, -9,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 5), 60, -137,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 7), -33, 181, -48,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 5), -60,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), -60, 68,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 2), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 5), 0, 53,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 5), 60,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY, 4), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimClangRecoil_joint10[82] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1014, -94, 957, -2, -1284, -169,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1167, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -2112, -6,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 12), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 811, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 857, 40,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 737, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1207, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1102, 84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2105, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1644, 48,
	ftAnimBlock(0, 4),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 4), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 770, 26, 1217, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 790, 16, 1329, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 804, 13, 1391, 61, -1608, 35,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimClangRecoil_joint11[14] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -6, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 6,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTKirbyAnimClangRecoil_joint13[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, 0, -1072,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTKirbyAnimClangRecoil_joint14[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 291, 6, -410, -12, -177, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -359, 21,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -3, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 109, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 142, 31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 200, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -338, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -319, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -23, -20, -302, 16, 237, 36,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimClangRecoil_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 15), 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -7,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimClangRecoil_joint18[50] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2155, -5, 1651, 51, -1315, -9,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 1978, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), -1981, 30, -1599, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1956, 20, -1627, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -1921, 3, -1690, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1938, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1817, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1918, 2, 1785, -32, -1704, -14,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimClangRecoil_joint19[24] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -94, 0, 244, 13, -3, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 7, 13, 302, 0, 209, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 21, 13, 302, 0, 233, 23,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimClangRecoil_joint21[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 7,
	ftAnimBlock(0, 16),
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimClangRecoil_joint22[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 244, 24, -3057, 0, 99, -31,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 313, -2, -3034, -6, -98, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, -3, -3040, -5, -99, -1,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
