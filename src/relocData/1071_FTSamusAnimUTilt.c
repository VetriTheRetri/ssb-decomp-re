/* AnimJoint data for relocData file 1071 (FTSamusAnimUTilt) */
/* 3888 bytes: 92-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTSamusAnimUTilt_joint1[60];
extern u16 dFTSamusAnimUTilt_joint2[128];
extern u16 dFTSamusAnimUTilt_joint4[88];
extern u16 dFTSamusAnimUTilt_joint5[220];
extern u16 dFTSamusAnimUTilt_joint6[88];
extern u16 dFTSamusAnimUTilt_joint7[42];
extern u16 dFTSamusAnimUTilt_joint8[10];
extern u16 dFTSamusAnimUTilt_joint11[8];
extern u16 dFTSamusAnimUTilt_joint12[232];
extern u16 dFTSamusAnimUTilt_joint14[100];
extern u16 dFTSamusAnimUTilt_joint15[158];
extern u16 dFTSamusAnimUTilt_joint17[62];
extern u16 dFTSamusAnimUTilt_joint19[160];
extern u16 dFTSamusAnimUTilt_joint20[228];
extern u16 dFTSamusAnimUTilt_joint22[62];
extern u16 dFTSamusAnimUTilt_joint23[252];

/* Joint pointer table (23 entries, 92 bytes) */
u32 dFTSamusAnimUTilt_joints[] = {
	(u32)dFTSamusAnimUTilt_joint1, /* [0] joint 1 */
	(u32)dFTSamusAnimUTilt_joint2, /* [1] joint 2 */
	(u32)dFTSamusAnimUTilt_joint4, /* [2] joint 4 */
	0x00000000, /* [3] NULL */
	(u32)dFTSamusAnimUTilt_joint5, /* [4] joint 5 */
	(u32)dFTSamusAnimUTilt_joint6, /* [5] joint 6 */
	(u32)dFTSamusAnimUTilt_joint7, /* [6] joint 7 */
	(u32)dFTSamusAnimUTilt_joint8, /* [7] joint 8 */
	(u32)dFTSamusAnimUTilt_joint11, /* [8] joint 11 */
	0x00000000, /* [9] NULL */
	0x00000000, /* [10] NULL */
	(u32)dFTSamusAnimUTilt_joint12, /* [11] joint 12 */
	(u32)dFTSamusAnimUTilt_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTSamusAnimUTilt_joint15, /* [14] joint 15 */
	(u32)dFTSamusAnimUTilt_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTSamusAnimUTilt_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTSamusAnimUTilt_joint20, /* [19] joint 20 */
	(u32)dFTSamusAnimUTilt_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTSamusAnimUTilt_joint23, /* [22] joint 23 */
};

/* Joint 1 */
u16 dFTSamusAnimUTilt_joint1[60] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAZ), 0, 0,
	ftAnimSetValBlock(FT_ANIM_TRAY), 1600,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), -8, -12, -3, -5,
	ftAnimSetValBlockT(FT_ANIM_TRAY, 6), 1380,
	ftAnimSetTargetRateBlock(FT_ANIM_TRAY), -19,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -18, -9, 1571, 422, -8, -4,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 8), -25, -5, 2119, 487, -10, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -25, 2119, -10,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -25, 2119, -10,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -25, 9, 2119, -188, -10, 3,
	ftAnimSetValRateT(FT_ANIM_TRAY, 21), 1600, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 21), 0, 0,
	ftAnimEnd(),
	0x0000,
};

/* Joint 2 */
u16 dFTSamusAnimUTilt_joint2[128] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX), 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 20), -556, -211,
	ftAnimSetVal0RateT(FT_ANIM_TRAZ, 22), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 0, 47, -804, -138, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 473, 125, -1385, -74, 0, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 1002, 33, -1401, 0, 393, 81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 804, -28, -1378, 3, 813, 59,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 804, -1378, 813, -556,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY, 1), 804, -1378, 813, -556,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 804, 74, -1378, -49, 813, 36, -556, -76, 0, 487,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 8), 1471, 60, -1827, -40,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 21), 1608,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 6), -622, -747, 420, 503,
	ftAnimSetValRateT(FT_ANIM_TRAY, 1), -1209, -2371,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAZ, 1), 440,
	ftAnimSetValRateT(FT_ANIM_TRAZ, 2), 420, -55,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -1214, 1349,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY, 3), 1471, 10, -1827, 16,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 1), -872, 1369,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), -872, 581, 420, -280,
	ftAnimSetVal0RateT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 11), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 10), 1608, -1608,
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTSamusAnimUTilt_joint4[88] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 6), 122, 16, 0, -37, 0, -11, 0, 0, 45, 14,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 6), 0,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 14), 0, -86, 0, -41, 35, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 166, -78, -375, -74, -113, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -267, -38, -374, -23, -113, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -216, 46, -607, -2, 75, 20,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAZ, 3), 285, 53, -405, 55, 129, -11, -183, 0, 38, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAY, 3), -88,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 21), 0, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 260, -13, -105, 19, -31, -6,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 15), 0, 0, 0,
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTSamusAnimUTilt_joint5[220] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2084, -14, -1722, 142, -1839, -177,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1313, -85,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 2201, 53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -2051, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2019, 17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -2037, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1429, -44, -1919, 33,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -1271, 98, -2213, -269,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2266, 103,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 2598, 95,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1205, -105, -2509, -34,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), -1737, -171,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2600, 45, -2283, 169,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 2876, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2169, 54,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -2089, 41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1826, -49,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1374, 108,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2836, -53, -2051, 32,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), 2750, 143, -2200, -185,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1274, 122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -987, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 2930, 358, -2415, -408,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3467, 417, -3017, -478,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 3766, 179, -1082, -80, -3372, -269,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3683, -37,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -994, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -3789, -205,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3967, -124,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3692, -282, -4037, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3118, -120, -3872, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3451, 450, -4115, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 4018, 375, -998, -6, -4178, -72,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), -1353, -120,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -4914, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 4203, 215,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 5301, 25,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1473, -112,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1705, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 5313, 5, -4964, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 5305, -5, -5043, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 5301, -3, -1722, -17, -5056, -13,
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTSamusAnimUTilt_joint6[88] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -738, 90,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -809, -163,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -988, -164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1261, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1200, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1216, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1280, 104,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1007, 219,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -842, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -735, -96,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -828, -90,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -566, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -523, -157,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -881, -199,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -922, 86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -708, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -757, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), -910, 46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -855, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -755, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -738, 16,
	ftAnimEnd(),
	0x0000,
};

/* Joint 7 */
u16 dFTSamusAnimUTilt_joint7[42] = {
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 701, 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -481, -120, 0, -15, 0, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), -503, -69, -151, -23, -97, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -899, 6, -142, 9, -92, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 14), -404, 50, 0, 4, 0, 2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 18), 701, 0, 0,
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTSamusAnimUTilt_joint8[10] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 67, -17, -1474, 98, 60, -42,
	ftAnimBlock(0, 44),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTSamusAnimUTilt_joint11[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 44),
	ftAnimEnd(),
	0x0000,
};

/* Joint 12 */
u16 dFTSamusAnimUTilt_joint12[232] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 58, -4, -128, -34, -215, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -99, 221,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 3), -69, -66, -9, 71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -120, 5, 35, -28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -58, 70, -66, -127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 20, 331, 230, 134, -219, 274,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 603, 316, 169, -25, 481, 354,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 653, 25, 179, -12, 490, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 655, -75, 143, 13, 492, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 502, -81, 206, -55, 399, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -30, 5, 577, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 492, -161,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 179, -347,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -369, 271,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 43, 69, 591, 3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 140, -91, 673, 89,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 106, 317, -74, -96, 764, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 33, -56,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -118, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 221, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 198, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 12, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 30, -1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -183, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 60, 233,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 450, 36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -32, 422, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -41, 33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 382, 74,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -224, -33, 483, 60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -250, 190, 503, 149,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 156, 100, 782, 67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -49, -145, 11, -56, 638, -305,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -134, -27, -153, -70, 172, -244,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -31, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -129, 24, 149, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -120, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 136, -18,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), -206, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -21, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 51, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 58, 6, -128, -8, -215, -9,
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTSamusAnimUTilt_joint14[100] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -594, -92,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1332, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1363, 164,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1003, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1058, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -749, 54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -837, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -742, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -857, -137,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -1075, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1009, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1357, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1295, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -888, 265,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -636, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -636, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -567, -162,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -960, -201,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -969, 250,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -458, 245,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -478, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -608, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -598, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -594, 3,
	ftAnimEnd(),
	0x0000,
};

/* Joint 15 */
u16 dFTSamusAnimUTilt_joint15[158] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1695, -5, -1581, 1, 1218, -25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), 1572, -36, -1583, 7, 824, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1557, 79, -1573, -30, 708, -112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 2032, 83,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 350, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 2), -1617, 63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1517, 102,
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 8), -1061,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2083, 83,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 2817, 214,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 322, -39,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 4), 99,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 3041, 112,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), 3041, 51,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1061, 99,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1064, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 99, -48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 3144, -16, 1, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 4), 2364, -130, 833, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2289, 91, -1176, -210, 905, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2548, 121, -1485, -201, 856, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2533, -147, -1579, -37, 913, 30,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -1569, -2,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 12), 1209, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2254, -158,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 2215, -62,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), 1688, -1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1570, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -1574, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1695, 7, -1581, -6, 1218, 9,
	ftAnimEnd(),
};

/* Joint 17 */
u16 dFTSamusAnimUTilt_joint17[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 478, 71,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 656, -131,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 505, -152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 7), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 0, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, 100,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 369, 150,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 503, 133,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 777, 310,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1256, 258,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), 1127, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1167, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), 501, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 478, -23,
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTSamusAnimUTilt_joint19[160] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1493, 0, -1579, 4, -1650, -34,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 10), 1592, 17, -1883, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1619, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1651, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), -1494, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1524, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -1391, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1591, 5, -1835, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 1634, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 8), -1396, 33,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1408, 24,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1394, -104,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1609, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 1552, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1529, -122,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1611, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1378, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1546, -98,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1509, -43, -1595, 19, -1623, -72,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1838, -123,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -1487, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 2), 1422, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1378, -172,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1076, -176, -2010, -82,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 2), -1951, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1026, 95,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1268, 118,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1263, 20, -1499, -12, -1978, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 10), -1591, 7, -1661, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), 1495, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1498, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1497, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1493, -4, -1579, 11, -1650, 11,
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTSamusAnimUTilt_joint20[228] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 230, -83, 164, -11, -57, -57,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), 124, 29, -430, -54,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 4), 59, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 71, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 35, -42,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, -406, 194, -76, -498, -201,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), -1478, -267,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -27, 34, -833, -311,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 264, 86, -1120, -368,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1313, 14, 145, -66, -1569, -325,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1450, -254, 131, 31, -1771, -200,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -2307, -85,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 646, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1822, -253,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2020, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -2420, -167,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3314, -84,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2027, -147,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -2805, -102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 671, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 308, -177,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2791, 11, -3303, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), -2763, -105, -3287, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -2993, -149, -3449, -128,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), -2836, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -3743, -77,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 109, -170,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), -162, 41,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -2831, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3050, -83,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -46, 93,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), 33, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3802, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -3710, -110,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -3133, -84, 44, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 108, 47,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -3061, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3905, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -4008, 127,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -3651, 254,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -3296, 34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 140, 21,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 156, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -3025, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -2986, 39, 164, 8, -3274, 22,
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTSamusAnimUTilt_joint22[62] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 449, 77,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 896, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 883, 128,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1154, -222,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 437, -574,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 4, -218,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, -2,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 24), 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 378, 510,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1021, 326,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1031, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 899, -139,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 497, -81,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 449, -48,
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTSamusAnimUTilt_joint23[252] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 140, 32, 193, 91, -210, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -345, -57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 4), 94, -79, 207, -92,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 13, -53, 103, -94,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -11, -7, 19, -92, -402, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -249, 200,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1, 333, -81, 82,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 2), 967, -242, 331, -144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 169, -456, -104, -146, -16, 130,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 70, -24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -23, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 38, -17,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -139, 25,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 321, 187,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 5, -32,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 45, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 8, 38,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 54, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 465, 69,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 461, -107,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 250, -103,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 260, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 36, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 50, -16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 270, 5, 115, 15,
	ftAnimSetValRateT(FT_ANIM_ROTY, 3), 273, 79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 55, 60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 32, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 169, -116,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 430, 106,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), 158, -71,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 109, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -78, -132, -101, -46,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -95, -30, 16, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -138, -6, -47, -23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -33, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 117, -40, -29, -2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 141, 47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 83, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -5, -100, 120, -148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -233, 2, 200, -6, -213, -192,
	ftAnimSetValRateT(FT_ANIM_ROTY, 5), -66, 144,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1, 121, -264, -100,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -10, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -414, -60,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -385, 32,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -232, 38,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 66, 73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), 137, 37, 120, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 141, 3, 193, 72, -210, 22,
	ftAnimEnd(),
	0x0000, 0x0000,
};
