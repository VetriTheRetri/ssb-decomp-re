/* AnimJoint data for relocData file 1523 (FTCaptainAnimJumpB) */
/* 3520 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimJumpB_joint1[24];
extern u16 dFTCaptainAnimJumpB_joint2[40];
extern u16 dFTCaptainAnimJumpB_joint3[56];
extern u16 dFTCaptainAnimJumpB_joint5[60];
extern u16 dFTCaptainAnimJumpB_joint6[228];
extern u16 dFTCaptainAnimJumpB_joint7[88];
extern u16 dFTCaptainAnimJumpB_joint8[68];
extern u16 dFTCaptainAnimJumpB_joint9[44];
extern u16 dFTCaptainAnimJumpB_joint11[52];
extern u16 dFTCaptainAnimJumpB_joint12[234];
extern u16 dFTCaptainAnimJumpB_joint13[100];
extern u16 dFTCaptainAnimJumpB_joint14[74];
extern u16 dFTCaptainAnimJumpB_joint15[16];
extern u16 dFTCaptainAnimJumpB_joint17[12];
extern u16 dFTCaptainAnimJumpB_joint18[118];
extern u16 dFTCaptainAnimJumpB_joint20[78];
extern u16 dFTCaptainAnimJumpB_joint22[110];
extern u16 dFTCaptainAnimJumpB_joint23[116];
extern u16 dFTCaptainAnimJumpB_joint25[72];
extern u16 dFTCaptainAnimJumpB_joint26[118];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTCaptainAnimJumpB_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint9, /* [8] joint 9 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint11, /* [9] joint 11 */
	NULL, /* [10] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint15, /* [14] joint 15 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint17, /* [15] joint 17 */
	NULL, /* [16] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint18, /* [17] joint 18 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint22, /* [20] joint 22 */
	NULL, /* [21] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint23, /* [22] joint 23 */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint25, /* [23] joint 25 */
	NULL, /* [24] NULL */
	(AObjEvent32 *)dFTCaptainAnimJumpB_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTCaptainAnimJumpB_joint1[24] = {
	ftAnimSetValRate(FT_ANIM_ROTY), 0, 72,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 250, 84,
	ftAnimSetValBlockT(FT_ANIM_ROTY, 25), 250,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 12), 0, -25,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimJumpB_joint2[40] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0Rate(FT_ANIM_TRAY), 1600,
	ftAnimSetValRate(FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 24), 6, 1,
	ftAnimSetValT(FT_ANIM_TRAX, 40), -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 13), 947, -1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 11), 965, 29,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 992, 128, 7, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 12), 1223, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 12), 7,
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTCaptainAnimJumpB_joint3[56] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, -76, 9,
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, -17, 107, 0,
	ftAnimSetValBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 0, -44,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -221, -57,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 3), 0,
	ftAnimSetValT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 21), -1, 1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), -1767, -105,
	ftAnimBlock(0, 14),
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -1, 0, 1, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -2976, -112,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), 95, 49,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimJumpB_joint5[60] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 189, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -31, 47,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -103, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), -103,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -70, 7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 155, 0,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 2, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 81, 0, 4, 0,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), 242,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 0, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), -13,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 11), -182, -12,
	ftAnimEnd(),
	0x0000,
};

/* Joint 6 */
u16 dFTCaptainAnimJumpB_joint6[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1368, 79, -1614, 68, 1084, -129,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1336, -63, -1570, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 954, -207,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 670, -276,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1417, -45, -1619, -13, 402, -132,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1494, -11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1014, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 404, 2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 553, 102,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1495, 16,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1421, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 662, 101,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 755, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1403, -357, 845, 455,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2135, -532, -881, -25, 1667, 609,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2467, -121, -1065, -129, 2063, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2377, 102, -1139, -53, 2045, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1208, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2263, 153, 2038, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2071, 290, 2013, -109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1682, 297, 1818, -98,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1394, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1816, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1246, 9, 1815, 67,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1164, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1501, -67, 1952, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1541, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1879, -116,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1626, -122,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1603, -22, -1248, -84,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1538, 44, -1427, -97,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1474, -158,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 876, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1498, 111, -1529, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -1190, 63, -1405, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1188, -3, -1371, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1230, -11,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -1285, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 864, -8,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 836, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1244, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), -1417, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1289, -3, -1433, -15, 836, 0,
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTCaptainAnimJumpB_joint7[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -797, -102,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -947, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -888, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -903, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -851, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -832, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -678, 159,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -333, 253,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, -192,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -390, -321,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, -187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -894, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -972, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -817, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -805, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -885, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -966, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -971, -5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 8 */
u16 dFTCaptainAnimJumpB_joint8[68] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2435, -89, -388,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3124, 360, 83, 90, -14, 224,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 3124, 83, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 3011, 0, -84, 0, -97, -31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 3282, 0, 106, 0, -333, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 3206, -30, 92, -5, -146, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 2949, -89, 63, -6, -195, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 2579, -24, 59, -6, 77, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 2611, -82, -524,
	ftAnimEnd(),
	0x0000,
};

/* Joint 9 */
u16 dFTCaptainAnimJumpB_joint9[44] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 220, 36, 3, 0, -1, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 220, 3, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 22), 113, -7, -1, 0, -4, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 10,
	ftAnimSetVal0RateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 12), -153, 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 6, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 11), -38,
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimJumpB_joint11[52] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 0,
	ftAnimSetValBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 15, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, 0,
	ftAnimSetValT(FT_ANIM_ROTZ, 12), 0,
	ftAnimSetValT(FT_ANIM_ROTY, 21), 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX, 3), 15,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), -194, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTZ), 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -55, 36, 6, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 174, 0, 1, 0, -2, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimJumpB_joint12[234] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1737, 340, 1464, -55, -1016, -433,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 1404, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1397, -58, -1450, -662,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1855, -228, -2341, -689,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1854, 3, 1555, 70, -2828, -242,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1473, -51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1847, 12, -2826, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2665, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1815, -57,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1413, -73,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 1088, -114,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2557, 96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2472, 76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1873, -287, 978, -171, -2404, -163,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 557, -125,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2389, -230, -2799, -129,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2333, -33, -2664, 44,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2597, -179, -2744, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 492, -45,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 408, -49,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2816, -311, -2802, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3219, -307, -3008, -105,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3431, -147, -3013, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3515, 16, 368, 22, -3014, 70,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 504, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3397, 83, -2872, 42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -3334, 35, -3097, -140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3277, 18, 425, -85, -3211, -141,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3851, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3341, -36, 228, -111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3370, -116, 112, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), -3708, -61, 252, 33,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3957, -36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3335, 88,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3697, 20, 265, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 366, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -3511, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -3493, 40, -3256, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), -3143, 54, -2602, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 358, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 234, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -3114, 28, 218, -16, -2577, 25,
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTCaptainAnimJumpB_joint13[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1024, -187,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1212, 120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -784, 156,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -898, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -902, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), -851, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -806, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -798, 98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -646, 158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -297, 237,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -5, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -400, -332,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -665, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -976, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -983, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -884, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -908, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -736, 90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -647, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -573, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -479, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -410, 69,
	ftAnimEnd(),
	0x0000,
};

/* Joint 14 */
u16 dFTCaptainAnimJumpB_joint14[74] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 270, 275, 62,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), 45, -113, -8, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 54, 57,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 45, 54, -8,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), 690, 0, -122, 0, -4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 46, 0, 67, 19, -203, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 8), 344, 0, 101, 0, -29, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 273, 0, 110, -7, -54, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 779, 0, -37, 0, 33, 10,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), 122, 156, 82,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTCaptainAnimJumpB_joint15[16] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 38,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 40), 1538, -1003, 119, 85, 49, 39,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTCaptainAnimJumpB_joint17[12] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTZ), 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY), 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 40), 255, 0,
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTCaptainAnimJumpB_joint18[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -52, 70, -13, -472, 28,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -74, -5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), 0, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -309, 238,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 31, 172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 35, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -64, 9, 38, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 27), 6, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -216, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, 3, -207, -23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 22), 62, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -649, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -713, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -821, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -959, -120,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -939, 109,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -820, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -604, 14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 9, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -55, -30,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 71, 8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 81, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -633, -49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -91, -36, 71, -10, -693, -59,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTCaptainAnimJumpB_joint20[78] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 445, 36,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 468, -179,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 122, -176,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 116, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 158, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 20, -76,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 5), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 539, 225,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 737, 162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 783, -170,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 556, -203,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 309, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 299, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 297, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 330, 32,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimJumpB_joint22[110] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1735, 35, -1566, 5, -1528, 91,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -1481, 5,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1562, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1219, 215,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1006, 106,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1005, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1490, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -1608, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1005, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -1241, -34,
	ftAnimBlock(0, 13),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1613, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1472, 46,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1277, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1672, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1442, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1700, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1667, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), -1277, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1569, -9,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1738, -6,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1670, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1511, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1501, 10, -1741, -3, -1268, 9,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTCaptainAnimJumpB_joint23[116] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1448, -20, 1498, 21, 1531, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 1605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1557, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1545, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1645, 50,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1626, -33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1604, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), 1459, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1559, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -1608, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1579, -50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1409, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1347, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 801, -24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 789, -74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 489, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 482, 17,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 689, 14,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1626, -19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1777, -13,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 701, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 717, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1446, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1438, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1785, -7, 1435, -2, 717, 0,
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTCaptainAnimJumpB_joint25[72] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 541, -37,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 390, -195,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 113, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 111, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 110, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 132, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 4, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 4, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 279, 263,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 526, 222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1003, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1125, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1129, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 26 */
u16 dFTCaptainAnimJumpB_joint26[118] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 161, -86, 365, 2, -279, 139,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 270, -151,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -107, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -140, 275,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 271, 373,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 65, -102, 606, 167,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 64, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -94, 4, 605, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), -63, 9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 19), 370, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 64, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 57, 3,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -49, 18,
	ftAnimSetValRateT(FT_ANIM_ROTX, 9), -17, -25,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 335, -65,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -60, -19,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -60, -57,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -183, 13,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -58, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 38, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -164, 17, 63, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 9), 70, 24, 162, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 84, 14, 164, 2, 40, 2,
	ftAnimEnd(),
};
