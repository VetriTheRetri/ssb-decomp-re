/* AnimJoint data for relocData file 2038 (FTPikachuAnimCliffWait) */
/* 1632 bytes: 108-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPikachuAnimCliffWait_joint1[14];
extern u16 dFTPikachuAnimCliffWait_joint2[28];
extern u16 dFTPikachuAnimCliffWait_joint3[38];
extern u16 dFTPikachuAnimCliffWait_joint4[34];
extern u16 dFTPikachuAnimCliffWait_joint6[12];
extern u16 dFTPikachuAnimCliffWait_joint7[52];
extern u16 dFTPikachuAnimCliffWait_joint8[28];
extern u16 dFTPikachuAnimCliffWait_joint9[38];
extern u16 dFTPikachuAnimCliffWait_joint10[12];
extern u16 dFTPikachuAnimCliffWait_joint11[54];
extern u16 dFTPikachuAnimCliffWait_joint12[48];
extern u16 dFTPikachuAnimCliffWait_joint14[28];
extern u16 dFTPikachuAnimCliffWait_joint15[72];
extern u16 dFTPikachuAnimCliffWait_joint17[8];
extern u16 dFTPikachuAnimCliffWait_joint18[60];
extern u16 dFTPikachuAnimCliffWait_joint20[28];
extern u16 dFTPikachuAnimCliffWait_joint22[48];
extern u16 dFTPikachuAnimCliffWait_joint23[44];
extern u16 dFTPikachuAnimCliffWait_joint25[28];
extern u16 dFTPikachuAnimCliffWait_joint26[48];
extern u16 dFTPikachuAnimCliffWait_joint27[40];

/* Joint pointer table (27 entries, 108 bytes) */
u32 dFTPikachuAnimCliffWait_joints[] = {
	(u32)dFTPikachuAnimCliffWait_joint1, /* [0] joint 1 */
	(u32)dFTPikachuAnimCliffWait_joint2, /* [1] joint 2 */
	(u32)dFTPikachuAnimCliffWait_joint3, /* [2] joint 3 */
	(u32)dFTPikachuAnimCliffWait_joint4, /* [3] joint 4 */
	(u32)dFTPikachuAnimCliffWait_joint6, /* [4] joint 6 */
	0x00000000, /* [5] NULL */
	(u32)dFTPikachuAnimCliffWait_joint7, /* [6] joint 7 */
	(u32)dFTPikachuAnimCliffWait_joint8, /* [7] joint 8 */
	(u32)dFTPikachuAnimCliffWait_joint9, /* [8] joint 9 */
	(u32)dFTPikachuAnimCliffWait_joint10, /* [9] joint 10 */
	(u32)dFTPikachuAnimCliffWait_joint11, /* [10] joint 11 */
	(u32)dFTPikachuAnimCliffWait_joint12, /* [11] joint 12 */
	(u32)dFTPikachuAnimCliffWait_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTPikachuAnimCliffWait_joint15, /* [14] joint 15 */
	(u32)dFTPikachuAnimCliffWait_joint17, /* [15] joint 17 */
	0x00000000, /* [16] NULL */
	(u32)dFTPikachuAnimCliffWait_joint18, /* [17] joint 18 */
	(u32)dFTPikachuAnimCliffWait_joint20, /* [18] joint 20 */
	0x00000000, /* [19] NULL */
	(u32)dFTPikachuAnimCliffWait_joint22, /* [20] joint 22 */
	0x00000000, /* [21] NULL */
	(u32)dFTPikachuAnimCliffWait_joint23, /* [22] joint 23 */
	(u32)dFTPikachuAnimCliffWait_joint25, /* [23] joint 25 */
	0x00000000, /* [24] NULL */
	(u32)dFTPikachuAnimCliffWait_joint26, /* [25] joint 26 */
	(u32)dFTPikachuAnimCliffWait_joint27, /* [26] joint 27 */
};

/* Joint 1 */
u16 dFTPikachuAnimCliffWait_joint1[14] = {
	ftAnimSetVal(FT_ANIM_TRAY | FT_ANIM_TRAZ), -1380, -240,
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX), 0, 0, 0, 0,
	ftAnimSetValBlockT(FT_ANIM_TRAY | FT_ANIM_TRAZ, 80), -1380, -240,
	ftAnimLoop(0x6800, -26),
};

/* Joint 2 */
u16 dFTPikachuAnimCliffWait_joint2[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 146, 897, -74,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), 118, 924, -100,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 38), 146, 5, 897, -5, -74, 4,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 146, 897, -74,
	ftAnimLoop(0x6800, -54),
};

/* Joint 3 */
u16 dFTPikachuAnimCliffWait_joint3[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -136, 0, 4, 0, -280, -1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -234, -248, -111,
	ftAnimSetValRateT(FT_ANIM_ROTX, 37), -129, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 281, -194,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 43), 4, 2, -280, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 38), -138, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), -136, 0,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 4 */
u16 dFTPikachuAnimCliffWait_joint4[34] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -123, 0, 42, 0, 39, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 4, 309, 12,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), 30, 106, -68,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 43), -123, 0, 39, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 38), 42, 0,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTY), 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 5), 42, 0,
	ftAnimLoop(0x6800, -66),
};

/* Joint 6 */
u16 dFTPikachuAnimCliffWait_joint6[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 401, -121, 268,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPikachuAnimCliffWait_joint7[52] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 232, 2, -95, -1, -501, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 69), -151, 10,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 75), -504, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 51), 604, -4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 586, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 21), 233, -11,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -120, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -93, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 223, -3, -91, 0, -502, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 223, -91, -502,
	ftAnimLoop(0x6800, -102),
};

/* Joint 8 */
u16 dFTPikachuAnimCliffWait_joint8[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -462, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 69), -499, 7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -475, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -457, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), -459, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), -459,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPikachuAnimCliffWait_joint9[38] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -211, 0, -49, 0, 69, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, 194, 148,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -214, 0, -49, 0, 73, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 44), -148, 0, 35, 0, 41, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 31), -211, 0, -49, 0, 69, 2,
	ftAnimLoop(0x6800, -72),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPikachuAnimCliffWait_joint10[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 59, 5, 2401, 8, 32, 508,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPikachuAnimCliffWait_joint11[54] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -312, 8, 1,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 254, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -312, 0, 9, 0, -3, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -302, 11, 13, 5, 4, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 36), 187, 0, 367, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 36), 229,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), 13, -6, 8, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 31), -295, -15,
	ftAnimSetVal0RateT(FT_ANIM_ROTX, 2), -312,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 8, 1,
	ftAnimLoop(0x6800, -106),
};

/* Joint 12 */
u16 dFTPikachuAnimCliffWait_joint12[48] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -340, -33, 27,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -255, 357, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -339, 0, -32, 0, 28, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 5), -339, 2, -34, 0, 26, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 37), -203, 0, 1, 0, 74, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -339, -2, -32, -1, 28, -1,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -340, -33, 27,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPikachuAnimCliffWait_joint14[28] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -449, -30, 326,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1, 0, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 37), -408, 86, 170,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 38), -449, -7, -30, -21, 326, 29,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), -449, -30, 326,
	ftAnimLoop(0x6800, -54),
};

/* Joint 15 */
u16 dFTPikachuAnimCliffWait_joint15[72] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 803, 0, 1357, -7, 612, -4,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), 186, 18,
	ftAnimSetValRateT(FT_ANIM_ROTY, 51), 1129, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 30), 430, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 389, -8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 36), 799, 3,
	ftAnimBlock(0, 12),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 246, 20,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 27), 603, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), 1172, 14,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 1383, -2,
	ftAnimBlock(0, 15),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 805, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 804, 0, 1373, -3, 611, 2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 804, 1373, 611,
	ftAnimLoop(0x6800, -142),
};

/* Joint 17 */
u16 dFTPikachuAnimCliffWait_joint17[8] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimBlock(0, 80),
	ftAnimLoop(0x6800, -14),
};

/* Joint 18 */
u16 dFTPikachuAnimCliffWait_joint18[60] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1347, 0, -1360, 0, 1339, 1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 60), -1346, 1,
	ftAnimSetValRateT(FT_ANIM_ROTX, 63), 1273, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 54), 1565, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1529, -12,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 18), 1347, -3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1344, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 12), -1360, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), 1294, 6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 9), 1346, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1349, 0, -1361, 0, 1340, -2,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1349, -1361, 1340,
	ftAnimLoop(0x6800, -118),
};

/* Joint 20 */
u16 dFTPikachuAnimCliffWait_joint20[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 510, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 39), 464, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 460, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 33), 517, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 512, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 512,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 22 */
u16 dFTPikachuAnimCliffWait_joint22[48] = {
	ftAnimSetValRate(FT_ANIM_ROTX), 1730, 0,
	ftAnimSetVal0RateBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ), -1633, 1880,
	ftAnimSetValRateT(FT_ANIM_ROTY, 72), -1620, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 75), 1728, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 63), 2003, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1974, -9,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 9), 1896, -5,
	ftAnimBlock(0, 6),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 3), -1628, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 1727, 0, -1632, -1, 1883, -4,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 1727, -1632, 1883,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 23 */
u16 dFTPikachuAnimCliffWait_joint23[44] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 280, 0, -45, 0, -49, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 75), 278, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 60), 50, -6, -27, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 30, -6, -38, -3,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 12), -37, -3, -51, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 278, 0, -44, -2, -49, 0,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), 278, -44, -49,
	ftAnimLoop(0x6800, -86),
};

/* Joint 25 */
u16 dFTPikachuAnimCliffWait_joint25[28] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 291, 2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 48), 473, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 469, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 24), 310, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 295, -5,
	ftAnimSetValBlockT(FT_ANIM_ROTZ, 2), 295,
	ftAnimLoop(0x6800, -52),
	ftAnimEnd(),
};

/* Joint 26 */
u16 dFTPikachuAnimCliffWait_joint26[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -2011, 0, -1462, 0, 2032, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 72), -1474, 2, 2045, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 66), -2053, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -2038, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -2014, 2,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -1467, 1, 2037, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), -2011, 1, -1463, 1, 2033, -1,
	ftAnimSetValBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -2011, -1463, 2033,
	ftAnimLoop(0x6800, -94),
};

/* Joint 27 */
u16 dFTPikachuAnimCliffWait_joint27[40] = {
	ftAnimSetValRate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -477, 5, -219, -2, -763, 13,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -1, -180, -354,
	ftAnimSetVal0RateT(FT_ANIM_ROTZ, 48), -1048,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 5), -457, -2, -219, -1,
	ftAnimSetTargetRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 5, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 43), -591, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 43), -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 32), -477, 2, -219, -2, -763, 13,
	ftAnimLoop(0x6800, -78),
};
