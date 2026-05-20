/* AnimJoint data for relocData file 1537 (FTCaptainAnimDamaged2) */
/* 2896 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimDamaged2_joint1[46];
extern u16 dFTCaptainAnimDamaged2_joint2[80];
extern u16 dFTCaptainAnimDamaged2_joint4[124];
extern u16 dFTCaptainAnimDamaged2_joint5[102];
extern u16 dFTCaptainAnimDamaged2_joint6[48];
extern u16 dFTCaptainAnimDamaged2_joint7[56];
extern u16 dFTCaptainAnimDamaged2_joint8[10];
extern u16 dFTCaptainAnimDamaged2_joint10[72];
extern u16 dFTCaptainAnimDamaged2_joint11[126];
extern u16 dFTCaptainAnimDamaged2_joint12[48];
extern u16 dFTCaptainAnimDamaged2_joint13[54];
extern u16 dFTCaptainAnimDamaged2_joint14[10];
extern u16 dFTCaptainAnimDamaged2_joint16[28];
extern u16 dFTCaptainAnimDamaged2_joint17[126];
extern u16 dFTCaptainAnimDamaged2_joint19[58];
extern u16 dFTCaptainAnimDamaged2_joint21[130];
extern u16 dFTCaptainAnimDamaged2_joint22[126];
extern u16 dFTCaptainAnimDamaged2_joint24[32];
extern u16 dFTCaptainAnimDamaged2_joint25[122];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimDamaged2_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimDamaged2_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimDamaged2_joint1[46] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAZ), 0,
	ftAnimSetValRate(FT_ANIM_TRAY), 1600, 110,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 1501, -363, -198, -1552,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1464, -582,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), 1388, -807,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1359, -564,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 1257, -637,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1257, -637,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 1389, 191,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 1600, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimDamaged2_joint2[80] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 107, 0, 4, -76, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -118, -410, -67, 0, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 0, 0, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 4, -76, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -236, -88, -26, 368, -6, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -168, 1, 296, 30, -206, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -225, 3, 296, -10, -206, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -128, 56, 152, -45, -133, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 98, 91, 33, -41, 78, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 221, -17, -6, 12, -44, -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 107, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 4 */
u16 dFTCaptainAnimDamaged2_joint4[124] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 189, 0, 0, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 422, -29, -182, -10, -185, -11, -18, 178, -67, 150, 89, -406,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 67, 136, 24, 71, -104, -143,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 130, -319, -20, 229, -23, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -188, -23, 258, 40, -214, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -76, 32, 326, -13, -240, 34, 144, -33, 17, 19, -81, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 149, 50, 114, -66, 149, 63, 22, -269, 50, -38, -19, 207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 212, 1, -54, -23, 123, -45, -48, 6, -10, -94, 67, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 155, 1, 1, 14, -71, -31, 26, 144, -6, -30, 12, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 219, 5, 0, 0, 2, 12, 20, -36, -25, -35, 85, 49,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 189, 0, 0, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimDamaged2_joint5[102] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, 152, -1614, 345, 1084, 157,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1479, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1216, 45, -1268, 188,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1277, -48, -1236, 19,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1208, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1362, 27,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1498, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1421, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1218, -37, 1393, 29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1382, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1495, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1422, -81,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1096, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1378, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1608, -11,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1333, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1377, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1032, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1219, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1173, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1368, 8, -1614, -6, 1084, -88,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimDamaged2_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -53,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -579, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -519, 62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -319, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -255, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -453, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -468, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -668, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -644, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -760, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -797, -36,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimDamaged2_joint7[56] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -515, -2, -333, 420, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -18, 33, 0, 0, 0, 22,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 424, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -18, 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 23), 420, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 163, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -15, -177, 0, 0, 0, -86,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -515, -2, -333,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimDamaged2_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 360, -108,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimDamaged2_joint10[72] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAY | FT_ANIM_TRAZ), 120, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 0, -127, 0, 41, 0, -29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX, 1), 0,
	ftAnimSetVal0RateT(FT_ANIM_TRAX, 23), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, -94, 83, 159, -59, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -360, -8, 612, 66, -379, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 659, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -327, 38,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 84, 24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -302, -68,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 8), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 0, 18,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, 0,
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTCaptainAnimDamaged2_joint11[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1479, 127, 1464, 104, 2200, -764,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1606, 55, 1568, -4, 1435, -335,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1589, 23, 1454, -93, 1530, 154,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1366, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 1444, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1744, 114,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1759, 11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 1551, -52,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1367, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 1265, -104,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1374, -195, 1490, -173,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1052, -415, 1110, -64, 1203, -372,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1178, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 544, -282, 745, -254,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 486, 59, 694, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 662, 394, 1135, 1, 837, 363,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1276, 423, 1182, 127, 1421, 517,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1510, 112, 1389, 136, 1871, 360,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1501, -15, 1454, 37, 2142, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1479, -22, 1464, 9, 2200, 58,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimDamaged2_joint12[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, 251,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -772, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -906, -151,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1099, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1121, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -1198, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1145, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -935, -69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1078, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1107, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1024, 83,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimDamaged2_joint13[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 388, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, -5, 275, -35, 62, 58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 258, -7, 203, -14, 178, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 196, -6, 140, -11, 209, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 165, 40, 44, 1, 417, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 547, 13, 151, 30, 391, -46,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 270, 275, 62,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimDamaged2_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimDamaged2_joint16[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -148, -70,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -201, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 29, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimDamaged2_joint17[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -339, 70, -386, -472, 72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -256, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -148, -211, -316, -145,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -232, -83, -221, 148,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -244, 23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 112, -320, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -324, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 3, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -24, -21,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -214, 29,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -93, -47,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -371, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -550, 15,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -30, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, 40,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -489, -25,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -847, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -152, 39, 29, -19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 169, 77, -33, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 140, -36, -29, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 40, 47, -28, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -745, 116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -613, 136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 191, 150, 70, 99, -472, 140,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimDamaged2_joint19[58] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 138,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 498, -289,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -247,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 302, 93,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 307, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 260, -147,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 776, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 641, -165,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 445, -195,
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTCaptainAnimDamaged2_joint21[130] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -126, 129, -42, -14, 80, -121,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 198, 331, 117, 414,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -56, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 259, 213,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 308, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 666, 233, 786, 346,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 665, -7, 809, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 652, -16, 820, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 641, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 143, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 284, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), 298, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 298, -13, 517, -67,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 496, 53,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 27, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 103, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 196, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 598, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 51, -159,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 56, -159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -122, -87,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -119, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -43, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 73, 39, -101, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 105, -57, -22, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -126, -83, -42, -147, 80, 102,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimDamaged2_joint22[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 160, -517, 110, -232, -76, -221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -356, -207, -122, -92, -298, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -254, 139, -74, -12, -37, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -131, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -77, 101, -266, -132,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -51, 22, -303, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -299, 25,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), 99, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), -15, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -19, 14, -275, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -647, -179,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 178, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 105, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -45, -126,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -176, -6, -838, -78,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 77, 88,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -445, 247,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 172, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 152, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 118, 49,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 203, -8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -168, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -94, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 160, -43, 110, -42, -76, 17,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimDamaged2_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, 108,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 848, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 862, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 828, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 631, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 541, -89,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimDamaged2_joint25[122] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -153, 365, -98, -279, 63,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -142, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -67, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 266, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 392, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -35, 77, 237, -54,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 182, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 284, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 456, 17,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -25, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -88, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 471, -4, -140, -32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -138, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), 222, 21,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, -28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 124, -71,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -68, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -365, -58,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -8, -105,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 138, 38,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 247, 27, -403, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 278, 59, -348, 61,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 161, 22, 365, 87, -279, 68,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
