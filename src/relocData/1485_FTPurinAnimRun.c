/* AnimJoint data for relocData file 1485 (FTPurinAnimRun) */
/* 1568 bytes: 88-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTPurinAnimRun_joint1[50];
extern u16 dFTPurinAnimRun_joint2[12];
extern u16 dFTPurinAnimRun_joint3[118];
extern u16 dFTPurinAnimRun_joint5[12];
extern u16 dFTPurinAnimRun_joint6[26];
extern u16 dFTPurinAnimRun_joint7[16];
extern u16 dFTPurinAnimRun_joint9[12];
extern u16 dFTPurinAnimRun_joint10[26];
extern u16 dFTPurinAnimRun_joint11[16];
extern u16 dFTPurinAnimRun_joint13[12];
extern u16 dFTPurinAnimRun_joint14[84];
extern u16 dFTPurinAnimRun_joint16[44];
extern u16 dFTPurinAnimRun_joint18[86];
extern u16 dFTPurinAnimRun_joint19[88];
extern u16 dFTPurinAnimRun_joint21[32];
extern u16 dFTPurinAnimRun_joint22[106];

/* Joint pointer table (22 entries, 88 bytes) */
AObjEvent32 * dFTPurinAnimRun_joints[] = {
	(AObjEvent32 *)dFTPurinAnimRun_joint1, /* [0] joint 1 */
	(AObjEvent32 *)dFTPurinAnimRun_joint2, /* [1] joint 2 */
	(AObjEvent32 *)dFTPurinAnimRun_joint3, /* [2] joint 3 */
	(AObjEvent32 *)dFTPurinAnimRun_joint5, /* [3] joint 5 */
	NULL, /* [4] NULL */
	(AObjEvent32 *)dFTPurinAnimRun_joint6, /* [5] joint 6 */
	(AObjEvent32 *)dFTPurinAnimRun_joint7, /* [6] joint 7 */
	(AObjEvent32 *)dFTPurinAnimRun_joint9, /* [7] joint 9 */
	NULL, /* [8] NULL */
	(AObjEvent32 *)dFTPurinAnimRun_joint10, /* [9] joint 10 */
	(AObjEvent32 *)dFTPurinAnimRun_joint11, /* [10] joint 11 */
	(AObjEvent32 *)dFTPurinAnimRun_joint13, /* [11] joint 13 */
	NULL, /* [12] NULL */
	(AObjEvent32 *)dFTPurinAnimRun_joint14, /* [13] joint 14 */
	(AObjEvent32 *)dFTPurinAnimRun_joint16, /* [14] joint 16 */
	NULL, /* [15] NULL */
	(AObjEvent32 *)dFTPurinAnimRun_joint18, /* [16] joint 18 */
	NULL, /* [17] NULL */
	(AObjEvent32 *)dFTPurinAnimRun_joint19, /* [18] joint 19 */
	(AObjEvent32 *)dFTPurinAnimRun_joint21, /* [19] joint 21 */
	NULL, /* [20] NULL */
	(AObjEvent32 *)dFTPurinAnimRun_joint22, /* [21] joint 22 */
};

/* Joint 1 */
u16 dFTPurinAnimRun_joint1[50] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 18, 1035, 381,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 303, 62, -47, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 14, -13, 838, 5, 381, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 1, 17, 1045, -44, 381, 0,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 33, 53, 788, -338, 382, 1,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 1), 34, -20, 834, 310, 382, 0,
	ftAnimSetVal0RateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 18, 1021, 381,
	ftAnimLoop(0x6800, -98),
};

/* Joint 2 */
u16 dFTPurinAnimRun_joint2[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -12, -636, 15, 0, -312, 0,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 3 */
u16 dFTPurinAnimRun_joint3[118] = {
	ftAnimSetVal0Rate(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 312, 0,
	ftAnimSetValRate(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 3889, 52, 4236, -49, 3889, 60,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, 0, 0,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 4), 4710, 1285, 3370, -1104, 4734, 1244,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 3), 49, 79, 233, -129, 19, 31,
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 2), 49, -56, 231, 89, 19, -22,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4222, -443, 4056, 320, 4194, -394,
	ftAnimBlock(0, 1),
	ftAnimSetValRateT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 5), 0, 8, 312, -3, 0, 2,
	ftAnimBlock(0, 2),
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 8), 4881, 881, 3362, -790, 4863, 923,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ, 4), 58, 93, 227, -112, 22, 36,
	ftAnimSetValRateT(FT_ANIM_TRAY, 2), 227, 112,
	ftAnimSetValRateBlockT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 1), 58, -77, 22, -30,
	ftAnimSetValRateT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 3), 4074, -202, 4042, 274, 4088, -303,
	ftAnimSetVal0RateT(FT_ANIM_TRAX | FT_ANIM_TRAZ, 5), 0, 0,
	ftAnimBlock(0, 1),
	ftAnimSetVal0RateT(FT_ANIM_TRAY, 4), 312,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ, 2), 3889, -63, 4236, 87, 3889, -80,
	ftAnimLoop(0x6800, -234),
};

/* Joint 5 */
u16 dFTPurinAnimRun_joint5[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, -157, -440, 92,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 6 */
u16 dFTPurinAnimRun_joint6[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1590, 0, -1592, 0, 1174, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1590, -3, -1592, -2, 1173, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1592, -2, -1594, -1, 1176, 2,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTPurinAnimRun_joint7[16] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTZ), 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -6, -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 9 */
u16 dFTPurinAnimRun_joint9[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0, 247, -547, 197,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTPurinAnimRun_joint10[26] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1467, 0, 1757, 0, -2006, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 19), -1466, -2, 1758, -2, -2007, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1467, -1, 1756, -1, -2007, 0,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 11 */
u16 dFTPurinAnimRun_joint11[16] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -6, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -6, -3,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTZ, 1), -6,
	ftAnimLoop(0x6800, -28),
	ftAnimEnd(),
};

/* Joint 13 */
u16 dFTPurinAnimRun_joint13[12] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), -58, -637, -1530, 106, -21, 16,
	ftAnimBlock(0, 20),
	ftAnimLoop(0x6800, -20),
	ftAnimEnd(),
};

/* Joint 14 */
u16 dFTPurinAnimRun_joint14[84] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1084, 0, -1347, -1, 1147, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1517, -68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 6), -1280, -154, 1300, 152,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1449, -136, 1484, 170,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 1740, -118,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1696, -60,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1572, -51,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -1541, 98,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1593, -153,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), 1092, 44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1758, -44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 3), -1583, 235,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1292, 229,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1123, 106, -1408, 96, 1135, 25,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1080, 43, -1347, 61, 1144, 8,
	ftAnimLoop(0x6800, -164),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTPurinAnimRun_joint16[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 1033, -9,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 993, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 901, -119,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 446, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 548, 117,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 820, 49,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 871, 102,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 3), 1200, -35,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1105, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1042, -62,
	ftAnimLoop(0x6800, -86),
};

/* Joint 18 */
u16 dFTPurinAnimRun_joint18[86] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -680, 2, 52, -4, -177, 11,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 7), -529, 76, -144, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 6), -77, -32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -90, 116,
	ftAnimSetValRateT(FT_ANIM_ROTY, 2), 451, 175,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -483, 23, -158, 44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), 125, 51,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -267, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 505, -8,
	ftAnimSetValRateT(FT_ANIM_ROTY, 6), -153, 16,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, 64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 240, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -329, -118, -82, 93, 78, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -641, -89, 61, 10, -179, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -683, -41, 54, -6, -186, -7,
	ftAnimLoop(0x6800, -168),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTPurinAnimRun_joint19[88] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -415, 14, 179, -7, -448, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 6), -218, 58, 31, -60, -541, -134,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -136, 107, -29, -16, -717, -152,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 187, -168,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 57, -43, -690, 79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 17, -7, -636, -12,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 2), -21, -76, -827, -29,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -47, -238,
	ftAnimSetValRateT(FT_ANIM_ROTX, 3), -469, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -110, -34, -776, 69,
	ftAnimSetValRateT(FT_ANIM_ROTY | FT_ANIM_ROTZ, 4), 156, 46, -477, 45,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -461, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -436, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -421, 14, 181, 25, -449, 27,
	ftAnimLoop(0x6800, -172),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTPurinAnimRun_joint21[32] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 688, 17,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 1012, 91,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 1102, 55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 6), 912, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 923, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 722, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 692, -30,
	ftAnimLoop(0x6800, -62),
};

/* Joint 22 */
u16 dFTPurinAnimRun_joint22[106] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1464, 12, -1605, 12, -1127, -26,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 6), -1541, -58,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -1318, -67,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 5), 1470, -37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1452, -7,
	ftAnimSetValRateT(FT_ANIM_ROTX, 2), 1349, -136,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1576, 36,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 3), -1275, 17,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1182, -141,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 1056, 106,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1394, -54,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1216, 135,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1300, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 2), -1195, 66,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1233, 256, -1165, -96,
	ftAnimSetValRateT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1788, 86, -1598, -78,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1104, 41,
	ftAnimSetValRateT(FT_ANIM_ROTY, 4), -1540, -113,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), 1741, -104, -1545, 130,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 2), 1488, -56, -1180, 103,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1466, -21, -1599, -59, -1131, 48,
	ftAnimLoop(0x6800, -208),
	ftAnimEnd(),
};
