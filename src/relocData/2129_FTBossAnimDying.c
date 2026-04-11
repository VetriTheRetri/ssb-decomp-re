/* AnimJoint data for relocData file 2129 (FTBossAnimDying) */
/* 2960 bytes: 104-byte header + per-joint AObjEvent16 scripts */

#include "relocdata_types.h"

extern u16 dFTBossAnimDying_joint1[8];
extern u16 dFTBossAnimDying_joint3[14];
extern u16 dFTBossAnimDying_joint4[26];
extern u16 dFTBossAnimDying_joint5[74];
extern u16 dFTBossAnimDying_joint7[168];
extern u16 dFTBossAnimDying_joint8[48];
extern u16 dFTBossAnimDying_joint10[24];
extern u16 dFTBossAnimDying_joint11[198];
extern u16 dFTBossAnimDying_joint12[40];
extern u16 dFTBossAnimDying_joint14[44];
extern u16 dFTBossAnimDying_joint15[140];
extern u16 dFTBossAnimDying_joint16[40];
extern u16 dFTBossAnimDying_joint17[44];
extern u16 dFTBossAnimDying_joint19[74];
extern u16 dFTBossAnimDying_joint20[126];
extern u16 dFTBossAnimDying_joint21[48];
extern u16 dFTBossAnimDying_joint23[40];
extern u16 dFTBossAnimDying_joint24[196];
extern u16 dFTBossAnimDying_joint25[76];

/* Joint pointer table (26 entries, 104 bytes) */
u32 dFTBossAnimDying_joints[] = {
	(u32)dFTBossAnimDying_joint1, /* [0] joint 1 */
	(u32)dFTBossAnimDying_joint3, /* [1] joint 3 */
	0x00000000, /* [2] NULL */
	(u32)dFTBossAnimDying_joint4, /* [3] joint 4 */
	(u32)dFTBossAnimDying_joint5, /* [4] joint 5 */
	(u32)dFTBossAnimDying_joint7, /* [5] joint 7 */
	0x00000000, /* [6] NULL */
	(u32)dFTBossAnimDying_joint8, /* [7] joint 8 */
	(u32)dFTBossAnimDying_joint10, /* [8] joint 10 */
	0x00000000, /* [9] NULL */
	(u32)dFTBossAnimDying_joint11, /* [10] joint 11 */
	(u32)dFTBossAnimDying_joint12, /* [11] joint 12 */
	(u32)dFTBossAnimDying_joint14, /* [12] joint 14 */
	0x00000000, /* [13] NULL */
	(u32)dFTBossAnimDying_joint15, /* [14] joint 15 */
	(u32)dFTBossAnimDying_joint16, /* [15] joint 16 */
	(u32)dFTBossAnimDying_joint17, /* [16] joint 17 */
	(u32)dFTBossAnimDying_joint19, /* [17] joint 19 */
	0x00000000, /* [18] NULL */
	(u32)dFTBossAnimDying_joint20, /* [19] joint 20 */
	(u32)dFTBossAnimDying_joint21, /* [20] joint 21 */
	(u32)dFTBossAnimDying_joint23, /* [21] joint 23 */
	0x00000000, /* [22] NULL */
	(u32)dFTBossAnimDying_joint24, /* [23] joint 24 */
	(u32)dFTBossAnimDying_joint25, /* [24] joint 25 */
	0xFFFF02CE, /* [25] END */
};

/* Joint 1 */
u16 dFTBossAnimDying_joint1[8] = {
	ftAnimSetValAfter(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ), 0, 0, 0,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -14),
};

/* Joint 3 */
u16 dFTBossAnimDying_joint3[14] = {
	ftAnimSetValAfter(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 804, 0, 0, 1200, 0, 4096, 4096, 4096,
	ftAnimBlock(0, 60),
	ftAnimLoop(0x6800, -26),
};

/* Joint 4 */
u16 dFTBossAnimDying_joint4[26] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), -2502,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -2412,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -2502,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -2412,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 15), -2502,
	ftAnimLoop(0x6800, -48),
	ftAnimEnd(),
};

/* Joint 5 */
u16 dFTBossAnimDying_joint5[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX), 357,
	ftAnimSetValAfterBlock(FT_ANIM_ROTY | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 0, 0, 0, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 446,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX, 3), 357,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 7 */
u16 dFTBossAnimDying_joint7[168] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 0, -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 683, -1280, 155, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 107, 11, -17, 17, 107, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 71, 11, -71, 17, 71, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, 11, 89, 17, 178, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 142, 11, 35, 17, 142, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 250, 11, 196, 17, 250, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 214, 11, 142, 17, 214, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 321, 11, 303, 17, 321, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 285, 11, 250, 17, 285, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 393, 11, 411, 17, 393, 11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 357, 357, 357,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 393, -11, 411, -17, 393, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 285, -11, 250, -17, 285, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 321, -11, 303, -17, 321, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 214, -11, 142, -17, 214, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 250, -11, 196, -17, 250, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 142, -11, 35, -17, 142, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 178, -11, 89, -17, 178, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 71, -11, -71, -17, 71, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 107, -11, -17, -17, 107, -11,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 3), 0, -178, 0,
	ftAnimLoop(0x6800, -332),
	ftAnimEnd(),
};

/* Joint 8 */
u16 dFTBossAnimDying_joint8[48] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 2505, 0, -1329, 0, -1227, 0,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 45), -1181, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 59), 2505, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 42), -1469, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1459, 10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 16), -1330, 1,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1187, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -1227, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 2505, 0, -1329, 0, -1227, 0,
	ftAnimLoop(0x6800, -92),
	ftAnimEnd(),
};

/* Joint 10 */
u16 dFTBossAnimDying_joint10[24] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -178, 0,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 40), -377, 11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -365, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -179, 1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -178, 0,
	ftAnimLoop(0x6800, -46),
};

/* Joint 11 */
u16 dFTBossAnimDying_joint11[198] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -1608, -20, -268, 0, 0, 40,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), -167, 8,
	ftAnimSetValRateT(FT_ANIM_ROTX, 12), -1786, 9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 231, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 265, 55,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), 472, -27,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -171, -10,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), -199, 12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 426, -44,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 288, -80,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1783, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), -1694, -17,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 198, -76,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 198, -14,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1710, -5,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), -1792, -14,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 178, -6,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 413, 1,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY, 1), -1797, 0, -194, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -131, 9,
	ftAnimSetValRateT(FT_ANIM_ROTX, 20), -1783, 13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 403, -2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 576, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 561, -7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 658, -34,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -112, 23,
	ftAnimSetValRateT(FT_ANIM_ROTY, 8), -127, -15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 610, -43,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 514, -66,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -153, -29,
	ftAnimSetValRateT(FT_ANIM_ROTY, 13), -268, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 436, -69,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 307, -75,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1779, 0,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), -1674, 15,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, -79,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 79, -64,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -1648, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTZ, 1), -1611, 19, 5, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -1608, 2, -268, 0, 0, -5,
	ftAnimLoop(0x6800, -392),
	ftAnimEnd(),
};

/* Joint 12 */
u16 dFTBossAnimDying_joint12[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -22,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -243, 31,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -210, 32,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -268, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -293, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -291, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -265, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -28, 16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 28,
	ftAnimLoop(0x6800, -78),
};

/* Joint 14 */
u16 dFTBossAnimDying_joint14[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), 0, -2,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -373, 28,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -338, 39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -136, -29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -170, -36,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -487, 38,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -446, 40,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -7, 5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 0, 7,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 15 */
u16 dFTBossAnimDying_joint15[140] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), -13, -8, -1520, -1, -1527, 52,
	ftAnimSetValRateT(FT_ANIM_ROTY, 18), -1533, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 33), -85, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1259, 27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1223, 57,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), -1002, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1045, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1176, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1260, -70,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1247, -5,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1533, -1,
	ftAnimSetValRateT(FT_ANIM_ROTY, 29), -1522, 1,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1258, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1011, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1027, -11,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -980, -44,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), -84, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 25), -14, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1035, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1096, -59,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1167, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1331, -75,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1415, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1492, -44,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), -1521, 0,
	ftAnimSetValRateT(FT_ANIM_ROTY, 10), -1520, 0,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1544, -41,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1497, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1524, -15,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), -13, 0, -1520, 0, -1527, -3,
	ftAnimLoop(0x6800, -276),
	ftAnimEnd(),
};

/* Joint 16 */
u16 dFTBossAnimDying_joint16[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -128, -31,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -506, 21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -482, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 20), -263, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -309, -45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -275, 44,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -230, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -108, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -128, -19,
	ftAnimLoop(0x6800, -78),
};

/* Joint 17 */
u16 dFTBossAnimDying_joint17[44] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -48, -30,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, 4096, 4096, 4096,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -504, 29,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -470, 37,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 21), -248, -55,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -303, -53,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 10), -206, 52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -155, 48,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -30, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -48, -17,
	ftAnimLoop(0x6800, -84),
	ftAnimEnd(),
};

/* Joint 19 */
u16 dFTBossAnimDying_joint19[74] = {
	ftAnimSetVal0Rate(FT_ANIM_ROTY), -44,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTZ | FT_ANIM_TRAX | FT_ANIM_TRAY | FT_ANIM_TRAZ | FT_ANIM_SCAX | FT_ANIM_SCAY | FT_ANIM_SCAZ), 0, 0, -99, -2025, 512, 4096, 4096, 4096,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -134,
	ftAnimSetVal0RateBlockT(FT_ANIM_ROTY, 3), -44,
	ftAnimLoop(0x6800, -144),
	ftAnimEnd(),
};

/* Joint 20 */
u16 dFTBossAnimDying_joint20[126] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 1637, 1, 84, 0, 169, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 21), 32, 4,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 1630, -10,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 154, -34,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 131, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 4), 236, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 218, -1,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 498, 14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 500, 7,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 555, -74,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 42, 11,
	ftAnimSetValRateT(FT_ANIM_ROTY, 37), 81, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 463, -86,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 209, -79,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 125, -64,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), 172, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 1622, -2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 29), 1644, -8,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 154, -7,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 328, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 305, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 471, -12,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 447, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 481, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 411, -63,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), 281, -62,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), 211, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 1637, -6, 84, 2, 169, -42,
	ftAnimLoop(0x6800, -248),
	ftAnimEnd(),
};

/* Joint 21 */
u16 dFTBossAnimDying_joint21[48] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -218, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -405, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -448, -39,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 11), -240, 51,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -191, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -362, -22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -384, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -287, 30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -258, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -235, 20,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -218, 16,
	ftAnimLoop(0x6800, -94),
};

/* Joint 23 */
u16 dFTBossAnimDying_joint23[40] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -139, 13,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 15), -364, -56,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -420, -52,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 9), -295, 68,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -227, 65,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 19), -364, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -389, -23,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 13), -157, 22,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -139, 18,
	ftAnimLoop(0x6800, -78),
};

/* Joint 24 */
u16 dFTBossAnimDying_joint24[196] = {
	ftAnimSetValRateBlock(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ), 147, 18, 1381, 12, -1298, 43,
	ftAnimSetValRateT(FT_ANIM_ROTY, 9), 1492, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 17), 148, -30,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1149, -5,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1145, 24,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 4), -1035, -36,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1482, -17,
	ftAnimSetValRateT(FT_ANIM_ROTY, 17), 1403, 4,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1086, -47,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1214, -73,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1297, -71,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1331, -27,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 121, -13,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 113, 7,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1367, -22,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1237, -24,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 23,
	ftAnimSetValRateT(FT_ANIM_ROTX, 8), 166, -10,
	ftAnimBlock(0, 2),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1399, -7,
	ftAnimSetValRateT(FT_ANIM_ROTY, 23), 1382, 2,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1274, -30,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1302, -62,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 145, -27,
	ftAnimSetValRateT(FT_ANIM_ROTX, 7), 60, -18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1377, -64,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 5), -1436, -43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1487, -37,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1386, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 48, 2,
	ftAnimSetValRateT(FT_ANIM_ROTX, 5), 93, -9,
	ftAnimBlock(0, 4),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1418, -21,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1311, -26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 88, 6,
	ftAnimSetValRateT(FT_ANIM_ROTX, 6), 117, 3,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTY, 1), 1378, -6,
	ftAnimSetValRateT(FT_ANIM_ROTY, 7), 1384, -6,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1349, -27,
	ftAnimSetValRateT(FT_ANIM_ROTZ, 5), -1255, -23,
	ftAnimBlock(0, 1),
	ftAnimSetValRateBlockT(FT_ANIM_ROTX, 1), 133, 19,
	ftAnimSetValRateT(FT_ANIM_ROTX, 4), 151, -9,
	ftAnimBlock(0, 3),
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -1288, -21,
	ftAnimSetValRateBlockT(FT_ANIM_ROTX | FT_ANIM_ROTY | FT_ANIM_ROTZ, 1), 147, -4, 1381, -2, -1298, -9,
	ftAnimLoop(0x6800, -388),
	ftAnimEnd(),
};

/* Joint 25 */
u16 dFTBossAnimDying_joint25[76] = {
	ftAnimSetValRate(FT_ANIM_ROTZ), -239, -12,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -249, 26,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -222, 24,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 18), -170, 19,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -150, 18,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 23), -229, -9,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -239, -9,
	ftAnimLoop(0x6800, -62),
	ftAnimSetValRate(FT_ANIM_ROTZ), -296, -19,
	ftAnimSetValAfterBlock(FT_ANIM_ROTX | FT_ANIM_ROTY), 0, 0,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -403, 43,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -357, 45,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 12), -273, -16,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -288, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 16), -102, -11,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -115, -13,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 14), -281, -14,
	ftAnimSetValRateBlockT(FT_ANIM_ROTZ, 1), -296, -15,
	ftAnimLoop(0x6800, -78),
	ftAnimEnd(),
	0x0000, 0x0000, 0x0000,
};
