/* AnimJoint data for relocData file 1392 (FTKirbyAnimLandingAirF) */
/* 2016 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTKirbyAnimLandingAirF_joint1[50];
extern u16 dFTKirbyAnimLandingAirF_joint2[18];
extern u16 dFTKirbyAnimLandingAirF_joint3[34];
extern u16 dFTKirbyAnimLandingAirF_joint5[40];
extern u16 dFTKirbyAnimLandingAirF_joint6[122];
extern u16 dFTKirbyAnimLandingAirF_joint7[14];
extern u16 dFTKirbyAnimLandingAirF_joint9[40];
extern u16 dFTKirbyAnimLandingAirF_joint10[132];
extern u16 dFTKirbyAnimLandingAirF_joint11[16];
extern u16 dFTKirbyAnimLandingAirF_joint13[10];
extern u16 dFTKirbyAnimLandingAirF_joint14[112];
extern u16 dFTKirbyAnimLandingAirF_joint16[14];
extern u16 dFTKirbyAnimLandingAirF_joint18[112];
extern u16 dFTKirbyAnimLandingAirF_joint19[120];
extern u16 dFTKirbyAnimLandingAirF_joint21[14];
extern u16 dFTKirbyAnimLandingAirF_joint22[116];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTKirbyAnimLandingAirF_joints[] = {
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTKirbyAnimLandingAirF_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTKirbyAnimLandingAirF_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), -804, 600, 4096, 4096, 4096,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 0, 53,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 270, 4915, 2048, 4915,
	ftAnimSetValRateT(FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 5), 600, 112, 4096, -81, 4096, 163, 4096, -81,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 5), -268,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 480, 4300, 3276, 4300,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 10), 0, 600, 4096, 4096, 4096,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTKirbyAnimLandingAirF_joint2[18] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -6433,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -312, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -6433,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -6702,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 10), -6702,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTKirbyAnimLandingAirF_joint3[34] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_TRAZ), 268, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 312, 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -357, -26,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 5), 0, 41, 0, 128,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), 268, 240,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_TRAZ, 10), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 5 */
u16 dFTKirbyAnimLandingAirF_joint5[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 178, -120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), -120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), 178, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), 178, -11, -120, 64,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), -120, 48, 0, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTKirbyAnimLandingAirF_joint6[122] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -326, -22, -501, 15, 972, 22,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1401, 37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -554, -29,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -463, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -679, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -868, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -839, 69,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -804, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1421, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 2011, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -593, -39,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -379, 5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1003, -179,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1527, -132,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2023, 1,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 13), 3093, 73,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1673, -139, -377, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -2429, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -221, 7,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3158, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2417, 8, 3201, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2412, 5, -217, 3, 3216, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTKirbyAnimLandingAirF_joint7[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTKirbyAnimLandingAirF_joint9[40] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -178, 120, -120,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 10), 120,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -178, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAY, 5), -178, 11, -120, 64,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 120, -48, 0, 48,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 10), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY, 10), 0, 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 10 */
u16 dFTKirbyAnimLandingAirF_joint10[132] = {
	ftAnimSetVal0Rate(FT_ANIM_SCAX), 3072,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 322, 26, 503, -17, 967, 26,
	ftAnimSetValAfterBlock(FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1416, 50,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 618, 23,
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 20), 3072,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 466, 165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 679, 169,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 871, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 848, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 804, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1450, 48,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1875, 10,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 629, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 373, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 925, 125,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1478, 152,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1878, 16,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 2472, 104,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 385, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 224, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1647, 159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2402, 45,
	ftAnimBlock(0, 2),
	ftAnimSetVal0RateT(FT_ANIM_SCAX, 10), 4096,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 2584, 112,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 3201, 29,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2432, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 2417, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2412, -5, 220, -3, 3216, 15,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTKirbyAnimLandingAirF_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -6,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTKirbyAnimLandingAirF_joint13[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -804, 0, -1072, 204, -120, 0,
	ftAnimBlock(0, 30),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTKirbyAnimLandingAirF_joint14[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -804, -680, -1371, 0, -1608, -70,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2181, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1307, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1484, -403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1612, -53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1625, -39,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2238, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1620, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1669, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1662, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1507, 119,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1452, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1297, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 19), -1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1588, 19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1428, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1463, -18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1654, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1390, 28,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1371, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1651, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 6), -1632, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 1), -1632, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1305, -1371,
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTKirbyAnimLandingAirF_joint16[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 29), 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTKirbyAnimLandingAirF_joint18[112] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 808, 692, -1608, -48, -853, 30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -805, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1671, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1501, 424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1658, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1720, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1695, -43, -839, -85,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1238, -51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1267, -28,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1691, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1489, 8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1250, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -1706, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1286, 17,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 1290, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1479, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1432, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1292, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 1298, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1703, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -1704, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1298, 0, -1431, 0, -1704, 0,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTKirbyAnimLandingAirF_joint19[120] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2412, 680, 1371, 0, -1608, -70,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2181, -105,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 1253, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1732, 403,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1604, 53,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -1591, 42,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2238, 8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1620, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1540, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), -1538, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1699, -127,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -1771, 26,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1576, 34,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -1410, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1226, -15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1305, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1733, 42,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), -1584, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1386, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1375, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1305, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1305, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1586, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1587, 0, 1305, 0, -1375, 0,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTKirbyAnimLandingAirF_joint21[14] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 29), 7,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 7,
	ftAnimEnd(),
	0x0000,
};

/* Joint 22 */
u16 dFTKirbyAnimLandingAirF_joint22[116] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 800, -692, 0, -48, 755, 30,
	ftAnimSetValAfterBlock(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 4096, 4096, 4096,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 802, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -70, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 107, -424,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -111, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, 33, 773, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 370, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 354, 12,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -105, 17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 180, 7,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 357, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -98, 1,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 366, 26,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 342, -23,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 179, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), 176, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 323, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 309, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -99, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 309, 0, 176, 0, -99, 0,
	ftAnimEnd(),
	0x0000, 0x0000,
};
