/* AnimJoint data for relocData file 644 (FTFoxAnimWalk2) */
/* 2064 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTFoxAnimWalk2_joint1[10];
extern u16 dFTFoxAnimWalk2_joint2[98];
extern u16 dFTFoxAnimWalk2_joint4[90];
extern u16 dFTFoxAnimWalk2_joint5[66];
extern u16 dFTFoxAnimWalk2_joint7[24];
extern u16 dFTFoxAnimWalk2_joint10[86];
extern u16 dFTFoxAnimWalk2_joint11[48];
extern u16 dFTFoxAnimWalk2_joint13[24];
extern u16 dFTFoxAnimWalk2_joint15[12];
extern u16 dFTFoxAnimWalk2_joint16[78];
extern u16 dFTFoxAnimWalk2_joint18[48];
extern u16 dFTFoxAnimWalk2_joint20[86];
extern u16 dFTFoxAnimWalk2_joint21[78];
extern u16 dFTFoxAnimWalk2_joint23[48];
extern u16 dFTFoxAnimWalk2_joint24[84];
extern u16 dFTFoxAnimWalk2_joint25[56];
extern u16 dFTFoxAnimWalk2_joint26[44];

/* Joint pointer table (26 entries, 104 bytes) */
AObjEvent32 * dFTFoxAnimWalk2_joints[] = {
	(AObjEvent32 *)dFTFoxAnimWalk2_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint4, /* [2] joint 4 */
	NULL, /* [3] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint5, /* [4] joint 5 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint7, /* [5] joint 7 */
	NULL, /* [6] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint10, /* [7] joint 10 */
	NULL, /* [8] NULL */
	NULL, /* [9] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint15, /* [13] joint 15 */
	NULL, /* [14] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint16, /* [15] joint 16 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint20, /* [18] joint 20 */
	NULL, /* [19] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint21, /* [20] joint 21 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint23, /* [21] joint 23 */
	NULL, /* [22] NULL */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint24, /* [23] joint 24 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint25, /* [24] joint 25 */
	(AObjEvent32 *)dFTFoxAnimWalk2_joint26, /* [25] joint 26 */
};

/* Joint 1 */
u16 dFTFoxAnimWalk2_joint1[10] = {
	ftAnimSetVal(FT_ANIM_TRAX), 48,
	ftAnimSetValAfter(FT_ANIM_TRAY | FT_ANIM_TRAZ), 912, -20,
	ftAnimSetValBlockT(FT_ANIM_TRAX, 60), 48,
	ftAnimLoop(0x6800, -18),
};

/* Joint 2 */
u16 dFTFoxAnimWalk2_joint2[98] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY), -186, -2, -217, -11, 81, 3, -28, 15, 6, -47,
	ftAnimSetValAfterBlock(FT_ANIM_TRAZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 9), -197, 0, -270, 0, 104, 0,
	ftAnimSetValRateT(FT_ANIM_TRAX, 10), 0, 18,
	ftAnimSetValRateBlockT(FT_ANIM_TRAY, 8), -27, 0,
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 34, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 28), -172, 0, 92, 0, -31, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 26, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), -27, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), 0, -28,
	ftAnimBlock(0, 12),
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 23), -186, 0, -217, -11, 81, 6,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAY, 15), 34, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_TRAX, 15), -35, 0,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_TRAY, 7), 6, -50,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX, 5), -28, 14,
	ftAnimLoop(0x6800, -192),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTFoxAnimWalk2_joint4[90] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 290, 0, 261, 15, 13, 3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 17, -3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), 282, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 293, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 321, -4,
	ftAnimBlock(0, 4),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 14), -19, 0,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 13), 290,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -64, -25,
	ftAnimBlock(0, 10),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -31, -3,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTX, 11), 294, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), -150, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), -32, 3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 321, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), -7, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 261, 19,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTX, 18), 290, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 13, 0,
	ftAnimLoop(0x6800, -178),
};

/* Joint 5 */
u16 dFTFoxAnimWalk2_joint5[66] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -68, -4, -180, 2, 132, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 39), 38, 2,
	ftAnimSetValRateT(FT_ANIM_ROTY, 40), -263, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 116, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 106, -10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 30), 53, 10,
	ftAnimBlock(0, 19),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 37, -3,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), -66, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -257, 7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -181, 0,
	ftAnimBlock(0, 9),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 63, 10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 128, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -68, -1, -180, 0, 132, 4,
	ftAnimLoop(0x6800, -128),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTFoxAnimWalk2_joint7[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -501, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 35), -487, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -488, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -497, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -501, -3,
	ftAnimLoop(0x6800, -46),
};

/* Joint 10 */
u16 dFTFoxAnimWalk2_joint10[86] = {
	ftAnimSetValRate(FT_ANIM_ROTY | FT_ANIM_ROTZ), -31, -5, 4, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTX), -110,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 11), 5, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -8, 8,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 10), -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), -65, 0,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 7), -5, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 79, 7,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 15), -111,
	ftAnimBlock(0, 3),
	ftAnimSetValRateT(FT_ANIM_ROTZ, 17), -13, 0,
	ftAnimBlock(0, 11),
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), 79, -4,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 10), -111,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), 30, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), 4, 1,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -65, 0,
	ftAnimBlock(0, 5),
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), -31, -6,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 14), -110,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTFoxAnimWalk2_joint11[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 138, -2, 225, 2, 369, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 53), 211, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 139, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 415, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -3,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 10), 373, -3,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 214, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 224, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 138, -1, 225, 1, 369, -3,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTFoxAnimWalk2_joint13[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -542, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -502, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -506, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -542, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -542, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 15 */
u16 dFTFoxAnimWalk2_joint15[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, -804, 1608, 60, -60, 12,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTFoxAnimWalk2_joint16[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -477, -10, -180, 2, -33, -5,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 32), 267, 12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 55), -416, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 23), 8, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 4, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 14), -98, -9,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 281, 15,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 287, -29,
	ftAnimBlock(0, 5),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -111, -13,
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), -182, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 256, -31,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -26, -7,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -428, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -465, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -477, -12, -180, 2, -33, -7,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 18 */
u16 dFTFoxAnimWalk2_joint18[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 405, -7,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 320, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 325, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), 195, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 165, -33,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 135, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), 525, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 538, 8,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 408, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 405, -3,
	ftAnimLoop(0x6800, -94),
};

/* Joint 20 */
u16 dFTFoxAnimWalk2_joint20[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 22, 7, 217, 0, -138, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -157, -16,
	ftAnimSetValRateT(FT_ANIM_ROTY, 38), 384, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -67, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -75, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -325, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -347, -19,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), -141, 4,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -173, -12,
	ftAnimSetValRateT(FT_ANIM_ROTX, 14), -28, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 383, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 15), 278, -15,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -28, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 13, 8,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 264, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 4), 224, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 22, 8, 217, -6, -138, 3,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTFoxAnimWalk2_joint21[78] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 311, -7, 170, 10, 240, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 164, -14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 275, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), 243, -40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 200, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 25), -68, 2,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 154, -4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 19), 443, 14,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 267, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 155, 15,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 457, 13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), 321, -10,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -63, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), 234, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 311, -9, 171, 15, 240, 6,
	ftAnimLoop(0x6800, -152),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTFoxAnimWalk2_joint23[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 245, -5,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 121, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 144, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), 568, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 562, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), 357, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 351, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), 264, -20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 244, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 8), 241, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 246, 5,
	ftAnimLoop(0x6800, -94),
};

/* Joint 24 */
u16 dFTFoxAnimWalk2_joint24[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1528, 13, -1372, -3, -1902, -9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), -1594, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1336, 12, -1983, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1326, 8, -1993, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 16), -1780, 6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 31), -1459, 7,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1609, -14,
	ftAnimSetValRateT(FT_ANIM_ROTX, 35), -1575, 15,
	ftAnimBlock(0, 8),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1773, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -1764, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1451, 8, -1770, -4,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 13), -1369, -1, -1887, -16,
	ftAnimBlock(0, 11),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1559, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1544, 15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1528, 15, -1372, -2, -1902, -15,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTFoxAnimWalk2_joint25[56] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), 219,
	ftAnimSetValRate(FT_ANIM_ROTX), 0, 11,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 129, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 38, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 15), -63, 0,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_ROTY, 20), 35, -2,
	ftAnimBlock(0, 13),
	ftAnimSetValRateT(FT_ANIM_ROTX, 13), 35, -1,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 52, 9,
	ftAnimBlock(0, 6),
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -37, -11,
	ftAnimBlock(0, 3),
	ftAnimSetVal0RateT(FT_ANIM_ROTY, 20), 219,
	ftAnimBlock(0, 7),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 0, 14,
	ftAnimLoop(0x6800, -110),
};

/* Joint 26 */
u16 dFTFoxAnimWalk2_joint26[44] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY), -19, 10, 40, -17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTZ), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 14), 147, -2, -223, 3,
	ftAnimSetValRateT(FT_ANIM_ROTY, 35), 223, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 15), -95, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 13), 140, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 10), -89, 0,
	ftAnimBlock(0, 7),
	ftAnimSetValRateT(FT_ANIM_ROTY, 11), 40, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 8), -19, 10,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};
