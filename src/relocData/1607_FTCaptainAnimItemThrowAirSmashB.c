/* AnimJoint data for relocData file 1607 (FTCaptainAnimItemThrowAirSmashB) */
/* 2064 bytes: 100-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTCaptainAnimItemThrowAirSmashB_joint1[8];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint2[42];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint4[54];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint5[108];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint6[48];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint7[26];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint8[42];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint10[8];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint11[124];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint12[40];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint13[44];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint14[10];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint16[36];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint17[76];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint19[32];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint21[82];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint22[80];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint24[32];
extern u16 dFTCaptainAnimItemThrowAirSmashB_joint25[90];

/* Joint pointer table (25 entries, 100 bytes) */
AObjEvent32 * dFTCaptainAnimItemThrowAirSmashB_joints[] = {
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint8, /* [7] joint 8 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint10, /* [8] joint 10 */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint12, /* [11] joint 12 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint13, /* [12] joint 13 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint17, /* [16] joint 17 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint19, /* [17] joint 19 */
	NULL, /* [18] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint22, /* [21] joint 22 */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint24, /* [22] joint 24 */
	NULL, /* [23] NULL */
	(AObjEvent32 *)dFTCaptainAnimItemThrowAirSmashB_joint25, /* [24] joint 25 */
};

/* Joint 1 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -55, 1225, -1,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint2[42] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), 240, 95, 49, 4, -76,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 9,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 5), 4, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 0, -27, -344, -1, 0, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 76, 12, 89, 21, 0, 2,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY, 19), 4, -76,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 240, 95, 49,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint4[54] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 242, -182, -12, 0, -31, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 0, -16, -160, 82, -209, 8, -22, -40, 0, 54, -32, 13,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), -30, 8, 8, -12, 57, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 158, 211, 229, 327, 29, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 423, 4, 494, -21, 446, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 18), 242, -182, -12, 0, -31, 47,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint5[108] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1882, -54, -1487, 225, 1001, 22,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1238, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1828, -245, 1024, 328,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1392, -203, 1658, 363,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1752, 50,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1421, 44, -1383, -106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1467, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1481, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1526, -44, 1853, 109,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), 1857, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1392, -66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 1423, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 1445, 27, -1447, 22,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1865, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1485, -3,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1767, -103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 1090, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1051, -33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), 1007, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1875, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1881, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1882, 1, -1487, -1, 1001, -5,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint6[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -1109, -149,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1193, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1021, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -956, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -985, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1042, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -1255, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1220, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1115, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1109, 5,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint7[26] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 191, -97, -323,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -741, -1, 0, 15, 0, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 180, 46, -2, -4, -9, -16,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 191, -97, -323,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint8[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -153, 113, -38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 32, 24, 418, -52, -6, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -32, -56, -149, -522, -37, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -81, -21, -626, 13, 13, 5,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 18), 113,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -251, -3, 21, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 9), -153, -38,
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint10[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
	0x0000,
};

/* Joint 11 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint11[124] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 133, 144, 249, -81, 628, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 591, 358, 2, -83, 668, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 995, 374, 2, 135, 554, -59,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 462, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1341, 530, 550, 431,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2056, 589, 1416, 700,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2520, 262, 494, 71, 1951, 304,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 696, -65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2581, 99, 2026, 112,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2719, 317, 2177, 331,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3216, 507, 2689, 522,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3733, 327, 3222, 344,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3871, 93, 613, -87, 3378, 113,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 3583, -102, 205, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 3732, 85,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 3819, 71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 3850, -8,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 3491, -79, 234, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 3358, -15, 250, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3350, -7, 249, 0, 3845, -4,
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -631, -76,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -957, 110,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -729, 395,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -166, 189,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -349, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -710, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -669, 34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -641, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -631, 10,
	ftAnimEnd(),
	0x0000,
};

/* Joint 13 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint13[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX), -5, 56,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), 167, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 45, 80, 161, -1, 225, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 394, 0, 161, 0, 228, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 42, -258, 162, 0, 216, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -381, -2, 162, 0, 197, -8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 16), -5, 167, 63,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint14[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 1538, -1003, 119, 85, 49, 39,
	ftAnimBlock(0, 24),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint16[36] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 255, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 16, 12, -142, -19, 281, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 341, 19, -133, 7, 264, -14,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), -6,
	ftAnimSetVal0RateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 17), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 73, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 255, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 17 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint17[76] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 55, -16, 81, -18, -557, -52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -59, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -43, -49, -436, 140,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -88, 23, -301, 14,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -490, -56,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 97, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 24, 49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -521, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -558, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 98, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), 55, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 86, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 7), 82, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 55, 0, 81, 0, -557, 1,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint19[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 237, 208,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 873, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 779, -141,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 590, -99,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 579, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 240, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 237, -3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 21 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint21[82] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 5, -54, -2, -31, 513, -102,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -108, 83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -250, -60, 241, -72,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -248, 70, 154, -159,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -35, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -77, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, 57, 43, 86,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 22, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 379, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -27, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), 6, -2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 21, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -2, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 402, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 511, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5, -1, -2, 0, 513, 2,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint22[80] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -5, 289, -28, -825, 5,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), -29, 33, 32, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -612, 111,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -531, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 28, -66, -3, 9, -817, -113,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 140, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -161, -96, -758, 33,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), -834, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -163, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -15, 2,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 151, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 286, 4,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -834, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -826, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 1, 289, 2, -825, 0,
	ftAnimEnd(),
};

/* Joint 24 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint24[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 875, 69,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 1028, -293,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 628, -213,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 586, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 585, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), 873, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 875, 1,
	ftAnimEnd(),
	0x0000,
};

/* Joint 25 */
u16 dFTCaptainAnimItemThrowAirSmashB_joint25[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2, -32, -57, 13, -154, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -246, -71, -25, 26, -235, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, 67, 28, -6, -262, 110,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 131, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -38, 40, -13, 142,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 109, 75, 21, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 116, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 15), -150, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 150, 15,
	ftAnimSetValRateT(FT_ANIM_ROTX, 16), -1, -2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 111, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -55, -3,
	ftAnimBlock(0, 10),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -152, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -153, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2, -1, -57, -2, -154, 0,
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
